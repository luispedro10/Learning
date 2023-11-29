#include <stdio.h>
#include <string.h>

struct Book {
    char title[50];
    char author[50];
    int year;
};

int main() {
    struct Book library[5]; /*Se está reservando memoria para las 5 estructuras. 
    Entonces, si son indeterminados, simplemente se imprime lo que había en la memoria*/

    // Añadiendo información de libros
    strcpy(library[0].title, "C Programming Language");
    strcpy(library[0].author, "Kernighan and Ritchie");
    library[0].year = 1978;

    strcpy(library[1].title, "Carazamba");
    strcpy(library[1].author, "Virgilio Rodriguez Macal");
    library[1].year = 1953;


    // Imprimir información de los libros
    for(int i = 0; i < 5; i++) {
        printf("Libro %d: %s por %s (%d)\n", i+1, library[i].title, library[i].author, library[i].year);
    }

    return 0;
}
