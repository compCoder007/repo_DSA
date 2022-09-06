#include<stdio.h>
int checkPrime(int);

int main(){
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    if(checkPrime(n))
    printf("Given number is a PRIME number\n");
    else
    printf("Given number is NOT a prime number\n");
    return 0;
}

int checkPrime(int n){
    static int i = 2;
    if(n==1)
        return 0;
    if(n==i)
        return 1;
    else if(n%i==0)
        return 0;
    else{
        i++;
        return checkPrime(n);  
    }
}