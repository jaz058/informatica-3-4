#include <stdio.h>

int main(){
    int length;
    printf("Enter a rectangular length: ");
    scanf("%d", &length);
    int width;
    printf("Enter a rectamgular width: ");
    scanf("%d", &width);

    int area = (length * width);
    int perimeter = (width * 2 + length *2);

printf("area : %d\n", area);
printf("perimeter : %d\n",perimeter);

int  fahrenheit;
scanf("%d", &fahrenheit);
int celsius = (fahrenheit - 32) / 1.8;
printf("\n%d°F = %d°C\n",fahrenheit, celsius);

int time ;
scanf("%d",&time);
int hours = time/60;
int minutes = time%60;
printf("\n%d minutes is equal to %d minutes. %d\n", time, hours, minutes);
float pi = 3.14;
int radio;
printf("Enter an integar for the radio of a circle:");
scanf("%d",&radio);
int diameter = radio * radio;
float areac= diameter * pi;
printf("the area of a circle that it's diameter is %d, will be: %2f", diameter, areac);


return 0;

}