#include<stdio.h>

// int factorial(int n){
//     if(n==1){
//         return 1;
//     }
//     else{
//         return n * factorial(n-1);
//     }
// }

int factorial(int n){
    int fact=1,i=1;
    while(i<=n){
    fact=fact*i;
    i++;
    }
    return fact;
}

int main(int argc, char const *argv[])
{
    int n=5,result;
    result =factorial(n);
    printf("%d",result);

    return 0;
}
