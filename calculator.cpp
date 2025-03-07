#include "calculator.h"

Calculator::Calculator()
    : val1(0.), val2(0.), result(0.), oper(Operation::None),
    lastOper(Operation::None), isDecimal(false), decimalPlaces(0),
    isCalculated(false) {}

int Calculator::reset()
{
    val1 = 0.;
    val2 = 0.;
    oper = Operation::None;
    lastOper = Operation::None;
    result = 0.;
    isCalculated = false;

    return 0;
}

int Calculator::digit(int d)
{
    if (!isDecimal) {
        if (oper == Operation::None) {
            val1 = val1 * 10 + d;
            result = val1;
        } else {
            val2 = val2 * 10 + d;
            result = val2;
        }
    } else {
        if (oper == Operation::None) {
            val1 = val1 + d / pow(10, ++decimalPlaces);
            result = val1;
        } else {
            val2 = val2 + d / pow(10, ++decimalPlaces);
            result = val2;
        }
    }

    isCalculated = false;

    return 0;
}

int Calculator::operation(Operation o)
{
    if (isCalculated) {
        val1 = result;
        val2 = 0.;
    }

    oper = o;
    lastOper = o;
    isDecimal = false;
    decimalPlaces = 0;
    isCalculated = false;
    return 0;
}

int Calculator::calculate()
{
    if (oper == Operation::None && lastOper != Operation::None) {
        oper = lastOper;
    }

    switch (oper) {
    case Operation::Add:
        result = val1 + val2;
        break;
    case Operation::Subtract:
        result = val1 - val2;
        break;
    case Operation::Multiply:
        result = val1 * val2;
        break;
    case Operation::Divide:
        if (val2 != 0) {
            result = val1 / val2;
        } else {
            result = 0;
        }
        break;
    default:
        result  = 0;
        break;
    }


    val1 = result;
   // val2 = 0.;
    isCalculated = true;
    qDebug() << "Val1 = " << val1;
    qDebug() << "Val2 = " << val2;
    qDebug() << "Result = " << result;

    return 0;
}

int Calculator::changeSign()
{
    if (oper == Operation::None) {
        val1 = -val1;
        result = val1;
    } else {
        val2 = -val2;
        result = val2;
    }
    return 0;
}

void Calculator::setDecimal()
{
    isDecimal = true;
    decimalPlaces = 0;
}

QString Calculator::lcd()
{
    return QString::number(result, 'g', 10);
}


