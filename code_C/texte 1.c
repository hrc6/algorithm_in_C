#include <stdio.h>
    #include <string.h>
    void Imprime (int N) // função com um parâmetro por valor
    {
        printf("%d", N);
    }

    int main()
    {
        int i;

        int Vet[10];

        for(i = 0; i < 10; i++)
        {
            Vet[i] = i; 
        }       
        for (i=0; i< 10; i++)
        {
           Imprime(Vet[i]);// passa o valor de cada um dos elementos do vetor como parâmetro
        }
        return 0; 
      }
