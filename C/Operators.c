#include <stdio.h>


int main(){
    
    short x = 5;
    short y = 2;

    int suma = x + y;
    int resta = x - y;
    int multiplicacion = x*y;
    int division = x/y; // no tendremos el decimal
    float divisionCorrecta = x / (float)y;
    int modulo = x%y;



    printf("La operacion es: %d\n", modulo);
    printf("    /|\n");
    printf("   / |\n");
    printf("  /  |\n");
    printf(" /   |\n");
    printf("/____|\n");




    return 0;
}