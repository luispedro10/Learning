#include <stdio.h>
#include <string.h>

int main(){
    int age;
    int result;
    char name[25];
   

   printf("\n Como te llamas? ");
   fgets(name, 25, stdin); //fgets para poder pasar un string con espacios.
   name[strlen(name)-1]= '\0';

   printf("Que edad tienes? ");
   result = scanf("%d", &age);

    if (result!=0){
        printf("Tienes %d anos\n", age);

    }
    else{
        printf("Ingresa una edad correcta");
    }

    printf("Hola \"%s\"", name);

    return 0;
    
}