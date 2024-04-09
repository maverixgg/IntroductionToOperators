#include<stdio.h>

int main(){
    int num, n, newnum;
    printf("Give any number: ");
    scanf("%d", &num);
    printf("Which bit do you want to invert? : ");
    scanf("%d", &n);

    newnum = num ^ (1<<n-1);
    printf("Inverted bit is: %d (in decimal)", newnum);
    return 0;
}
