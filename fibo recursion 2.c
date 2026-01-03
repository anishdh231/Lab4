#include<stdio.h>

int fibo(int num);

int main()
{
    int n,i;
    printf("enter the number: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        int result=fibo(i);
        printf("%d\t",result);
    }
    return 0;
}

int fibo(int n)
{   if (n==0){
    return 0;
}
    if (n==1){
        return 1;
}
else {
    return fibo(n-1)+fibo(n-2);
}
}
