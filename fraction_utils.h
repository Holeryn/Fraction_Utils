#ifndef fraction_UTILS
#define fraction_UTILS

/*struttura della frazione */
typedef struct{
    int numerator;
    int denominator;
}fraction;

/************************************
 * mcd : calcola l'mcd di a e b     *
 * returns : int ì                  *
 ************************************/
int mcd(int a,int b);

/************************************
 * mcm : calcola l'mcm di a e b     *
 * returns : int                   *
 ************************************/
int mcm(int a,int b);

/************************************
 * sum:fraction: calcola la somma   *
 * tra f1 e f2                      *
 * returns: fraction                *
 ************************************/
fraction sum_fraction(fraction f1,fraction f2);

/************************************
 * sottract_fraction: calcola la    *
 * sottrazione tra due frazioni     *
 * returns: fraction                *
 ************************************/
fraction sottract_fraction(fraction f1,fraction f2);

/************************************
 * multiply_fraction: calcola la    *
 * moltiplicazione tra due frazioni *
 * returns: fraction                *
 ************************************/
fraction multiply_fraction(fraction f1,fraction f2);

/************************************
 * divide_fraction: calcola la      *
 * divisione tra due frazioni.      *
 * returns: fraction                *
 ************************************/
fraction divide_fraction(fraction f1, fraction f2);

/************************************
 * minimi_termini: riduci ai minimi *
 * termini una frazione             *
 * returns: nothing (void)          *
 ************************************/
fraction minimi_termini(fraction f);

#endif
