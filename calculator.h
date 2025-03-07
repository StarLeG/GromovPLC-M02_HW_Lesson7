#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QString>
#include <cmath>

class Calculator
{
public:

    enum Operation {
        None,  // Нет операции
        Add ,   // Сложение
        Subtract,  // Вычитание
        Multiply,  // Умножение
        Divide     // Деление
    };

    Calculator();
    int reset();
    int digit(int d);
    int operation(Operation o);
    int calculate();
    int changeSign();
    void setDecimal();
    QString lcd();

private:
    double val1;
    double val2;
    double result;
    Operation oper;
    bool isDecimal;
    int decimalPlaces;

};

#endif // CALCULATOR_H
