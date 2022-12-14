#include <stdio.h>
#include "my_mat.h"

#define SIZE 10
#define INFINITY 999999999

void fw_algo(int mat [SIZE][SIZE])
{
    for(int k = 0; k<SIZE; k++)
    {
        for(int i = 0; i<SIZE; i++)
        {
            for(int j = 0; j<SIZE; j++)
            {
                if(mat[i][j] > (mat[i][k] + mat[k][j]))
                {
                    mat[i][j] = (mat[i][k] + mat[k][j]);
                }
            }
        }
    }
}

void mat_A(int mat [SIZE][SIZE])
{
    for(int i = 0; i<SIZE; i++)
    {
        for(int j = 0; j<SIZE; j++)
        {
            scanf("%d",&mat[i][j]);
            if (mat[i][j] == 0 && i != j)
            {
                mat[i][j] = INFINITY;
            }
        }
    }
    fw_algo(mat);
}

void mat_B(int mat [SIZE][SIZE])
{
    int i,j =0;
    scanf("%d",&i);
    scanf("%d",&j);
    if (mat[i][j] == 0 || mat[i][j] == INFINITY)
    {
        printf("False\n");
    }
    else
    {
        printf("True\n");
    }
}

void mat_C(int mat [SIZE][SIZE])
{
    int i,j = 0;
    scanf("%d",&i);
    scanf("%d",&j);
    if (mat[i][j] == 0 || mat[i][j] == INFINITY)
    {
        printf("%d\n", -1);
    }
    else
    {
        printf("%d\n", mat[i][j]);
    }
}
