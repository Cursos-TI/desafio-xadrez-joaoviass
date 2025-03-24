#include <stdio.h>
//criando variaveis para cada peça
void movertorre (int casas) {
    if (casas > 0){
        printf("Direita\n");
        movertorre (casas - 1);
    }
}

void moverbispo (casas) {
    if (casas > 0){
        printf("Superior Direita\n");
        moverbispo (casas - 1);
    }
}

void moverrainha (casas) {
    if (casas > 0){
        printf("Esquerda\n");
        moverrainha (casas - 1);
    }
}

int main() {

    char peca;
    //pessoa ira digitar qual peça ela escolher para andar
    printf("Escolha uma peça\n");
    printf("B-Bispo\n");
    printf("T-Torre\n");
    printf("R-Rainha\n");
    printf("C-Cavalo\n");
    scanf(" %c", &peca);

    //quantas casas cada peça ira percorrer
    switch (peca)
    {
    case 'T':
    case 't':
     {
        movertorre(5);
      }
       break;
    case 'B':
    case 'b':
    {
    moverbispo (5);
    }
       break;

    case 'R':
    case 'r':
    {
        moverrainha(8);
    }
        break;
        
    case 'C':
    case 'c':
    {

    for (int i = 0; i < 2; i++)
    {
        printf("Cima\n");

    }

    int j = 0;
        do
        {
            printf("Direita\n");
            j++;
        } while (j < 1);

        
    }
    break;
    
    default:
    printf("Digite a peça corretamente\n");
        break;
    }

    return 0;
}
