/*===========================================================================*/
// File Name   : TempaeratureConversionCtoF.c
// Author      : Winnie Chen
// E-mail      : winne.aug22@gmail.com
// Created     : Thu 26 Dec 2013 11:13:48 AM CST
// Modified    : TIMESTAMP
// Description : Modify the temperature conversion program to print the table
//               in reverse order, that is, from 300 degrees to 0
/*===========================================================================*/
#include <stdio.h>


/*===========================================================================*/
int main( void )
{
    float celsius = 0;
    float fahr = 0;

    int upper = 300;
    int lower = 0;
    int step = 20;

    printf("%3s\t%7s\n", "celsius", "fahr" );
    for ( celsius = upper ; celsius >= lower ; celsius -= step )
    {
        fahr = ( 9.0 / 5.0 ) * celsius +  32.0; 
        printf( "%3.0f\t%6.1f\n", celsius, fahr );
    }

    return 0;
}
/*===========================================================================*/
