#include<stdio.h>
int d2b(int);

int main(){
    int x;
    printf("Enter the Decimal value\n");
    scanf("%d",&x);
    printf("The Binary code of %d is\n%d",x,d2b(x));
    return 0;
}

int d2b(int n){
    static float i = 0.1;
    if(n==0)
    {
        return 0;
    }
    else
    {
        i*=10;
        return ((n%2)*i) + d2b(n/2);
    }
}