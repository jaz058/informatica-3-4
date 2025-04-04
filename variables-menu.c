#include <stdio.h>

int main(){
    char snack1[] = "Gummies";
 float price1 = 15.20;
 int stock1 = 10;

char snack2[] = "Soda";
float price2 = 20.00;
int stock2 = 15;
 
char snack3[] = "Cookies";
float price3 = 10.15;
int stock3 = 5;

 printf("Welcome to the Snack Shop!\n");
 printf("---------------------------\n");
 printf("1. %s - $%f - %d Available\n", snack1, price1, stock1);
printf("2. %s - $%f - %d Available\n", snack2, price2,stock2);
printf("3. %s - $%f - %d Available\n", snack3, price3, stock3);
 return 0;
}