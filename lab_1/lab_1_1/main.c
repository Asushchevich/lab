#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void) {
	setlocale(LC_ALL,"Russian");
	float x;
	scanf("%f",&x);
	printf("64*x^4 = %f\n", 64 * pow(x , 4));	
return 0;
}
