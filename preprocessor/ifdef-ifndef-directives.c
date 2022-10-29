/*******************************************************************************
@desc C program to understand the use of #ifdef and #ifndef directives.
*******************************************************************************/

// Sytem Headers
#include <stdio.h>  // printf

// Macros
#define FLAG
// #define STATUS

/*******************************************************************************
@desc Main
*******************************************************************************/
int main(void)
{
    int iNum1 = 4;
    int iNum2 = 7;

    // The block is executed if FLAG is defined
    #ifdef FLAG
        printf("FLAG is defined\n");
        iNum1++;
        iNum2++;
    #endif

    // This block is executed if STATUS is not defined
    #ifndef STATUS
        printf("STATUS is not defined\n");
        iNum1--;
        iNum2--;
    #endif

    printf("Number1 = %d, Number2 = %d\n", iNum1, iNum2);

    return 0;
}
