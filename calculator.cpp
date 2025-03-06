#include "calculator.h"

Calculator::Calculator() {}

int Calculator::reset()
{
    val1 = 0.;
    val2 = 0.;
    oper = 0;
    result = 0.;

    return 0;
}

int Calculator::digit(int d)
{
    if (!isDecimal) {
        if (oper == 0) {
            val1 = val1 * 10 + d;
            result = val1;
        } else {
            val2 = val2 * 10 + d;
            result = val2;
        }
    } else {
        if (oper == 0) {
            val1 = val1 + d / pow(10, ++decimalPlaces);
            result = val1;
        } else {
            val2 = val2 + d / pow(10, ++decimalPlaces);
            result = val2;
        }
    }
    return 0;
}

int Calculator::operation(int o)
{
    oper = o;
    isDecimal = false;
    decimalPlaces = 0;
    return 0;
}

int Calculator::calculate()
{
    switch (oper) {
    case 1:
        result = val1 + val2;
        break;
    case 2:
        result = val1 - val2;
        break;
    case 3:
        result = val1 * val2;
        break;
    case 4:
        if (val2 != 0) {
            result = val1 / val2;
        } else {
            result = 0; // Обработка деления на ноль
        }
        break;
    default:
        result  = 0;
        break;
    }
    return 0;
}

int Calculator::changeSign()
{
    if (oper == 0) {
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
    return QString::number(result, 'f', decimalPlaces);
}


