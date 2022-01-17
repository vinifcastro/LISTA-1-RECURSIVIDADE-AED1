#include <stdio.h>

int k=0;

void inv(int n);

int main(){
    int x;
    scanf("%d", &x);
    inv(x);
    return 0;
}

void inv(int n){
    if (n==0){
        printf("\n");
        return;
    }
    if (n%10) k=1;
    if (k!= 0) printf("%d",n%10);
    inv(n/10);
}