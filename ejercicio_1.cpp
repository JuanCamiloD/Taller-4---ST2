#include <conio.h>
#include <stdio.h>
#include <cstdlib>

int main (){
	
	char a, *p;
	p = &a;
	
	system("cls");
	printf("ingrese un valor para la variable: \n");
	scanf("%s",&a);
	
		while(a<=48 || a>=57){
		
		printf("Error el valor debe ser mayor a 0 : \n");
		scanf("%s",&a);
		
		}
	
	system("cls");
	printf("a=%d\n",a);
	printf("La direccion de a es: %p\n",&a);
	printf("*p=%p\n",p);
	printf("a=%d\n",*p);
	printf("El tamaño de *p es: %d\n",sizeof(p));
	
	delete[] p ;
	printf("%d\n", p);
	p = NULL;
	printf("%d\n",p);
	
	
	getch();
	
	return 0;
}
