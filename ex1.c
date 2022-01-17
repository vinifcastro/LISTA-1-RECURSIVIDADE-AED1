#include <stdio.h>

int numnaturais(int n);

int main(){
    int x,i;
    scanf("%d", &x);
    for (i=1;i<=x;i++){
        printf("%d ", numnaturais(i));
    }
    return 0;
}

int numnaturais(int n){
    if (n==1) return 1;
    else return numnaturais(n-1)+1;
}