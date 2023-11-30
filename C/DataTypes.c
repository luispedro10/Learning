#include <stdio.h>
#include <stdbool.h>

int main(){

    char a = 'C'; // %c
    char b[]= "Heyyaaa"; // %s

    float c = 3.141592; //4 bytes %f 
    double dc = 3.141592653589793; // 8 bytes double guarda más decimales, es más preciso, pero más requiere más espacio %lf

    bool e = true; //1 byte

    char f = 120;  //char puede ser numérico, y si lo imprimimos con %c, muestra la letra que representa en ASCII
    unsigned char uc = 255;

    short int h = 32767; //2 bytes %d
    short esigual = 32767; //short es igual a short int
    unsigned short int us = 65535; // 2 bytes, unsigned deja de greservar el bit de memoria para el signo

    int j = 2147483647; //4 bytes, [-2,147,483,648, 2,147,483,647] %d
    unsigned int ju = 4000000000; // 4 bytes %u

    long long int longinteger = 7537538275827; //8 bytes %lld 
    unsigned long long int muylonginteger = 4374273847398990000U; // 8bytes %%llu

   // printf("%c, %u,%d, %0.15lf, %llu \n", f, ju, esigual, dc, muylonginteger);

    float item1price = 5.75;
    float item2price = 10.00;
    float item3price = 100.99;

    // printf("Precios: $%.2f, $%.2f, $%.2f", item1price, item2price, item3price);

    const float PI = 3.141592;





    return 0;
}