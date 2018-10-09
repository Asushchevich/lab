#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL,"Russian");
    int x2,y2,x1,y1,x3,y3,r,a,b;
    printf("Введите координату x1=");
    scanf("%d",&x1);
    printf("Введите координату y1=");
    scanf("%d",&y1);
    r=powf(x1,2)+powf(y1,2);
    printf("Введите координату x2=");
    scanf("%d",&x2);
    printf("Введите координату y2=");
    scanf("%d",&y2);
    a=powf(x2,2)+powf(y2,2);
    printf("Введите координату x3=");
    scanf("%d",&x3);
    printf("Введите координату y3=");
    scanf("%d",&y3);
    b=powf(x3,2)+powf(y3,2);
    if(r<a && r<b) printf("точка с координатами (%d,%d) находится ближе к началу координат",x1,y1);
    else  if(a<r && a<b) printf("точка с координатами (%d,%d) находится ближе к началу координат",x2,y2);
    else  if(b<a && b<r) printf("точка с координатами (%d,%d) находится ближе к началу координат",x3,y3);
    return 0;
}

