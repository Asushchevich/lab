//
//  main.c
//  lab_2_3
//
//  Created by Александр on 04.10.2018.
//  Copyright © 2018 Александр. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main() {
    int a;
    printf("Введите номер месяца\n1-январь\n2-февраль\n3-март\n4-апрель\n5-май\n6-июнь\n7-июль\n8-август\n9-сентябрь\n10-октябрь\n11-ноябрь\n12-декабрь\n");
    scanf("%d",&a);
    switch (a){
        case (1):printf("31 день\n"); break;
        case (2):printf("28 дней\n"); break;
              case (3):printf("31 день\n"); break;
              case (4):printf("30 дней\n"); break;
              case (5):printf("31 день\n"); break;
              case (6):printf("30 дней\n"); break;
              case (7):printf("31 день\n"); break;
              case (8):printf("31 день\n"); break;
              case (9):printf("30 дней\n"); break;
              case (10):printf("31 день\n"); break;
              case (11):printf("30 дней\n"); break;
              case (12):printf("31 день\n"); break;
    }
    return 0;
}
