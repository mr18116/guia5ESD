#include <stdio.h>
char conversor(int numero){
    int hex=0;
    if(!numero)
        return;
    else {
        hex=numero%16;
        numero=numero/16;
        conversor(numero);
    }
    switch(hex){
        case 10:
            printf("A");
            break;
        case 11:
            printf("B");
            break;
        case 12:
            printf("C");
            break;
        case 13:
            printf("D");
            break;
        case 14:
            printf("E");
            break;
        case 15:
            printf("F");
            break;
        default:
            printf("%d",hex);
    }
}

    char conversorCualquierBase(int numero,int base){
        int hex=0;
        if(!numero)
            return;
        else {
            hex=numero%base;
            numero=numero/base;
            conversorCualquierBase(numero,base);
            printf("%d",hex);
        }

    }

void main()
{
    int k=0;
    int base;
    printf("Ingrese un número:");
    scanf("%d",&k);
    conversor(k);

    printf("\nIngrese un número:");
    scanf("%d",&k);
    printf("Ingrese la base a convertir:");
    scanf("%d", &base);
    conversorCualquierBase(k,base);
}
