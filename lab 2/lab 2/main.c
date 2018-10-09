//
//  main.c
//  lab 2
//
//  Created by Александр on 04.10.2018.
//  Copyright © 2018 Александр. All rights reserved.
//

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL,"Russian");
    int x,y,x1,y1;
    float a,r;
    printf("Введите координату x=");
    scanf("%d",&x);
    printf("Введите координату y=");
    scanf("%d",&y);
    r=powf(x,2)+powf(y,2);
    printf("Введите координату x1=");
    scanf("%d",&x1);
    printf("Введите координату y1=");
    scanf("%d",&y1);
    a=powf(x1,2)+powf(y1,2);
    if(r>=a) printf("точка с координатами (%d,%d) принадлежит окружности, проходящей  через координаты (%d,%d)",x1,y1,x,y);
    else if(r<=a) printf("точка с координатами (%d,%d) не принадлежит окружности, проходящей  через координаты (%d,%d)",x1,y1,x,y);
    return 0;
}
