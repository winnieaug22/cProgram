/*===========================================================================*/
// File Name   : horizontal_histogram_of_word.c
// Author      : Winnie Chen
// E-mail      : winne.aug22@gmail.com
// Created     : Thu 14 Aug 2014 03:32:01 PM CST
// Modified    : Thu 14 Aug 2014 03:32:51 PM CST
// Description : 
//   Write a program to print a histogram of the lengths of words in its input. It is easy to draw the 
//   histogram with the bars horizontal; a vertical orientation is more challenging.
/*===========================================================================*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int horizontal_bars ( int buffer[], int word_id );
int vertical_bars( int buffer[] ,int word_id );
void str_concatenated(char *str1, char *str2);

int main(int argc, const char *argv[])
{
    char input_char;
    int word_id = 0;

    FILE *fp = NULL;
    char *file_name = "test.txt";
    int buffer[100]={0};
    

    

    // open file
    if ((fp = fopen(file_name, "r")) != NULL) {
        
    } else {
        fprintf(stderr, "can't open file ");
        perror(file_name);
        exit(-1);
    }
    // print txt file && count word length
    while ( (input_char = fgetc(fp)) != EOF ) {
        putchar( input_char );
        
        if(input_char=='\t' || input_char==' ' || input_char=='\n') {
            word_id++;
        } else {
            buffer[word_id]++;
        }
    }

    // choose how to layout    
    printf("\nTo choose: (1) horizontal bars. (2) vertical bars.\n");
    if (  getchar() == '1' ) {
        horizontal_bars ( buffer , word_id);
    } else {
        vertical_bars( buffer , word_id);
    }

    fclose(fp);
    return 0;
}
int horizontal_bars ( int buffer[] ,int word_id )
{
    int i = 0;
    int j = 0;
    printf("\n=== horizontal_bars!!===\n");
    // print 

    for ( i=0 ; i<word_id ; i++ ) {
        printf("|%2d| ",i+1);
        for ( j=0 ; j<buffer[i]; j++ ) {
            putchar('*');
        }
        putchar('\n');
    }


    return 0;    
}

int vertical_bars( int buffer[] ,int word_id )
{
    printf("\n===vertical_bars!!===\n");
    int i = 0;
    int j = 0;
    int max = 0;

    // label x-axis
    printf("|%2c|", ' ');
    for ( i=0 ; i<word_id ; i++ ) {
        printf("%2d|", i+1);
        // find max
        max = (buffer[i]>max) ? buffer[i]:max;
    }
    putchar('\n');

    // bar
    printf("|%2c|", ' ');
    for ( i=0 ; i<word_id ; i++ ) {
        printf("%2c|", '_');
    }
    putchar('\n');
    
    // label y-axis
    for ( i=max-1 ; i>=0; i-- ) {
        printf("|%2d|", i+1);
        // print contain
        for ( j=0 ; j<word_id ; j++ ) {
            printf("%2c|", i < buffer[j] ? '*' : ' ');
        }
        putchar('\n');
    }
    
    return 0;

}
