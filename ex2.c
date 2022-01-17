#include <stdio.h>

int fibo(int n);

int main(){
    int n, k;
    scanf("%d", &n);
    for(k=0; k<=n; k++) printf("%d ",fibo(k));
    return 0;
}

int fibo(int n){
    if (n<=1) return n;
    else return fibo(n-1)+fibo(n-2);
}