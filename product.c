#include<stdio.h>
int product(int,int);

int main(){
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    printf("Product of two numbers is %d\n",product(a,b));
    return 0;
}

int product(int x,int y){
    if(x<y)
    return product(y,x);
    else
    {
        if(y==0)
        return 0;
        else
        return x + product(x,y-1);
    }
}