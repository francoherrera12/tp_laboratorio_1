
#include <stdio.h>
#include <stdlib.h>
#include "aritmetica.h"


int sumarNumeros(int numeroA, int numeroB)
{ int suma;

suma=numeroA+numeroB;



return suma;
}

int restarNumeros(int numeroA, int numeroB)
{
    int resta;

    resta= numeroA-numeroB;


return resta;
}


int multiplicarNumeros(int numeroA, int numeroB)
{ int multiplicar;

    multiplicar=numeroA*numeroB;



return multiplicar;
}


float dividirNumeros(int numeroA, int numeroB)
{  float division;

    if(numeroB == 0)
    {

    printf("\nNo es posible dividir por cero.");

    } else{
            division = numeroA/numeroB;

    printf("\nEl resultado de A / B es : %.2f " , division);
}
return division;
}

int factorialNumero(int numeroA, int numeroB)
{   int x;
    int factorialA;
    int factorialB;
    factorialA=1;
    factorialB=1;

 if (numeroA < 0 && numeroB <12)
    {
        printf("\nERROR. Solo se pueden factorizar numeros positivos. \n");
    }
    else
    {
for ( x=numeroA ; x>1 ; x-- )
{
	factorialA= factorialA *x;
}
    printf("\nEl resultado factorial del numero A es %d \n" , factorialA);
}
if (numeroB < 0 && numeroB <12)
    {
        printf("\nERROR. Solo se pueden factorizar numeros positivos.\n");
    }

    else

    {

for ( x=numeroB ; x>1 ; x-- )
{
	factorialB = factorialB *x;
}

printf("\nEl resultado factorial del numero B es %d \n " , factorialB);
}
return 0;
}

