#include <stdio.h>
int main(int argc, char *argv[]) {
int numero1, numero2, numero3;
numero1= 2;
numero2= 3;
numero3= 4;

if (numero1>numero2 && numero1>numero3 ) 
	printf("El n�mero  1 es mayor que el n�mero 2 y 3 ");

else if(numero2>numero1 && numero2>numero3)
	printf("El n�mero 2 es mayor que el n�merro 1 y 3" );
else if (numero3>numero1 && numero3>numero2)
	printf("El n�mero 3 es mayor que el n�mero 1 y 2");
else if(numero1==numero2 && numero2==numero3 && numero1==0)
		printf("los tres n�meros son iguales y nulos ");
else if(numero1=numero2 && numero2==numero3){
	printf("los tres n�meros son iguales");
}
	return 0;
}
