/*fraction_utils.c
creatore_originale: holeryn
data: 10 Agosto 2019
Ora: 03:02 di notte
*/

#include <stdio.h>
#include "fraction_utils.h"

int mcd(int a, int b)
{
    while (a != b) {
        if (a > b) {
            a = a - b;
        }
        else {
            b = b - a;
        }
    }

    return a;
}

int mcm(int a, int b)
{
    return (a*b)/mcd(a,b);
}

fraction sum_fraction(fraction f1, fraction f2)
{
    int mcm_d = mcm(f1.denominator, f2.denominator);
    fraction f;
    f.numerator = ((mcm_d / f1.denominator)*f1.numerator)+((mcm_d / f2.denominator)*f2.numerator);
    f.denominator = mcm_d;

    return f;
}

fraction sottract_fraction(fraction f1, fraction f2)
{
    int mcm_d = mcm(f1.denominator, f2.denominator);
    fraction f;
    f.numerator = ((mcm_d / f1.denominator)*f1.numerator)-((mcm_d / f2.denominator)*f2.numerator);
    f.denominator = mcm_d;

    return f;
}

fraction multiply_fraction(fraction f1, fraction f2)
{
    fraction f;
    f.numerator = f1.numerator * f2.numerator;
    f.denominator = f1.denominator * f2.denominator;

    return f;
}

fraction divide_fraction(fraction f1,fraction f2)
{
    fraction f;
    f.numerator = f1.numerator * f2.denominator;
    f.denominator = f1.denominator * f2.numerator;

    return f;
}

fraction minimi_termini(fraction f)
{
    fraction frac;
    int mcd_value = mcd(f.numerator,f.denominator);
    frac.numerator = f.numerator / mcd_value;
    frac.denominator = f.denominator / mcd_value;
    return frac;
}
