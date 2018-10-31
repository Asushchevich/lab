//
//  main.c
//  lab5_1
//
//  Created by Александр on 18.10.2018.
//  Copyright © 2018 Александр. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(int argc, const char * argv[]) {
    const int K = 4;
    const int P = 3;
    srand(time(NULL));
    int matrix[K][P];
    int i, j, p;
    printf("Matrix\n");
    for(i = 0; i < K; ++i){
        for(j = 0; j < P; ++j){
            matrix[i][j] = rand() % 5 - 1;
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < K; ++i){
        for(j = 0; j < P; ++j){
            if(matrix[i][j] == 0){
                ++p;
            }
        }
    }
    return 0;
}
