#include <stdio.h>

long long int bin(long long int n);

int main(){
    int n;
    long long int x;
    scanf("%d", &n);
    while(n--){
        scanf("%Lu", &x);
        printf("%Lu\n", bin(x));
    }
    return 0;
}

long long int bin(long long int n){
    if (n==0) return 0;
    else return n%2+(10*bin(n/2));
}