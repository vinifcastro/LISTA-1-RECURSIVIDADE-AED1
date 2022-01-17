#include <stdio.h>

int a=1;

void mover_Disco(int discos,char origem,char destino, char auxiliar)
{
    if(discos==1)
    {
        printf("(%c,%c)\n",origem,destino);
    }
    else{
        mover_Disco(discos-1,origem,auxiliar,destino);
        printf("(%c,%c)\n",origem,destino);
        mover_Disco(discos-1,auxiliar,destino,origem);
    }
    a++;
}
int main()
{
    int discos;
    scanf("%d",&discos);
    mover_Disco(discos,'O','D','A');
    printf("Movimentos: %d\n", a-1);
    return 0;
}