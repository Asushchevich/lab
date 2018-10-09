//
//  main.c
//  lab_3_1
//
//  Created by Александр on 05.10.2018.
//  Copyright © 2018 Александр. All rights reserved.
//
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float month=0, R=0, M=0;
    printf("Введите R:");
    scanf("%f",&R);
    printf("Введите M:");
    scanf("%f",&M);
    for(month = 0; R < M; ++month){
        R +=R*0.04/12;
    }
    printf("\n%.2f", month);
    getchar();
    return 0;
}
