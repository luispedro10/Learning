#include <stdio.h>
#include <math.h>

int main(){

    double A = sqrt(9);
    double B = pow(2,4);
    int C = round(3.1415);
    int D = ceil(3.1414);
    int E = floor (3.14);
    double F = fabs(-100);
    double G = log(3);
    double H = sin(45);
    double I = cos (45);
    double J = tan (45);
    //printf("%lf", H) ;



    //Calcular la circunferencia de un círculo

    double area;
    double circunferencia;
    double radio;
    const double PI = 3.14159;

    printf("---Calculadora de circunferencia---\n\n");
    printf("Ingrese el radio del circulo: ");
    scanf ("%lf", &radio);

    area = PI*pow(radio, 2);
    circunferencia= 2*PI*radio;

    printf("El area es de: %0.2lf\n", area);
    printf("La circunferencia es de: %0.2lf ", circunferencia);


    //Calcular la hipotenusa

    double A1;
    double B1;
    double hipotenusa;

    printf("Ingreso el valor de la A: ");
    scanf("%lf", &A1);

    printf("Ingreso el valor de la B: ");
    scanf("%lf", &B1);

    hipotenusa = sqrt(pow(A1, 2)+pow(B1, 2));

    printf("La hipotenusa es: %lf", hipotenusa);

    return 0;
}