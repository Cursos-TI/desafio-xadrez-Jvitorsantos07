#include <stdio.h>
    
//recursiva para movimento da torre//

void movertorre(int casas){
    if (casas > 0)
    {
        printf("Direita...\n");
        movertorre(casas - 1);
        
    }
    
}

//recursiva para movimento do bispo//

void moverbispo(int casas){
    if (casas > 0)
    {
    
    for (int i = 1; i <= 1; i++) //for externo//
        {
            printf("Diagonal, Cima, ");
            for (int j = 1; j <= 1; j++) //for interno//
            {
                printf("Esquerda... \n"); // cógido //
            }
        
        }
        moverbispo(casas - 1);
    }
    
}

//recursiva para movimento da rainha//

void moverRainha(int casas){
    if (casas > 0)
    {
        printf("Esquerda...\n");
        moverRainha(casas - 1);
    }
    
}




int main(){

    int i, j = 1;

    printf("***Torre*** \n");
    movertorre (5);

    printf("\n"); 

    printf("***Bispo*** \n");
    moverbispo (5);

    printf("\n");

    printf("***Rainha***\n");
    moverRainha(8); 

    printf("\n");

    //movimento do cavalo//

    printf("***Cavalo***\n");

    for ( i = 1; i <= 1; i++)
    {
        while (j <= 2)
        {
            printf("Cima...\n");
            j++;
        }
        
        printf("Direita...\n");
    }
    
    printf("\n");





    return 0;
}