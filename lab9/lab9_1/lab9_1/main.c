//
//  main.c
//  lab9_1
//
//  Created by Александр on 12/12/18.
//  Copyright © 2018 Александр. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    FILE *A, *B, *C, *D;
    char *NameA = "NameA.txt";
    char *NameB = "NameB.txt";
    char *NameC = "NameC.txt";
    char *NameD = "NameD.txt";
    const int K = 3;
    
    srand(time(NULL));
    
    if((A = fopen(NameA, "a")) == NULL){
        printf("Error to open NameA.txt");
        return 1;
    }
    if((B = fopen(NameB, "a")) == NULL){
        printf("Error to open NameB.txt");
        return 1;
    }
    if((C = fopen(NameC, "a")) == NULL){
        printf("Error to open NameC.txt");
        return 1;
    }
    
    int i;
    for(i = 0; i < K; ++i){
        fprintf(A, "%d ", rand() % 10);
        fprintf(B, "%d ", rand() % 20);
        fprintf(C, "%d ", rand() % 30);
    }
    
    fclose(A);
    fclose(B);
    fclose(C);
    
    if((A = fopen(NameA, "r")) == NULL){
        printf("Error to open NameA.txt");
        return 1;
    }
    if((B = fopen(NameB, "r")) == NULL){
        printf("Error to open NameB.txt");
        return 1;
    }
    if((C = fopen(NameC, "r")) == NULL){
        printf("Error to open NameC.txt");
        return 1;
    }
    
    if((D = fopen(NameD, "a")) == NULL){
        printf("Error to open NameD.txt");
        return 1;
    }
    
    int a, b, c;
    for(i = 0; i < K; ++i){
        fscanf(A, "%d", &a);
        fscanf(B, "%d", &b);
        fscanf(C, "%d", &c);
        fprintf(D, "%d ", a);
        fprintf(D, "%d ", b);
        fprintf(D, "%d ", c);
    }
}
