/***************************************
* Fecha 2 - Agosto - 2022
* Author: Johan Moreno
* Assignature: Computación paralela y distribuida
* Topic: Taller 1 - C
****************************************/

/********************************************************************************
* Proyecto para el calculo de la multiplicación de 2 numeros dados por el usuario
********************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "Taller1_lib.h"
                                    
int main(){
    int opc = 0;
    /*BIENVENIDO al usuario*/
    bienvenida();
    printf("----------------------> MENU <----------------------\n\
    \t1. Primero punto\n\
    \t2. Segundo punto\n\
    \t3. Tercero punto\n\
    \t4. Cuarto punto\n\
    \t5. Quinto punto\n\
    \t6. Sexto punto\n\
    \t7. Septimo punto\n\
    \t8. Octavo punto\n\
    \t9. Noveno punto\n\
    \t10. Decimo punto\n\
    \t11. Salir\n");

    scanf("%d", &opc);

    switch (opc)
    {
    case 1: 
        /*PRIMER PUNTO*/
        calculoProducto();
        break;
    case 2: 
        /*Segundo Punto*/
        conversionFecha();
        break;
    case 3: 
        /*Tercer Punto*/
        distanciaDe2();
        break;
    case 4: 
        /*Cuarto Punto*/
        numNatu();
        break;
    case 5: 
        /*Quinto Punto*/
        triangulos();
        break;
    case 6: 
        /*Sexto Punto*/
        matriz1s();
        break;
    case 7: 
        /*Septimo Punto*/
        matrizRandom();
        break;
    case 8: 
        /*Octavo Punto*/
        matriz2Random();
        break;
    case 9: 
        /*Noveno Punto*/
        matriz2MenosRandom();
        break;
    case 10: 
        /*Decimo Punto*/
        matriz2XRandom();
        break;
    default:
        break;
    }
}