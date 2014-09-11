/*===========================================================================*/
// File Name   : print_character_num.c
// Author      : Winnie Chen
// E-mail      : winne.aug22@gmail.com
// Created     : Tue 02 Sep 2014 01:42:09 PM CST
// Modified    : TIMESTAMP
// Description : 
// Write a program to print a histogram of the frequencies of different characters in its input. 
/*===========================================================================*/
#include <stdio.h>
#include <stdlib.h>

#define VISUAL_CHAR_START 33 
#define VISUAL_CHAR_END 126 
#define BUF_SIZE (VISUAL_CHAR_END-VISUAL_CHAR_START) 

void num_to_repeat_char ( int num, char symbol );

int main(int argc, const char *argv[])
{
     FILE *fp             = NULL;
     char *file_name      = "text.txt";
     int buffer[BUF_SIZE] = {0};

     int i                = 0;
     char c               = NULL;
     int char_code        = 0;

     if ((fp = fopen(file_name, "r")) != NULL) {
         
     } else {
         fprintf(stderr, "can't open file ");
         perror(file_name);
         exit(-1);
     }

     while ( (c=fgetc(fp)) != EOF ) {
        buffer[(int)c-VISUAL_CHAR_START]++;
     }
     for( i=0 ; i<BUF_SIZE ; i++ ) {
        /* printf("%3d[%2c]:%4d\n", i+VISUAL_CHAR_START, (char)(i+VISUAL_CHAR_START), buffer[i] ); */
        char_code = i+VISUAL_CHAR_START;
        printf("%3d[%2c]:", char_code, (char)char_code);
        num_to_repeat_char(buffer[i],'*');
        putchar('\n');
     }
     fclose(fp);
    return 0;
}
void num_to_repeat_char ( int num, char symbol )
{
    int i = 0;
    for( i=0 ; i<num ; i++ ) {
        printf("%c",symbol);
    }

}
