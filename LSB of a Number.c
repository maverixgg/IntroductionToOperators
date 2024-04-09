#include<stdio.h>

int main(){
    int num;
    printf("Give any Number: ");
    scanf("%d", &num);

    if(num & 1)
        printf("LSB of the given number %d is set (1)", num);
    else
        printf("LSB of the given number %d is unset (0)", num);
}
