#include <stdio.h>
#include "my_mat.h"
//#include "my_mat.c"

#define SIZE 10

int main()
{
    int mat [SIZE][SIZE] = {0};
    char c ='A';
    while(c != 'D')
    {
        //printf("\nEnter A/B/C/D:");
        scanf("%c", &c);
        switch (c)
        {
        case 'A':
            mat_A(mat);
            break;
        case 'B':
            mat_B(mat);
            break;
        case 'C':
            mat_C(mat);
            break;
        default:
            break;
        }
    }

    return 0;
}