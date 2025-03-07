#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QString>
#include <cmath>
#include <QDebug>

class Calculator
{
public:

    enum Operation {
        None,
        Add ,
        Subtract,
        Multiply,
        Divide
    };

    Calculator();
    int reset();
    int digit(int d);
    int operation(Operation o);
    int calculate();
    int changeSign();
    void setDecimal();
    void backspace();
    QString lcd();

private:
    double val1;
    double val2;
    double result;
    Operation oper;
    Operation lastOper;
    bool isDecimal;
    int decimalPlaces;
    bool isCalculated;

};

#endif // CALCULATOR_H
