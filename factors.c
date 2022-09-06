#include<stdio.h>
int factor(int);

int main(){
    int x;
    printf("Enter a number\n");
    scanf("%d",&x);
    printf("The factors of %d are \n",x);
    factor(x);
    return 0;
}

int factor(int n){
    static int i = 1;
    if(n==i){
        printf("%d",n);
        return 0;
    }
    else
    {
        if(n%i==0){
            printf("%d, ",i);
        }
        i++;
        return factor(n);
    }
}