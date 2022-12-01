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
    // printf("after algo:\n");
    // for(int i = 0; i<SIZE; i++)
    // {
    //     for(int j = 0; j<SIZE; j++)
    //     {
    //         printf("%d ",mat[i][j]);
    //     }
    //     printf("\n");
    // }
}

void mat_A(int mat [SIZE][SIZE])
{
    for(int i = 0; i<SIZE; i++)
    {
        for(int j = 0; j<SIZE; j++)
        {
            //printf("Enter a number to be in [%d,%d]: ",i,j);
            scanf("%d",&mat[i][j]);
            if (mat[i][j] == 0 && i != j)
            {
                mat[i][j] = INFINITY;
            }
        }
    }
    // printf("from A:\n");
    // for(int i = 0; i<SIZE; i++)
    // {
    //     for(int j = 0; j<SIZE; j++)
    //     {
    //         printf("%d ",mat[i][j]);
    //     }
    //     printf("\n");
    // }
    fw_algo(mat);
}

void mat_B(int mat [SIZE][SIZE])
{
    //fw_algo(mat);
    int i,j =0;
    // printf("Enter i,j: ");
    scanf("%d",&i);
    scanf("%d",&j);
    if (mat[i][j] == 0 || mat[i][j] == INFINITY)
    {
        printf("\nFalse");
    }
    else
    {
        printf("\nTrue");
    }
}

void mat_C(int mat [SIZE][SIZE])
{
    //fw_algo(mat);
    int i,j = 0;
    // printf("Enter i,j: ");
    scanf("%d",&i);
    scanf("%d",&j);
    if (mat[i][j] == 0 || mat[i][j] == INFINITY)
    {
        printf("\n%d", -1);
    }
    else
    {
        printf("\n%d", mat[i][j]);
    }
}
