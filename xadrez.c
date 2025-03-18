#include <stdio.h>
    int main(){
         
        //Cadastro das variáveis//

         int i1 = 1, i2 = 1, i3;
         int j = 1;


         //Peça Torre, utilizando while//

        printf("***Torre*** \n");

         while (i1 <= 5)
         {
             printf("Direita...\n");
 
             i1++;
         }
 
         printf("\n"); //pular uma linha//
 
         //Peça Bispo, utilizando do-while//

         printf("***Bispo***\n");

         do
         {
             printf("Diagonal, Cima, Direita...\n");
             i2++;
         } while (i2 <= 5);
 
         printf("\n"); // Pular uma linha//
 
         //Peça Rainha, utilizando for//
 
         printf("***Rainha***\n");

         for ( int i3 = 1; i3 <= 8; i3++)
         {
             printf("Esquerda...\n");
         }
    
         printf("\n");

         //Peça Cavalo, utilizando Loops Aninhados for e while//
        
         printf("***Cavalo***\n");

        for ( i3 = 1; i3 <= 1; i3++)
        {
            while (j <= 2)
            {
                printf("Baixo...\n");
                j++;
            }
            
            printf("Esqueda...\n");
        }
        
        printf("\n");

        return 0;
    } 