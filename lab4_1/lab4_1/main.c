

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void sort(int *parr, const int N){
    int i, j;
    for(i = 0; i < N - 1; ++i)
        for(j = 0; j < N - 1; ++j)
            if(parr[j] < parr[j + 1]){
                int buf = parr[j];
                parr[j] = parr[j + 1];
                parr[j + 1] = buf;
            }
}

int main(int argc, const char * argv[]) {
    setlocale(LC_ALL, "Russian");
    int N;
    printf("Введите размерность массива: ");
    scanf("%d", &N);
    int *array = (int*)malloc(N * sizeof(int));
    int i;
    printf("Заполните массив: ");
    for(i = 0; i < N; ++i)
        scanf("%d", &array[i]);
    sort(array, N);
    printf("Упорядоченный по убыванию: ");
    for(i = 0; i < N; ++i)
        printf("%d ", array[i]);
    return 0;
}
