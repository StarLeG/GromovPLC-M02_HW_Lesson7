#include "calculator.h"

Calculator::Calculator() {}

int Calculator::reset()
{
    val1 = 0;
    val2 = 0;
    oper = 0;
    result = 0;

    return 0;
}

int Calculator::digit(int d)
{
    if(oper == 0){
        val1 = val1 * 10 + d;
        result = val1;
    } else {
        val2 = val2 * 10 + d;
         result = val2;
    }
    return 0;
}

int Calculator::operation(int o)
{
    oper = o;
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
        result = val1 / val2;
        break;
    default:
        break;
    }
    return 0;
}

QString Calculator::lcd()
{
    return QString::number(result);
}
