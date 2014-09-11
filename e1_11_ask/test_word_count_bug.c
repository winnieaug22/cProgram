/*===========================================================================*/
// File Name   : test_word_count_bug.c
// Author      : Winnie Chen
// E-mail      : winne.aug22@gmail.com
// Created     : Thu 14 Aug 2014 01:40:09 PM CST
// Modified    : TIMESTAMP
// Description :
//   How would you test the word count program? 
//   What kinds of input are most likely to uncover bugs 
//   if there are any? 
//   <Anser>
//   giving three kinds of inputs.
//   1. Valid Input. (it could be any stream of space separate text. It has valid space, newline and tab characters.)
//   2. Boundary Condition Inputs.(a file entirely consisting of n, or a file entirely consisting of t character or a empty file.)
//   3. Invalid Input. (an unclosed file which does not have EOF, which is tricky to provide can be given to this program.
//      A unicode character file can be given and see if getchar() handles it properly.)
/*===========================================================================*/

#include <stdio.h>
int main(int argc, const char *argv[])
{
    
    return 0;
}
