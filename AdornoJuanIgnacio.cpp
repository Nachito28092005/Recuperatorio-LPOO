#include <stdio.h>
#include <string>
#include <iostream>

int main()
{
	int i;
	int j;
	int aux;
	int cant;	
	float salir;
	std::string farmacia;
	int stock;
	int precio;
	int CODMEDICAMENTO[10];
	int PRECIO[10];
	
	printf ("Desea ingresar datos 1(SI) 2(NO): ");                    //Pregunto al usuario si desea ingresar datos
	scanf ("%f", &salir);
	
	if (salir == 1)
	{
		printf ("ingrese el codigo del medicamento: ");
		scanf ("%d", &CODMEDICAMENTO);
		printf ("Ingrese el nombre de la farmacia: ");
		scanf ("%s", &farmacia);
		printf ("Ingrese la cantidad del medicamento que desee: ");
		scanf ("%d", &cant);
	}
	if (salir == 2) 
	{
		return 0;
	}
	
	printf ("Desea ingresar datos 1(SI) 2(NO): ");                    //Pregunto al usuario si desea volver a ingresar datos
	scanf ("%f", &salir);
}
