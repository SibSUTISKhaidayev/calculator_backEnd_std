#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <iostream>
#include <math.h>

using namespace std;



class calculator
{
public:

    template<typename T>
    static T summa(const T a, const T b);
    template<typename T>
    static T differens(T a, T b);
    template<typename T>
    static T multiplication(T a, T b);
    template<typename T>
    static T segmentation(T a, T b);

    static double degree(const double a, const double b);

    static double sinus(const double a);
    static double cosinus(const double a);


};



#endif // CALCULATOR_H
