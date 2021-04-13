#include <stdio.h>
#include <stdlib.h>
#include "funcionMatematica.h"
#include "menu.h"


int main()
{
    float num1;
    float num2;
    int flagnum1=1;
    int flagnum2=1;
    int flagOpcion3=1;
    char seguir='n';

    do {

    switch(menu()) {
case 1:
    printf("Ingrese un numero: ");
    scanf("%f",&num1);
    system("pause");
    flagnum1=0;
    system("pause");
    break;
case 2:
    if (flagnum1==0) {
    printf("Ingrese otro numero: ");
    scanf("%f",&num2);
    system("pause");
    flagnum2=0;
    }else {
    printf("Para poder acceder a este paso primero debe ingresar el primer operando.\n\n");
    }
    system("pause");
    break;
case 3:
    if(flagnum2==0 && flagnum1==0){
    printf("a) Calcular la suma (%.2f + %.2f)\n",num1,num2);
    printf("b) Calcular la resta (%.2f - %.2f)\n",num1,num2);
    printf("c) Calcular la division (%.2f / %.2f)\n",num1,num2);
    printf("d) Calcular la multiplicacion (%.2f * %.2f)\n",num1,num2);
    printf("e) Calcular el factorial (%.2f! y %.2f!)\n\n",num1,num2);
    flagOpcion3=0;
    }else {
    printf("Para calcular las operaciones primero debes ingresar los operandos.\n\n");
    }
    system("pause");
    break;
case 4:
    if(flagOpcion3==0){
    printf("a) El resultado de la suma es %0.2f\n",sumar(num1,num2));
    printf("b) El resultado de la resta %0.2f\n",restar(num1,num2));
    if(num2!=0) {
    printf("c) El resultado de la division %0.2f\n",dividir(num1,num2));
    }else {
        printf("c) Lo siento, no es posible realizar esta operacion con divisor cero.\n");
    }
    printf("d) El resultado de la multiplicacion %0.2f\n",multiplicar(num1,num2));
if(num1>0){
    printf("e) El resultado del primer factorial %0.2f\n",factorial(num1));
}else {
    printf("e) Lo siento, no puedo calcular el primer factorial al ser un numero negativo.\n");
}
if(num1>0){
    printf("e) El resultado del segundo factorial %0.2f\n",factorial(num2));
}else {
    printf("e) Lo siento, no puedo calcular el segundo factorial al ser un numero negativo.\n");
}
    }else if(flagnum2||flagnum1){
    printf("Lo siento no puedo calcular las operaciones hasta que ingreses los operandos.\n\n");
    }else if(flagOpcion3){
    printf("Antes de poder informar los resultados debo calcular las operaciones.\n\n");
    }
    system("pause");
    break;
case 5:
    seguir='s';
    break;
    system("pause");
default:
    printf("Lo siento esta opcion no se encuentra en el catalogo, por favor intente de nuevo.\n\n");
    system("pause");
}
    }while(seguir!='s');
}
