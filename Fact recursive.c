#include<stdio.h>

int fact(int num);

int main()
{
    int n,i;
    printf("enter the number: ");
    scanf("%d",&n);
    int result=fact(n);
    printf("factorial of the %d number is : %d",n,result);
    return 0;
}

int fact(int n)
{   if (n==0){
    return 1;
}
    if (n==1){
        return 1;
}
else {
    return fact(n-1)*n;
}
}
