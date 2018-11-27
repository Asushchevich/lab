//
//  main.c
//  lab4_2
//
//  Created by Александр on 31.10.2018.
//  Copyright © 2018 Александр. All rights reserved.
//

#include <stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <math.h>



int main() {
    setlocale(LC_ALL, "Russian");
    int K;
    printf("Введите размерность массива: ");
    scanf("%d", &K);
    int n = K;
    int *arr = (int*)malloc(K * sizeof(int*));
    int i;
    printf("Массив: ");
    for(i = 0; i < K; ++i){
        arr[i] = rand() % 15;
        printf("%d ", arr[i]);
    }
    int sum, middle;
    for(i = 0; i < K; ++i)
        sum += arr[i];
    middle = sum / K;
    printf("\nСреднее значение элементов массива: %d", middle);
    printf("\nМодифицированный массив: ");
    for(i = 0; i < K; ++i)
        if(arr[i] < middle){
            arr[i] = 0;
            printf("%d ", arr[i]);
        }
        else
            printf("%d ", arr[i]);
    
    
}
