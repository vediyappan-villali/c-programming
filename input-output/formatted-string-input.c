/*******************************************************************************
C program to illustrate formatted for string input.
*******************************************************************************/

// System headers
#include <stdio.h>  // Standard IO

/*******************************************************************************
@desc Main
*******************************************************************************/
int main(void)
{
    char sName[16];

    printf("Enter Name: ");
    scanf("%3s", sName);

    printf("Name = %s\n", sName);

    return 0;
}
