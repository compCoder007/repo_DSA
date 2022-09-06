#include<stdio.h>
int fib(int);

int main(){
    int x;
    printf("Enter the term\n");
    scanf("%d",&x);
    printf("The %dth term in fibonacci series is\n%d",x,fib(x));
    return 0;
}

int fib(int n){
    if(n<=1)
    return n;
    return (fib(n-1) + fib(n-2));
}