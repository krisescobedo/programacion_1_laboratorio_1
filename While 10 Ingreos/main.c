#include <stdio.h>
#include <stdlib.h>
/* Al presionar el botón pedir números hasta que el usuario quiera, mostrar:
1-Suma de los negativos. 2-Suma de los positivos. 3-Cantidad de positivos.
4-Cantidad de negativos. 5-Cantidad de ceros. 6-Cantidad de números pares.
7-Promedio de positivos. 8-Promedios de negativos.
9-Diferencia entre positivos y negativos, (positvos-negativos). */
int main()
{
    int numeroIntroducido;
    char respuesta;
    int x;
    int acumPositivos = 0;
    int acumNegativos = 0;
    int contPositivos =0;
    int contNegativos = 0;
    int contCeros = 0;
    int contPares = 0;
    int maximo;
    int flag = 0;

    float promedioPositivos;
    float promedioNegativos;





//acumulador= suma variables. Contador=variable que suma o resta valores constantes

    int contador;

    do
    {
        printf("introducir un numero");
        scanf("%d", &numeroIntroducido);

    if(numeroIntroducido>0)
    {
        contPositivos++;
        acumPositivos+=numeroIntroducido;
        //acumPositivos= acumPositivos+numeroIntroducido;
    }
    else
    {
        if(numeroIntroducido<0)
        {
            contNegativos++;
            acumNegativos+=numeroIntroducido;
        }
        else
        {
            contCeros++;
        }
    }

    if (numeroIntroducido%2==0)
    {
        contPares++;
    }
 // condiciono el maximo
    if (flag==0 || numero>maximo)
    {
        maximo=numeroIntroducido;
        flag=1;
    }




        fflush(stdin);
        printf("desea introducir otro numero? s/n");
        //guardarla en la variable
        scanf("%c", &respuesta);
    } while (respuesta == 's');

    //castear convertir un dato numerico y convertirlo a otro dato numerico
    promedioNegativos = (float)acumNegativos/contNegativos;
    promedioPositivos = (float)acumPositivos/contPositivos;

    printf("el acumulador de positivos es: %d\n", acumPositivos);
    printf("el acumulador de negativos es: %d\n", acumNegativos);
    printf("el contador de positivos es: %d\n", contPositivos);
    printf("el contador de negativos es: %d\n", contNegativos);
    printf("el contador de ceros es: %d\n", contCeros);
    printf("el contador de pares es: %d\n", contPares);
    printf("el promedio de negativos es: %f\n", promedioNegativos);
    printf("el promedio de positivos es: %f\n", promedioPositivos);


    return 0;
}
//para for se escribe asi
 /*   for(inicializacion;condicion;incremento)
   for (x=;x<10;x++)
   {
       printf("%d\n", x);
   }
*/
/*
    for (;;)
    {
       x++;
       printf("%d\n", x);
       if (x==90)
       {
           break;
       }
    }
*/
