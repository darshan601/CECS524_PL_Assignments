#include <stdio.h>
#include <stdbool.h>
# include <complex.h>

void main()
{
    _Bool a = true;
    
    char b = 'a';
    unsigned char b1='a';

    short int c = 1;

    int d = 100;
    unsigned int d1=1;

    long int e = 1000000000;

    long long int f = 10000000000000000;

    printf("%lld\n", f);

    float g=10.6;
    

    double h= 10.708;
    

    long double i=11.0986;

    printf("%Lf\n",i);

    float complex z =1+2*I;
    double complex z1 =1+2*I;
    long double complex z2 =1+2*I;

    printf("%f %f\n",creal(z2),cimag(z2));
}