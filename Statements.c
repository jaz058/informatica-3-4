#include <stdio.h>
int main(){
    //Excercise 1
    
    int num1;
    printf("Enter an integer for number 1:");
    scanf("%d",&num1);
    
    int num2;
    printf("Enter an integer for number 2:");
    scanf("%d",&num2);
    
    if (num1 == num2){
    printf("%d is equal to %d \n",num1, num2);
    }else{
    printf("%d is NOT equal to %d \n",num1, num2);
    }
    
    
    
    int given;
    printf("Enter a numberto see if is even or odd:");
    scanf("%d",&given);
    
    if (given%2 == num2){
    printf("%d is a odd number \n",given);
    }else{
    printf("%d is an even number \n",given);
    }
    int day;
    printf("Enter a number of day from 1 to 7:");
    scanf("%d",&day);
    
    if (day == 1) {
    printf("%d is Sunday \n",given);
}
    if (day == 2){
 printf("%d is Monday \n",given);
}

if (day == 3){
 printf("%d is Tuesday \n",given);
}

if (day == 4){
printf("%d is Wednesday \n",given);
}

if (day == 5){
printf("%d is Thursday\n",given);
}

if (day == 6){
 printf("%d is Friday\n",given);
}

if (day == 7){
  printf("%d is Saturday\n",given);
}
    int number1;
    printf("Enter a numberto see if is even or odd:");
    scanf("%d",&number1);

    int number2;
    printf("Enter a numberto see if is even or odd:");
    scanf("%d",&number2);

    int division= number1 / number2;
    printf("The division is \n%d", division);

return 0;
}