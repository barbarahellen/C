#include<stdio.h>
#include<math.h>

int main(){

    double a = sqrt(9);     // raíz quadrada
    double b = pow(2, 4);   // elevar 2 a quarta
    int c = round(3.14);    // arredondar
    int d = ceil(3.14);     // arredondar para cima
    int e = floor(3.99);    // arredondar para baixo
    double f = fabs(-100);  // valor absoluto
    double g = log(3);      // logaritmo
    double h = sin(45);     // seno
    double i = cos(45);     // cosseno
    double j = tan(45);     // tangente


    printf("\narredondar 3,99 para baixo: %d", e);
    printf("\nraiz quadrada de 9 = %lf", a);
    printf("\ntangente de 45 = %lf", j);


    return 0;
}