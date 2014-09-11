/*===========================================================================*/
// File Name   : replace_more_banks_to_one.c                      
// Author      : Winnie Chen                                      
// E-mail      : winne.aug22@gmail.com                            
// Created     : Tue 12 Aug 2014 05:25:34 PM CST                  
// Modified    : TIMESTAMP                                        
// Description : 
//  Write a program to copy its input to its output,
//  replacing each string of one or more blanks by a single blank.
/*===========================================================================*/
#include <stdio.h>

int main(int argc, const char *argv[])
{
    char input_char       = NULL;
    char first_blank_flag = 0;
    
    while ( (input_char = getchar()) != EOF ) {
        if ( input_char != ' ' ) {
            first_blank_flag = 0;
            putchar ( input_char );
        }
        else if ( !first_blank_flag ) {
                first_blank_flag = 1;
                putchar ( ' ' );
        }

    }
    return 0;
}
