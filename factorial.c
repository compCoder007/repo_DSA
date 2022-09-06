#include<stdio.h>
int fact(int);

int main(){
    int x;
    printf("Enter the number\n");
    scanf("%d",&x);
    printf("The factorial of %d is\n%d",x,fact(x));
    return 0;
}

int fact(int n){
    if(n<=1)
    return 1;
    else
    return n * fact(n-1);
}