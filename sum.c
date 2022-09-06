#include<stdio.h>
int sum(int,int);

int main(){
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    printf("The sum of %d and %d is \n%d",a,b,sum(a,b));
    return 0;
}

int sum(int x,int y){
    if(x<y)
        return sum(y,x);
    else{
        if(y==0)
            return x;
        else
            return 1 + sum(x,y-1);
    }
}