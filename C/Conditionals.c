#include <stdio.h>

int main(){

    //Chequear si son menores de edad

    int age;
    int result;
    char rand[20];

    printf("Ingresa tu edad: \n");
    result = scanf("%d",&age);

    if (result != 0){
        if(age>=18){
        printf("Bienvenido! \n");
        printf("%d", age);
    }

    else if (age<0){
        printf("DEJATE DE JODER\n");
        printf("%s", rand);
    }
    else{
        printf("No eres mayor de edad");
    }
    }
    else{
        printf("Ingresa una edad valida!");
    }
    



    return 0;
}