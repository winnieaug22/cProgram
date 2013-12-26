/*===========================================================================*/
// File Name   : TemperatureConversion.c
// Author      : Winnie Chen
// E-mail      : winne.aug22@gmail.com
// Created     : Thu 26 Dec 2013 10:51:10 AM CST
// Modified    : Thu 26 Dec 2013 10:51:10 AM CST
// Description : Modify the temperature conversion program to print a heading above the table.
/*===========================================================================*/
#include <stdio.h>

int main( void )
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;


    printf("%3s %7s\n", "fahr", "celsius");

    fahr = lower;
    while( fahr <= upper )
    {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}
