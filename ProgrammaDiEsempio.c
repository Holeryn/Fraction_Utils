#include <stdio.h>
#include "fraction_utils.h"

int main(void)
{
    fraction s;
    fraction s2; 
    fraction result;

    int type;

s:
    printf("Vuoi fare una somma(0) , una sottrazione(1) , una moltiplicazione (2) oppure una divisione (3): ");
    scanf("%d",&type);

    if(type == 0){
        printf("Inserisci una frazione in questo formato x/y + z/q: ");
        scanf("%d/%d + %d/%d",&s.numerator,&s.denominator,&s2.numerator,&s2.denominator);

        s = minimi_termini(s);
        result = sum_fraction(s,s2);
    }else if(type == 1){
        printf("Inserisci una frazione in questo formato x/y - z/q: ");
        scanf("%d/%d - %d/%d",&s.numerator,&s.denominator,&s2.numerator,&s2.denominator);

        s = minimi_termini(s);
        result = sottract_fraction(s,s2);
    }else if(type == 2){
        printf("Inserisci una frazione in questo formato x/y * z/q: ");
        scanf("%d/%d * %d/%d",&s.numerator,&s.denominator,&s2.numerator,&s2.denominator);

        s = minimi_termini(s);
        result = multiply_fraction(s,s2);
    }else if(type == 3){
        printf("Inserisci una frazione in questo formato x/y / z/q: ");
        scanf("%d/%d / %d/%d",&s.numerator,&s.denominator,&s2.numerator,&s2.denominator);

        s = minimi_termini(s);
        result = divide_fraction(s,s2);
    }else{
        printf("inserisci un numero valido");
        goto s;
    }

    printf("\n%d/%d\n",result.numerator,result.denominator);
}
