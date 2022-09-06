#include<stdio.h>
int sumofN(int);

int main(){
    int x;
    printf("Enter the number\n");
    scanf("%d",&x);
    printf("The sum of first %d natural numbers is\n%d",x,sumofN(x));
    return 0;
}

int sumofN(int n){
    if(n==1)
    return 1;
    else
    return n + sumofN(n-1);
}