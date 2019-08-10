#include <stdio.h>

typedef struct{
    int numerator;
    int denominator;
}fration;

int mcd(int a,int b);
int mcm(int a,int b);
fration sum_fraction(fration f1,fration f2);
fration sottract_fraction(fration f1,fration f2);
fration multiply_fraction(fration f1,fration f2);
fration divide_fraction(fration f1, fration f2);

int main(void)
{
    fration s;
    fration s2; 
    fration result;

    int mcd_value;
    int type;

s:
    printf("Vuoi fare una somma(0) , una sottrazione(1) , una moltiplicazione (2) oppure una divisione (3): ");
    scanf("%d",&type);

    if(type == 0){
        printf("Inserisci una frazione in questo formato x/y + z/q: ");
        scanf("%d/%d + %d/%d",&s.numerator,&s.denominator,&s2.numerator,&s2.denominator);

        mcd_value = mcd(s.numerator,s.denominator);
        s.numerator /= mcd_value;
        s.denominator /= mcd_value;
        result = sum_fraction(s,s2);
    }else if(type == 1){
        printf("Inserisci una frazione in questo formato x/y - z/q: ");
        scanf("%d/%d - %d/%d",&s.numerator,&s.denominator,&s2.numerator,&s2.denominator);

        mcd_value = mcd(s.numerator,s.denominator);
        s.numerator /= mcd_value;
        s.denominator /= mcd_value;
        result = sottract_fraction(s,s2);
    }else if(type == 2){
        printf("Inserisci una frazione in questo formato x/y * z/q: ");
        scanf("%d/%d * %d/%d",&s.numerator,&s.denominator,&s2.numerator,&s2.denominator);

        mcd_value = mcd(s.numerator,s.denominator);
        s.numerator /= mcd_value;
        s.denominator /= mcd_value;
        result = multiply_fraction(s,s2);
    }else if(type == 3){
        printf("Inserisci una frazione in questo formato x/y / z/q: ");
        scanf("%d/%d / %d/%d",&s.numerator,&s.denominator,&s2.numerator,&s2.denominator);

        mcd_value = mcd(s.numerator,s.denominator);
        s.numerator /= mcd_value;
        s.denominator /= mcd_value;
        result = divide_fraction(s,s2);
    }else{
        printf("inserisci un numero valido");
        goto s;
    }

    printf("\n%d/%d\n",result.numerator,result.denominator);
}

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

fration sum_fraction(fration f1, fration f2)
{
    int mcm_d = mcm(f1.denominator, f2.denominator);
    fration f;
    f.numerator = ((mcm_d / f1.denominator)*f1.numerator)+((mcm_d / f2.denominator)*f2.numerator);
    f.denominator = mcm_d;
    return f;
}

fration sottract_fraction(fration f1, fration f2)
{
    int mcm_d = mcm(f1.denominator, f2.denominator);
    fration f;
    f.numerator = ((mcm_d / f1.denominator)*f1.numerator)-((mcm_d / f2.denominator)*f2.numerator);
    f.denominator = mcm_d;
    return f;
}

fration multiply_fraction(fration f1, fration f2)
{
    fration f;
    f.numerator = f1.numerator * f2.numerator;
    f.denominator = f1.denominator * f2.denominator;
    return f;
}

fration divide_fraction(fration f1,fration f2)
{
    fration f;
    f.numerator = f1.numerator * f2.denominator;
    f.denominator = f1.denominator * f2.numerator;
    return f;
}
