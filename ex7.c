#include <stdio.h>

void dif(int total, int * a, int num100, int num50, int num20, int num10, int num5, int num2, int * k);

int main(){
    int valor, nota[6], k=0;
    scanf("%d", &valor);
    scanf("%d %d %d %d %d %d", &nota[0], &nota[1], &nota[2], &nota[3], &nota[4], &nota[5]);
    dif(valor, nota, 0, 0, 0, 0, 0, 0, &k);
    printf("%d\n", k);
    return 0;
}

void dif(int total, int * a, int num100, int num50, int num20, int num10, int num5, int num2, int * k){
    if ((num100>a[0]) || (num50>a[1]) || (num20>a[2]) || (num10>a[3]) || (num5>a[4]) || (num2>a[5])) return;

    if ((num100*100 + num50*50 + num20*20 + num10*10 + num5*5 + num2*2) == total) (*k)++;
    
    if ((num100*100 + num50*50 + num20*20 + num10*10 + num5*5 + num2*2) > total) return;

    if ((num50 == 0) && (num20 == 0) && (num10 == 0) && (num5 == 0) && (num2 == 0)) dif(total, a, num100+1, num50, num20, num10, num5, num2, k);
    if ((num20 == 0) && (num10 == 0) && (num5 == 0) && (num2 == 0)) dif(total, a, num100, num50+1, num20, num10, num5, num2, k);
    if ((num10 == 0) && (num5 == 0) && (num2 == 0)) dif(total, a, num100, num50, num20+1, num10, num5, num2, k);
    if ((num5 == 0) && (num2 == 0)) dif(total, a, num100, num50, num20, num10+1, num5, num2, k);
    if ((num2 == 0)) dif(total, a, num100, num50, num20, num10, num5+1, num2, k);
    dif(total, a, num100, num50, num20, num10, num5, num2+1, k);
}