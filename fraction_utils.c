/*fraction_utils.c
creatore_originale: holeryn
data: 10 Agosto 2019
Ora: 03:02 di notte
*/


/*################ DIRETTIVE PER IL PREPROCESSORE ################ */
#include <stdio.h>
#include "fraction_utils.h"

/*################ FUNZIONI ################ */

/************************************
 * mcd : calcola l'mcd di a e b     *
 * returns : int (l'mcd)            *
 ************************************/
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

/************************************
 * mcm : calcola l'mcm di a e b     *
 * returns : int (l'mcm)            *
 ************************************/
int mcm(int a, int b)
{
    return (a*b)/mcd(a,b);
}

/************************************
 * sum:fraction: calcola la somma   *
 * tra f1 e f2                      *
 * returns: fraction (la somma tra  *
 * le due frazioni)                 *
 *************************************/
fraction sum_fraction(fraction f1, fraction f2)
{
    int mcm_d = mcm(f1.denominator, f2.denominator);
    fraction f;
    f.numerator = ((mcm_d / f1.denominator)*f1.numerator)+((mcm_d / f2.denominator)*f2.numerator);
    f.denominator = mcm_d;

    return f;
}

/************************************
 * sottract_fraction: calcola la    *
 * sottrazione tra due frazioni     *
 * returns: fraction (la            *
 * sottrazione tra le due frazioni) *
 ************************************/
fraction sottract_fraction(fraction f1, fraction f2)
{
    int mcm_d = mcm(f1.denominator, f2.denominator);
    fraction f;
    f.numerator = ((mcm_d / f1.denominator)*f1.numerator)-((mcm_d / f2.denominator)*f2.numerator);
    f.denominator = mcm_d;

    return f;
}

/************************************
 * multiply_fraction: calcola la    *
 * moltiplicazione tra due frazioni *
 * returns: fraction (la            *
 * moltiplicazione tra le due       *
 * frazione)                        *
 ************************************/
fraction multiply_fraction(fraction f1, fraction f2)
{
    fraction f;
    f.numerator = f1.numerator * f2.numerator;
    f.denominator = f1.denominator * f2.denominator;

    return f;
}

/************************************
 * divide_fraction: calcola la      *
 * divisione tra due frazioni.      *
 * returns: fraction (la divisione  *
 * le due frazioni)                 *
 ************************************/
fraction divide_fraction(fraction f1,fraction f2)
{
    fraction f;
    f.numerator = f1.numerator * f2.denominator;
    f.denominator = f1.denominator * f2.numerator;

    return f;
}

/************************************
 * minimi_termini: riduci ai minimi *
 * termini una frazione             *
 * returns: nothing (void)          *
 ************************************/
fraction minimi_termini(fraction f)
{
    fraction frac;
    int mcd_value = mcd(f.numerator,f.denominator);
    frac.numerator = f.numerator / mcd_value;
    frac.denominator = f.denominator / mcd_value;
    return frac;
}
