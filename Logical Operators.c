#include<stdio.h>
#include<string.h>

int main(){
// use of and operator
    int n;

    printf("give number: ");
    scanf("%d", &n);

    if(n>=1 && n<=100){
        printf("in range of 1-100");
    }
    else{
        printf("not in range");
    }

//use of OR operator
    char str[100];
    printf("today is ");
    scanf("%s", str);

    if(strcmp(str, "friday") == 0 || strcmp(str, "saturday") == 0){
    printf("today is weekend");
    }
    else{
        printf("go to work");
    }

//use of NOT operator
    int y = 0;

    // Using the logical NOT operator to negate the condition
    if (!y) {
        printf("y is zero\n");
    } else {
        printf("y is not zero\n");
    }

}
