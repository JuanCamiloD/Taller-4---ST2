#include <stdio.h>


int main(){
	
	int a,b,suma=0;
	int* pa = &a;
	int* pb = &b;
	int* psuma = &suma;
	printf("Ingrese dos valores para ser sumados : \n");
	scanf("%d",&a);
	scanf("%d",&b);
	suma = *pa + *pb;
	printf("El resultado es: %d\n",suma);
	printf("La posicion en memoria es: %p\n",psuma);
	
	return 0;
}
