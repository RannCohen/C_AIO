#include <stdio.h>

#define KPM 1.609344

int main(void)
{
    float kilometers, miles;
    float *pmiles, *pk_address;   //pointer decleration

    printf("Enter a valueint miles: ");
    scanf("%f", &miles);

    kilometers = miles * KPM;

    printf("%.2f miles works out to %.2f kilometers.\n", miles, kilometers);

    pmiles = &miles;  //initialize pointer
    pk_address = &kilometers;
    printf("Variable 'miles' is %ld bytes long at %p address\n", sizeof(miles), pmiles);
    printf("Variable 'kilometerss' is %ld bytes long at %p address\n", sizeof(kilometers), pk_address);
    return (0);
}