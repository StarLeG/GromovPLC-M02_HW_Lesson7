#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QString>

class Calculator
{
public:
    Calculator();
    int reset();
    int digit(int d);
    int operation(int o);
    int calculate();
    int changeSign();
    QString lcd();

private:
    double val1;
    double val2;
    double result;
    int oper;
};

#endif // CALCULATOR_H
