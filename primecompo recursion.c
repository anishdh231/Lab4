#include<stdio.h>

float prime(int n,int a){
if (n==2);
    return 1;
if (n <= 1)
        return 0;
if (n%a==0){
    return 0;
}
if (a*a>n){
    return 1;
}

return prime(n,a+1);

}

int main(){
int num;
printf("enter the number: ");
scanf("%d",&num);

if (prime(num,2)){
    printf("prime number");
    }
else {
    printf("composite number");
}



return 0;}
