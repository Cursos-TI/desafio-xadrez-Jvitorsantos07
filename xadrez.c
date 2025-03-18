#include <stdio.h>
    
    int main(){

        //Cadastro das variáveis//

        
        int i1 = 1, i2 = 1;


        //Peça Torre, utilizando while//

        while (i1 <= 5)
        {
            printf("Torre - direita...\n");

            i1++;
        }

        printf("\n"); //pular uma linha//

        //Peça Bispo, utilizando do-while//

        do
        {
            printf("Bispo - diagonal, cima, direita...\n");
            i2++;
        } while (i2 <= 5);

        printf("\n"); // Pular uma linha//

        //Peça Rainha, utilizando for//

        for ( int i3 = 1; i3 <= 8; i3++)
        {
            printf("Rainha - esquerda...\n");
        }
        
        return 0;
    }