#include<stdio.h>
int power(int,int);

int main(){
    int a,b;
    printf("Enter the base and Exponent\n");
    scanf("%d%d",&a,&b);
    printf("The value of %d to the power %d is\n%d",a,b,power(a,b));
    return 0;
}

int power(int base,int exp){
    if(exp==0)
    return 1;
    else
    return base * power(base,exp-1);
}