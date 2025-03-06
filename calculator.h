#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QString>
#include <cmath>

class Calculator
{
public:
    Calculator();
    int reset();
    int digit(int d);
    int operation(int o);
    int calculate();
    int changeSign();
    void setDecimal();
    QString lcd();

private:
    double val1;
    double val2;
    double result;
    int oper;
    bool isDecimal;
    int decimalPlaces;

};

#endif // CALCULATOR_H
