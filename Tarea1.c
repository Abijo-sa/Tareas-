#include <stdio.h>
int main(int argc, char *argv[]) {
int numero1, numero2, numero3;
numero1= 2;
numero2= 3;
numero3= 4;

if (numero1>numero2 && numero1>numero3 ) 
	printf("El número  1 es mayor que el número 2 y 3 ");

else if(numero2>numero1 && numero2>numero3)
	printf("El número 2 es mayor que el númerro 1 y 3" );
else if (numero3>numero1 && numero3>numero2)
	printf("El número 3 es mayor que el número 1 y 2");
else if(numero1==numero2 && numero2==numero3 && numero1==0)
		printf("los tres números son iguales y nulos ");
else if(numero1=numero2 && numero2==numero3){
	printf("los tres números son iguales");
}
	return 0;
}
