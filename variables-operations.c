#include <stdio.h>

int main(){
    int length;
    printf("Enter a rectangular length: ");
    scanf("%d", &length);
    printf("Number = %d",length);
    int width 
    printf("Enter a rectamgular width: ");
    scanf("%d", &width);
    printf("Number = %d",width);

    int area = (length *width);
    int perimeter = (width * 2 + length *2);

printf("area : %d Available\n", area);
printf("perimeter : %d Available\n",perimeter);

int  fahrenheit = 70;
int celsius = (fahrenheit - 32) / 1.8;
printf("\n%d°F = %d°C\n",fahrenheit, celsius);

int time = 349;
int hours = time/60;
int minutes = time%60;
printf("\n%d minutes is equal to %d minutes. %d\n", time, hours, minutes);


return 0;

}