#include<stdio.h>

int suma(int numero1, int numero2);
int resta(int numero1, int numero2);
int multiplicacion(int numero1, int numero2);
int division(int numero1, int numero2);

int main(){
	int numero1, numero2, multiplicar, sumar, restar, dividir, operacion;
	printf("Inserte el primer dato: ");
	scanf("%d%*c",& numero1);
	printf("Inserte el segundo dato: ");
	scanf("%d%*c",& numero2);
	printf("Seleccione la operacion que desea hacer\n");
	printf("1.suma \n2.resta \n3.multiplicacion \n4.division\n");
	scanf("%d%*c",& operacion);
	switch(operacion){
		case 1:
			sumar=suma(numero1, numero2);
			printf("La respuesta es:[ %d]\n", sumar);
			break;
		case 2:
			restar=resta(numero1, numero2);
			printf("La respuesta es:[ %d]\n", restar);
			break;
		case 3:
			multiplicar=multiplicacion(numero1, numero2);
			printf("La respuesta es:[ %d]\n", multiplicar);
			break;
		case 4:
			dividir=division(numero1, numero2);
			printf("La respuesta es:[ %d]\n", dividir);
			break;
	}
}

int suma(int numero1, int numero2){
	return numero1+numero2;
	}

int resta(int numero1, int numero2){
	return numero1-numero2;
}
	
int multiplicacion(int numero1, int numero2){
	return numero1*numero2;
	}
int division(int numero1, int numero2){
	return 	numero1/numero2;
	}
	
	
	
