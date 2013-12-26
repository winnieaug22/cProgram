/**
 * @file PrintBackslashC.c
 * @brief 
 * Experiment to find out what happens when printf 's argument string
 * contains \c, where c is some character not listed above
 * @author Winnie Chen <winne.aug22@gmail.com>
 * @version 
 * @date 2013-12-25
 */

#include <stdio.h>

/*===========================================================================*/
int main( void )
{

    printf("newline: \\n = [\n] \n");
    printf("tab: \\t = [\t] \n");
    printf("backspace: \\b = [\b] \n");
    printf("double quote: \" \n");
    printf("backslash: \\ \n");
    printf("=====================\n");
    printf("Audible or visual alert. [\a] \n");
    printf("Form feed. [\f] \n");
    printf("backspace + Form feed. [\b\f] \n");
    printf("This escape, [\r], moves the active position to the initial position of the current line. \n");
    printf("Vertical tab [\v] is trivky, as its behavior is unspecified under certain conditions. \n");
    printf("backspace + Vertical tab [\b\v] is trivky, as its behavior is unspecified under certain conditions. \n");

    return 0;

}
/*===========================================================================*/
