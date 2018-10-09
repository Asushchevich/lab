#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>



/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	setlocale(LC_ALL,"Russian");
	float x,y,z,s1,s2,s3, result;
	printf("Введите x, y, z\n");
	scanf("%f%f%f", &x,&y,&z);
	s1 = fabs(cos(x) - cos(y));
	float sinsquare = sinf(y) * sinf(y);
	s2=powf(s1, 1 + 2 * sinsquare);
	s3=(1 + z +powf(z, 2)/2 + powf(z, 3)/3 + powf(z, 4)/4);
	result = s2 * s3;
	printf("Ответ: %f\n", result);
	

	
	return 0;
}
