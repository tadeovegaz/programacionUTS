#include <stdio.h>
#define metros 1000
#define centimetros 100000
#define milimetros 1000000
#define pies 3280.84
int main(){
     int Opcion;
     float Num1, Num2;
     do{
        printf("Vamos a hacer conversiones de kilometros\n");
        printf("Ingresa los kilometros que quieres convertir:");
        scanf("%f", &Num1);
        printf("1.- Metros \n");
        printf("2.- Centimetros \n");
        printf("3.- Milimetros \n");
        printf("4.- Pies \n");
        printf("5.- Salir \n");
        printf("Que Operacion Quieres Realizar: ");
        scanf("%i", &Opcion);
         switch(Opcion){
             case 1:{
                 printf("%.2f kilometros en metros son: %.2f \n\n",Num1, Num1*metros );
             }break;
             case 2:{
                 printf("%.2f kilometros en centimetros son: %.2f \n\n",Num1, Num1*centimetros );
             }break;
             case 3:{
                 printf("%.2f kilometros en milimetros son: %.2f \n\n",Num1, Num1*milimetros);
             }break;
             case 4:{
                 printf("%.2f kilometros en pies son: %.2f \n\n",Num1, Num1*pies);
             }break;
         }
     }while(Opcion != 5);
     return 0;
 }
