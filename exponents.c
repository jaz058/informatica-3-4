#include <stdio.h>
#include <math.h>
int main()
// {Bucle While exponent
// int base;
// printf("Ingrese el número base:");
// scanf("%d",&base);


// int exponent;
// printf("Ingrese el exponente:");
// scanf("%d",&exponent);
//
// int i=1;
// int result = base;
// do { result= base * result;
// i++;

// while (i<exponent);


// printf("%d ^ %d= %d\n", base,exponent, result);
{
//Funciones de la biblioteca de C
float num, root;
printf("Ingrese un número:");
scanf("%f", &num);

//Calcula la raíz cuadrada de num y la almacena en root.
root= sqrt (num);

printf("raíz cuadrada de %.2f = %.2f", num, root);

return 0;
}