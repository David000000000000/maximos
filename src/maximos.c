/*
 ============================================================================
 Name        : Promedio.c
 Author      : David
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int notas=0;
	int totalnotas=0;
	float promedio;
	int flagmaximo=0;
	int maximo=0;
	int minimo=0;
	int flagminimo=0;



	for(int i=0;i<5;i++)
	{

		printf("Ingrese el CINCO numero: \n");
		scanf("%d",&notas);
		totalnotas=totalnotas + notas;

		if(notas==888){
		break;
		}

		if(flagmaximo==0 || notas>maximo )
		{
			maximo=notas;
			flagmaximo=1;
		}
		if(flagminimo==0 || notas< minimo )
		{
		 minimo = notas;
		 flagminimo=1;
		}

	}

	promedio=totalnotas/5;
	printf("Promedio total notas %f\n",promedio);
	printf("El maximo es: %d\n",maximo);
	printf("El minimo es: %d\n",minimo);




	return EXIT_SUCCESS;
}
