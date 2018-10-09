//
//  main.c
//  lab_3_2
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
    float c1, c2;
    int i = 1;
    printf("Количество воды в первом сосуде c1=");
    scanf("%f", &c1);
    printf("Количество воды во втором сосуде c2=");
    scanf("%f", &c2);
    while(i <= 6){
        c1/=2;
        c2+=c1;
        c2/=2;
        c1+=c2;
        i++;
    }
   
    printf("В первом сосуде %f\n",c1);
    printf("Во втором сосуде %f\n",c2);
    return 0;
}
