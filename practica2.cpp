#include<stdio.h>
#include<stdlib.h>
int main(){
    float a,b,c;
    int opt;
    printf("1._Suma\n2._Resta\n3._Multiplicacion\n4._Division\n");
    printf("Seleccione una operacion: ");
    scanf("%d",&opt);
    printf("Ingrese el primer operando: ");
    scanf("%f",&a);
    printf("Ingrese el segundo operando: ");
    scanf("%f",&b);
        switch(opt){
        case 1:
        c=a+b;
        break;
        case 2:
        c=a-b;
        break;
        case 3:
        c=a*b;
        break;
        case 4:
        while(b==0){
            printf("error, b debe ser distinto a 0:");
            printf("ingrse el segundo operando");
            scanf("%f",&b);
        }
        c=a/b;
        break;
        default:;

        }

        printf("el resultado es %f",c);
        }




