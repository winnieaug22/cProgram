/*===========================================================================*/
// File Name   : VerifyGetcharEOF.c
// Author      : Winnie Chen
// E-mail      : winne.aug22@gmail.com
// Created     : Thu 26 Dec 2013 11:36:45 AM CST
// Modified    : TIMESTAMP
// Description : Verify that the expression getchar() != EOF is 0 or 1. 
/*===========================================================================*/

#include <stdio.h>

/*===========================================================================*/
int main ( void )
{
    /*
    if ( getchar() != EOF )
    {
        printf ( "getchar() ! = EOF ==> Ture(1) \n" );
    }
    else
    {
        printf ( "getchar() ! = EOF ==> False(0) \n" );
    }
    */
    printf ( "C1: press a key. [ENTER] would be nice ^^ => TURE(1)...the first char is not EOF \n" ); //the first char us getting is not EOF -> TURE(1)
    printf ( "C2: just press [Control+d] => FALSE(0)...the first char is EOF \n" );
    printf ( "C3: just press [Control+z] => Stop...[echo $?] is 148 \n");

    printf ( "The expression [getchar() != EOF] evaluates to %d\n", getchar() != EOF );
    return 0;
}
/*===========================================================================*/
