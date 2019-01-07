//
//  main.c
//  lab7_1
//
//  Created by Александр on 28.11.2018.
//  Copyright © 2018 Александр. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"russian");
    int matr[3][3];
    int  changeVar = 0,i,j,n,m;
    int *str;
    printf("Введите кол-во строк: ");
    scanf("%d", &n);
    printf("Введите кол-во столбцов: ");
    scanf("%d", &m);
    for (i=0;i<n;i++)
        for (j=0;j<m;j++)
        {
            printf("Введите элемент[%i, %i]\n", i+1, j+1);
            scanf("%d",&matr[i][j]);
        }
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
            printf("%d  ", matr[i][j]);
        printf("\n");  }
    for (i=0;i<n;i++)
        
    {  for (j=0;j<m;j++)
        if(matr[i][j]<matr[i][j+1])
        {str=&i;
            printf("Ñòðîêà: %d \n", *str);}
        
    }
    
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
            changeVar=matr[i][j];
        matr[i][j]=matr[n-i][m-j];
        matr[n-i][m-j] = changeVar;
        getch ();
    }for (i=0;i<n;i++)
        
        for (j=0;j<m;j++)
            printf("%d  ", matr[i][j]);
    printf("\n");  }
