#ifndef fraction_UTILS
#define fraction_UTILS

/*struttura della frazione */
typedef struct{
    int numerator;
    int denominator;
}fraction;

/************************************
 * mcd : calcola l'mcd di a e b     *
 * returns : int (l'mcd)            *
 ************************************/
int mcd(int a,int b);

/************************************
 * mcm : calcola l'mcm di a e b     *
 * returns : int (l'mcm)            *
 ************************************/
int mcm(int a,int b);

/************************************
 * sum:fraction: calcola la somma   *
 * tra f1 e f2                      *
 * returns: fraction (la somma tra  *
 * le due frazioni)                 *
 *************************************/
fraction sum_fraction(fraction f1,fraction f2);

/************************************
 * sottract_fraction: calcola la    *
 * sottrazione tra due frazioni     *
 * returns: fraction (la            *
 * sottrazione tra le due frazioni) *
 ************************************/
fraction sottract_fraction(fraction f1,fraction f2);

/************************************
 * multiply_fraction: calcola la    *
 * moltiplicazione tra due frazioni *
 * returns: fraction (la            *
 * moltiplicazione tra le due       *
 * frazione)                        *
 ************************************/
fraction multiply_fraction(fraction f1,fraction f2);

/************************************
 * divide_fraction: calcola la      *
 * divisione tra due frazioni.      *
 * returns: fraction (la divisione  *
 * le due frazioni)                 *
 ************************************/
fraction divide_fraction(fraction f1, fraction f2);

/************************************
 * minimi_termini: riduci ai minimi *
 * termini una frazione             *
 * returns: nothing (void)          *
 ************************************/
fraction minimi_termini(fraction f);

#endif