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

char nombre[25];
/*FUnción para darle la bienvenida al usuario y almacenar su nombre para una ejecución personalizada*/
void bienvenida(){
	printf("Cual es su nombre?\n");
	scanf("%s", nombre);
	printf("------------------------------------------------\n");
	printf("------------------------------------------------\n");
	printf("################## BIENVENIDO ##################\n");
	printf("------------------------------------------------\n");
	printf("                   TALLER 1 C                   \n");
	printf("------------------------------------------------\n");
	printf("------------------------------------------------\n\n");
	
}

/*#############################################################*/
/*########################## PUNTO 1 ##########################*/
/*#############################################################*/

/*Función para la obtención de los datos del usuario y el calculo del producto*/
void calculoProducto(){
    /*Deinición de variables*/
    int num1, num2, producto;

    /*Obtención de los datos*/
    printf("Digite el primer numero con el que desea realizar la operación\n");
    scanf("%d", &num1);

    printf("Digite el segundo numero con el que desea realizar la operación\n");
    scanf("%d", &num2);

    /*Calculo del producto*/
    producto = num1 * num2;

    /*Impresión de visualización del resultado dado*/
    printf("----------------> El resultado de la operación es: %d <----------------\n", producto);
}

/*#############################################################*/
/*########################## PUNTO 2 ##########################*/
/*#############################################################*/

/*Función para la conversión de dias a años y semanas*/

void conversionFecha(){
    /*Deinición de variables*/
    int diasT, anios, semanas, dias;

    /*Obtención de los datos*/
    printf("Digite los dias que desea convertir a años y semanas\n");
    scanf("%d", &diasT);

    /*Calculo de la conversión*/
    anios = diasT/365;
    dias = diasT - anios*365;
    semanas = dias/7;
    dias = dias - semanas*7;

    /*Impresión de visualización del resultado dado*/
    printf("-----------------> CONVERSIÓN SATISFACTORIA <-----------------\n");
    printf("\tDias totales calculados %d dias\n", diasT);
    printf("\tAños ----> %d años\n", anios);
    printf("\tSemanas -> %d semanas\n", semanas);
    printf("\tDias ----> %d dias\n", dias);
}


/*#############################################################*/
/*########################## PUNTO 3 ##########################*/
/*#############################################################*/

/*Función para calcular la distancia que exiten entre 2 puntos*/

void distanciaDe2(){
    /*Deinición de variables*/
    float x1, x2, y1, y2, dist;

    /*Obtención de los datos*/
    printf("Digite el valor de x en metros del punto 1\n");
    scanf("%f", &x1);

    printf("Digite el valor de y en metros del punto 1\n");
    scanf("%f", &y1);

    printf("Digite el valor de x en metros del punto 2\n");
    scanf("%f", &x2);

    printf("Digite el valor de y en metros del punto 2\n");
    scanf("%f", &y2);

    /*Calculo de la distancia entre 2 puntos*/
    dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    /*Impresión de visualización del resultado dado*/
    printf("-----------------> CALCULO SATISFACTORIO <-----------------\n");
    printf("La distancia que hay entre los 2 puntos dados es: %f metros\n", dist);
}

/*#############################################################*/
/*########################## PUNTO 4 ##########################*/
/*#############################################################*/

/*Función para obtener los 10 primeros numeros naturales*/

void numNatu(){
    /*Deinición de variables*/
    int nums;

    /*Impresión de un caracter junto a un espacio para seguir el formato de impresión del for*/
    printf("| ");
    /*Creación de un ciclo repetitivo For para la generación de los numeros naturales y su respectiva impresión*/
    for(int i =1; i<=10; i++){
        printf("%d | ", i);
    }
    /*Salto de linea para que al finalizar la secuencia de los numeros naturales la siguiente linea siga abajo*/
    printf("\n");
}


/*#############################################################*/
/*########################## PUNTO 5 ##########################*/
/*#############################################################*/

/*Función para dibujar de forma didactica un triangulo de asteriscos con el maximo digitado por el usuario*/

void triangulos(){
    /*Deinición de variables*/
    int numMax;

    /*Obtención de los datos*/
    printf("Digite el valor maximo que tendra el triangulo como base\n");
    scanf("%d", &numMax);

    if(numMax <= 14){
        for(int i=1; i<=numMax; i++){
            for(int j=1; j<=i; j++){
                printf("* ");
            }
            printf("\n");
        }
    }else{
        printf("ERROR\nEL valor maximo de la base puede ser 14\n");
    }
    
}


/*#############################################################*/
/*########################## PUNTO 6 ##########################*/
/*#############################################################*/

/*Función para imprimir una matriz de 1s con un tamaño especifico por el usuario*/

void matriz1s(){
    /*Deinición de variables*/
    int n;
    
    /*Obtención de los datos*/
    printf("Digite el valor que va a tener nuestra matriz\n");
    scanf("%d", &n);

    if(n <= 8){
        int matrix1[n][n];

        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                matrix1[i][j] = 1;
            }
        }


        for(int i = 0; i<n; i++){
            printf("| ");
            for(int j = 0; j<n; j++){
                printf("%d | ", matrix1[i][j]);
            }
            printf("\n");
        }
    }else{
        printf("ERROR\nEL valor maximo de la base puede ser 8\n");
    }
    
}

/*#############################################################*/
/*########################## PUNTO 7 ##########################*/
/*#############################################################*/

/*Función para imprimir una matriz de numeros aleatorios con un tamaño especifico por el usuario*/
void matrizRandom(){
    /*Deinición de variables*/
    int n;
    
    /*Obtención de los datos*/
    printf("Digite el valor que va a tener nuestra matriz\n");
    scanf("%d", &n);

    if(n <= 8){
        int matrix1[n][n];

        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                matrix1[i][j] = rand()%10;
            }
        }


        for(int i = 0; i<n; i++){
            printf("| ");
            for(int j = 0; j<n; j++){
                printf("%d | ", matrix1[i][j]);
            }
            printf("\n");
        }
    }else{
        printf("ERROR\nEL valor maximo de la base puede ser 8\n");
    }
    
}

/*#############################################################*/
/*########################## PUNTO 8 ##########################*/
/*#############################################################*/

/*Función para imprimir la suma de 2 matrices de numeros aleatorios con un tamaño especifico por el usuario*/
void matriz2Random(){
    /*Deinición de variables*/
    int n;
    
    /*Obtención de los datos*/
    printf("Digite el valor que van a tener nuestras matrices\n");
    scanf("%d", &n);

    if(n <= 8){
        int matrix1[n][n];
        int matrix2[n][n];
        int matrix3[n][n];

        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                matrix1[i][j] = rand()%10;
                matrix2[i][j] = rand()%10;
            }
        }

        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }

        for(int i = 0; i<n; i++){
            printf("| ");
            for(int j = 0; j<n; j++){
                printf("%d | ", matrix1[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        for(int i = 0; i<n; i++){
            printf("| ");
            for(int j = 0; j<n; j++){
                printf("%d | ", matrix2[i][j]);
            }
            printf("\n");
        }
        printf("\n\n");

        for(int i = 0; i<n; i++){
            printf("| ");
            for(int j = 0; j<n; j++){
                printf("%d | ", matrix3[i][j]);
            }
            printf("\n");
        }
    }else{
        printf("ERROR\nEL valor maximo de la base puede ser 8\n");
    }
    
}


/*#############################################################*/
/*########################## PUNTO 9 ##########################*/
/*#############################################################*/

/*Función para imprimir la resta de 2 matrices de numeros aleatorios con un tamaño especifico por el usuario*/
void matriz2MenosRandom(){
    /*Deinición de variables*/
    int n;
    
    /*Obtención de los datos*/
    printf("Digite el valor que van a tener nuestras matrices\n");
    scanf("%d", &n);

    if(n <= 8){
        int matrix1[n][n];
        int matrix2[n][n];
        int matrix3[n][n];

        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                matrix1[i][j] = rand()%10;
                matrix2[i][j] = rand()%10;
            }
        }

        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                matrix3[i][j] = matrix1[i][j] - matrix2[i][j];
            }
        }

        for(int i = 0; i<n; i++){
            printf("| ");
            for(int j = 0; j<n; j++){
                printf("%d | ", matrix1[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        for(int i = 0; i<n; i++){
            printf("| ");
            for(int j = 0; j<n; j++){
                printf("%d | ", matrix2[i][j]);
            }
            printf("\n");
        }
        printf("\n\n");

        for(int i = 0; i<n; i++){
            printf("| ");
            for(int j = 0; j<n; j++){
                printf("%d | ", matrix3[i][j]);
            }
            printf("\n");
        }
    }else{
        printf("ERROR\nEL valor maximo de la base puede ser 8\n");
    }
    
}

/*##############################################################*/
/*########################## PUNTO 10 ##########################*/
/*##############################################################*/

/*Función para imprimir la multiplicación de 2 matrices de numeros aleatorios con un tamaño especifico por el usuario*/
void matriz2XRandom(){
    /*Deinición de variables*/
    int n;
    
    /*Obtención de los datos*/
    printf("Digite el valor que van a tener nuestras matrices\n");
    scanf("%d", &n);

    if(n <= 8){
        int matrix1[n][n];
        int matrix2[n][n];
        int matrix3[n][n];

        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                matrix1[i][j] = rand()%10;
                matrix2[i][j] = rand()%10;
            }
        }

        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                int suma = n;
                for(int k=0; k<n; k++){
                    suma += matrix1[j][k]*matrix2[k][i];
                }
                matrix3[j][i] = suma;
            }
        }

        for(int i = 0; i<n; i++){
            printf("| ");
            for(int j = 0; j<n; j++){
                printf("%d | ", matrix1[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        for(int i = 0; i<n; i++){
            printf("| ");
            for(int j = 0; j<n; j++){
                printf("%d | ", matrix2[i][j]);
            }
            printf("\n");
        }
        printf("\n\n");

        for(int i = 0; i<n; i++){
            printf("| ");
            for(int j = 0; j<n; j++){
                printf("%d | ", matrix3[i][j]);
            }
            printf("\n");
        }
    }else{
        printf("ERROR\nEL valor maximo de la base puede ser 8\n");
    }
    
}
                                    
int main(){
    int opc = 0;
    /*BIENVENIDO al usuario*/
    bienvenida();
    printf("----------------------> MENU <----------------------\n\t1. Primero punto\n\t2. Segundo punto\n\t3. Tercero punto\n\t4. Cuarto punto\n\t5. Quinto punto\n\t6. Sexto punto\n\t7. Septimo punto\n\t8. Octavo punto\n\t9. Noveno punto\n\t10. Decimo punto\n\t11. Salir\n");

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