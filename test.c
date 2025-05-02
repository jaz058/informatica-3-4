#include <stdio.h>

int main(){
printf("Enter the height of the triangle(number of row);");
int height;
scanf("%d", &height);

int i;
int j;
for (i = 1; i<= height; i++){
    for(j = 1; j<=i;j++){ 
        printf("*");
    }
    printf("\n");

}
}