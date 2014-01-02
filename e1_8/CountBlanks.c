/*===========================================================================*/
// File Name   : CountBlanks.c
// Author      : Winnie Chen
// E-mail      : winne.aug22@gmail.com
// Created     : Thu 02 Jan 2014 11:38:01 AM CST
// Modified    : TIMESTAMP
// Description : Write a program to count blanks, tabs, and newlines.
/*===========================================================================*/
#define TYPE_CNT 3
#define TABLE_SIZE 33

#include <stdio.h>
#include <stdlib.h>
/*===========================================================================*/
enum TYPE{
    BLANKS   = 0x20,
    TABS     = 0x09,
    NEWLINES = 0x0a  
};
/*===========================================================================*/
int main(int argc, const char *argv[])
{
    int nc[ TYPE_CNT ] = { 0 };
    int c = 0;

    int TransTable[ TABLE_SIZE ] = { 0 };
    TransTable[ BLANKS ] = 0;
    TransTable[ TABS ] = 1;
    TransTable[ NEWLINES ] = 2;

    printf("key in an article. I will count blanks, tabs, and newlines.\n");
    while ((c=getchar())!=EOF)
    {
        if( c < TABLE_SIZE )
        {
            nc[TransTable[c]]++;
        }
    }

    //int i;
    //for ( i=0 ; i<TYPE_CNT ; i++ )
    {
        printf("blanks: nc[%d] = %d\n", 0 , nc[0] );
        printf("tabs: nc[%d] = %d\n", 1 , nc[1] );
        printf("newlines: nc[%d] = %d\n", 2 , nc[2] );
    }

    return 0;
}
