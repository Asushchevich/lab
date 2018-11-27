//
//  main.c
//  lab6_2
//
//  Created by Александр on 21.11.2018.
//  Copyright © 2018 Александр. All rights reserved.
//


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void main()
{
    int x[10][10];
    int m,
    n,
    k=0,
    i,j,
    K;
    
    printf("\n Введите количество строк : ");
    scanf("%d",&m);
    printf("\n Введите количество столбцов : ");
    scanf("%d",&n);
    
    
    
    
    printf("\n Введите матрицу\n\n");
    for (i=0; i<m; i++)
        for (j=0; j<n; j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&(x[i][j]));
        }
    
    
    printf("\n");
    printf("Введён массив \n");
    
    for(i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
            printf("%d ",(x[i][j]));
        printf("\n");
    }
    
    
    K=0;
    for (i=0; i<n; i++)
    {
        int f=1;
        for (j=0; j<m; j++)
            if (x[i][j] == 0)
            {
                f=0;
                j=m;
            }
        if (f==1)
        {
            K++;
        }
    }
    printf("\n Количество не нулевых строк : %d", K);
