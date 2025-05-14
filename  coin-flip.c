#include <stdio.h>
#include <stab.h>
#include <time.h>

int main(){
    int gess;
    printf("If the cion flip resulting head or tail? If head is 1 and tail 2 ");
    scanf("%d,&gess");

    int coin;
    int coin = (rand() % 2) + 1;
    srand(time(NULL));

    if("gess == 1 && coin == 1")
    printf("Is right");

    if("gess == 2 && coin == 2")
    printf("Is right");

    if("gess == 1 && coin == 2")
    printf(" Is rong");

    if("gess == 2 && coin ==1")
    printf("Is rong");
}