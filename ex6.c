#include <stdio.h>

long int fatd(int n);

int main(){
    int x;
    scanf("%d", &x);
    printf("%lu\n", fatd(x));
    return 0;
}

long int fatd(int n){
    if(n%2==0){
        if(n<2) return 1;
        else return n*fatd(n-2);
    }
    else{
        if(n==1) return 1;
        else return n*fatd(n-2);
    }
}