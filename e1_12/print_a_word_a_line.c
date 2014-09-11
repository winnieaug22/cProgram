/*===========================================================================*/
// File Name   : print_a_word_a_line.c
// Author      : Winnie Chen
// E-mail      : winne.aug22@gmail.com
// Created     : Thu 14 Aug 2014 01:45:41 PM CST
// Modified    : Thu 14 Aug 2014 01:45:41 PM CST
// Description : 
//   Write a program that prints its input one word per line.
/*===========================================================================*/

#include <stdio.h>

int main(int argc, const char *argv[])
{
    char input_char;
    char last_is_space_flag = 0;

    while ( (input_char = getchar()) != EOF ) {
        if( input_char == ' ' ) {
            if ( !last_is_space_flag ) putchar('\n');
            last_is_space_flag = 1;
        } else {
            putchar(input_char);
            last_is_space_flag = 0;
        }
    }
    return 0;
}
