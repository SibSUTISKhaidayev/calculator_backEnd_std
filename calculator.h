#ifndef CALCULATOR_H
#define CALCULATOR_H


class calculator
{
private:
    int a_;
    int b_;

    static calculator *instance_;
    calculator();
public:
    calculator instance();

};

#endif // CALCULATOR_H
