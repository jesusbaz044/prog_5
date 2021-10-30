#include<stdio.h>
#include <stdbool.h>
#include <string.h>
/*es para cambiarle el color profesor#include <iostream>*/
#define pi 3.14
float circ(float vradio) {
    float resultado;
    resultado = pi * (vradio * vradio);
    return resultado;
}
float rect(float vbase, float valtura){
    float resultado;
    resultado = vbase * valtura;
    return resultado;
}
float trian(float vbase, float valtura){
    float resultado;
    resultado = (vbase * valtura)/2;
    return resultado;
}
int main(int argc, char const *argv[]){
    int suma, contador;
    char opcion[0];
    float vradio, vbase, valtura;
    /*es para cambiarle el color profesor
    system("COLOR 7C");*/
    while (true){
        printf("\n************************");
        printf("PROGRAMA PARA GEOMETRIA");
        printf("************************");
        printf("\nQue desea calcular? \n(c)Ciculo \n(r)Rectangulo \n(t)Triangulo \n(s)Salir \n");
        scanf("%s",& opcion);
        if(strcmp(opcion, "s") == 0){
            break;
            }
        else if(strcmp(opcion, "c") == 0){
            printf("Ingrese el radio: ");
            scanf("%f",& vradio);
            printf("%f", circ(vradio));

            }
        else if(strcmp(opcion, "r") == 0){
            printf("Ingrese la base: ");
            scanf("%f",&vbase);
            printf("Ingrese la altura: ");
            scanf("%f",&valtura);
            printf("%f",rect(vbase, valtura));
            }
        else if(strcmp(opcion, "t") == 0){
            printf("Ingrese la base: ");
            scanf("%f",&vbase);
            printf("Ingrese la altura: ");
            scanf("%f",&valtura);
            printf("%f",trian(vbase, valtura));
        }
        else{
            printf("Opcion incorrecta");
        }
    }
    
    return 0;
    }

