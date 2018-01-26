#include<stdio.h>
int fibo(int n)
{
    if(n<2){
        return n;
    }
    else
    {
        return fibo(n-1)+fibo(n-2);
    }
}
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0; i<n-1; i++)
    {
        printf("%d ",fibo(i));
    }
    printf("%d",fibo(i));
    printf("\n");
}
