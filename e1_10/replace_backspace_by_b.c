/*===========================================================================*/
// File Name   : replace_backspace_by_b.c
// Author      : Winnie Chen
// E-mail      : winne.aug22@gmail.com
// Created     : Tue 12 Aug 2014 05:33:30 PM CST
// Modified    : TIMESTAMP
// Description : 
//       Write a Program to copy its input to its output, replacing each tab by t,
//       each backspace by b, and each backslash by \.
//       This makes tabs and backspaces visible in an unambiguous way.
/*===========================================================================*/

#include <stdio.h>

int main(int argc, const char *argv[])
{
    char c;

    while ( (c = getchar()) != EOF )
    {
        switch ( c ){
            case '\t':
                printf("\\t");
                break;
            case '\b':
                printf("\\b");
                break;
            case '\\':
                printf("\\\\");
                break;
            default:
                putchar(c);

        }

    }
    
    return 0;
}

