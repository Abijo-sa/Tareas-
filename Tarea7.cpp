#include <stdio.h>

int suma_impares(int num) {
	int suma = 0;
	for (int i = 1; i <= num; i++) {
		if (i % 2 != 0) {
			suma += i;
		}
	}
	return suma;
}

int main() {
	int numero;
	
	printf("Ingrese un n�mero entero: ");
	scanf("%d", &numero);
	
	if (numero <= 0) {
		printf("El n�mero debe ser positivo.\n");
		return 1; 
	}
	
	int suma_imp = suma_impares(numero);
	
	printf("\nN�meros del ciclo: ");
	for (int i = 1; i <= numero; i++) {
		printf("%d ", i);
	}
	printf("\nSuma de los n�meros impares: %d\n", suma_imp);
	return 0;
}
