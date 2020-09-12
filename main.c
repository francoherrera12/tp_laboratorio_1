#include <stdio.h>
#include <stdlib.h>
#include "aritmetica.h"

int main()
{
	menu();


	return 0;
}

void menu(void){

    printf("Bienvenidos a la calculadora virtual. \nA continuacion digite dos numeros :");

    int numeroA;

	int numeroB;

	int opcion;

	int suma;

	int resta;

    int multiplicar;


do{

    printf("\nOpcion 1 digite un numero \nOpcion 2 digite otro numero :\nIngrese la opcion 3 para realizar todas las operaciones.\nIngrese la opcion 4 para mostrar los calculos \nIngrese opcion 5 para salir\n");



    scanf("%d", &opcion);


    switch (opcion)

	{   case 1:

	    printf("\nDigite valor para numero 1: ");

        scanf("%d" , &numeroA);


	    break;

        case 2:


        printf("\nDigite valor para numero 2: ");

        scanf("%d" , &numeroB);

        break;

		case 3:

        printf("\nRealizando operacion :");

        suma=sumarNumeros(numeroA,numeroB);

        resta=restarNumeros(numeroA , numeroB);

        multiplicar=multiplicarNumeros(numeroA , numeroB);



        break;

        case 4:

        printf("\nMostrando resultados : \n");

        printf("\nEl resultado de A + B es : %i \n" ,suma);

        printf("\nEl resultado de A - B es : %i \n" , resta);

        printf("\nEl resultado de su A * B es : %i \n " , multiplicar);

        dividirNumeros(numeroA , numeroB);

        factorialNumero(numeroA , numeroB);

        break;

        case 5:

        printf("Adios!");

        break;

        default:

		printf("\nOpcion invalida, ingrese una opcion correcta \n");
      }

    }while(opcion!=5);

	}








