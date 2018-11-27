//
//  main.c
//  lab5_3
//
//  Created by Александр on 21.11.2018.
//  Copyright © 2018 Александр. All rights reserved.
//

#include <stdio.h>
#include <stdio.h>
#define N 3
int  is_sorted(const int a[], int n);
void reverse(int a[], int n);

int main(void){
    int i, j;
    int mat[N][N] = {
        { 5, 4, 3 },
        { 7, 8, 9 },
        { 1, 2, 6 }
    };
    
    for(i = 0; i < N; ++i){
        if(is_sorted(mat[i], N)){
            reverse(mat[i], N);
            break;
        }
    }
    
    for(i = 0; i < N; ++i){
        for(j = 0; j < N; ++j)
            printf("%d ", mat[i][j]);
        putchar('\n');
    }
    getchar();
    return 0;
}

int is_sorted(const int a[], int n){
    int i = 1;
    while((i < n) && (a[i - 1] >= a[i]))
        ++i;
    return (i == n);
}

void reverse(int a[], int n){
    int i, j, t;
    for(i = 0, j = n - 1; i < j; --j, ++i){
        t = a[j];
        a[j] = a[i];
        a[i] = t;
    }
}

