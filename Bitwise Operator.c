#include<stdio.h>

int main(){
   //and();
   //or();
   //not();
   //left_shift();
   //right_shift();
   //xor();
}

int and(){
//Bitwise AND Operation
    int x,y;
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);
    int s = x & y;
    printf("%d", s); //Result of AND is 1 when both bits are 1
    return 0;
}

int or(){
//Bitwise OR Operation
    int a,b;
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    int p = a | b;
    printf("%d", p); //Result of OR is 0 when both bits are 0
    return 0;
}

int not(){
//Bitwise Complement
//NOT is an Unary Operator
    int m;
    printf("m: ");
    scanf("%d", &m);

    int o = ~m;
    printf("%d", o); //Result of NOT is 1 when Operand is 0
    return 0;
}

int left_shift(){
//Left Shift Operation
    int x,y;
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);

    int z = x << y;
    printf("%d", z); //left shifting is equivalent to Multiplication by 2^rightOperand
    return 0;
}

int right_shift(){
//Right Shift Operation
    int x,y;
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);

    int z = x >> y;
    printf("%d", z); //left shifting is equivalent to Division by 2^rightOperand
    return 0;
}

int xor(){
    int x,y;
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);

    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

    printf("After XOR, x = %d and y = %d", x,y);
}
