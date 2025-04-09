#include <stdio.h>

int main(){
    int length = 20;
    int width = 15;
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