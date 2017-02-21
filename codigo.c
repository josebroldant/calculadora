#include<stdio.h>

int main()
{
	long int dato1, dato2, respuesta, operacion;
	
	printf("Inserte el primer dato");
	scanf("%d%*c",& dato1);
	printf("Inserte el segundo dato");
	scanf("%d%*c",& dato2);
	printf("Seleccione la operacion que desea hacer");
	printf("1.suma 2.resta 3.multiplicacion 4.division");
	scanf("%d%*c",& operacion);
	switch(operacion){
		case 1:
			suma(dato1, dato2, respuesta);
			break;
		case 2:
			resta(dato1, dato2, respuesta);
			break;
		case 3:
			multiplicacion(dato1, dato2, respuesta);
			break;
		case 4:
			division(dato1, dato2, respuesta);
			break;
	}
	printf("La respuesta es:[ %d]\n", respuesta);
}

int suma(dato1, dato2, respuesta){
	respuesta=dato1+dato2;
	return;
	}

int resta(dato1, dato2, respuesta){
	respuesta=dato1-dato2;
	return;
	}

int multiplicacion(dato1, dato2, respuesta){
	respuesta=dato1*dato2;
	return;
	}
int division(dato1, dato2, respuesta){
	respuesta=dato1/dato2;
	return;
	}


	
	
	
