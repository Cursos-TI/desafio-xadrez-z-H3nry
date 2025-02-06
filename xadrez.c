#include <stdio.h>
#include <string.h>

#define BispoMovimentoMaximo 5
#define TorreMovimentoMaximo 5
#define RainhaMovimentoMaximo 8


// A Função que toma conta da movimentação de cada pesa da mesa de xadrez.
// Sendo possível escolher a direção de movimentação de acordo com o  jogo de xadrez em sir.
// EX: o bispo se move diagonalmente, num formato de 'X', então o jogador pode escolher em se mover diagonalmente para esquerda ou direta.

void Mover_Bispo()
{
    int LadoEscolhido; // 1 - esquerda , 2 - direita
    int TotalDeCasas;  // Quantas casas vai ser percorridas

    printf("||Mover Bispo Pra Qual Direção? \n");
    printf("||1. Esquerda \n");
    printf("||2. Direita \n");

    scanf("%d", &LadoEscolhido);
    (LadoEscolhido > 2 || LadoEscolhido < 1) ? (printf("\n \n \n Opção desconhecida. \n")) : (LadoEscolhido);

    // Caso a opção seja invalida, pare o codigo aqui.
    if (LadoEscolhido > 2 || LadoEscolhido < 1)
    {
        return;
    }

    printf("||Quantas Casas? \n");
    scanf("%d", &TotalDeCasas);

    // Aviso de correção, caso o jogador tenha inserido um numero maior que o "maximo" de casas que pode ser percorrido.
    (TotalDeCasas > BispoMovimentoMaximo) ? (printf("||%d é maior que o maximo de casas que pode ser percorrida! -|corrigindo valor para: %d|- \n", TotalDeCasas, BispoMovimentoMaximo)) : (TotalDeCasas);
    (TotalDeCasas > BispoMovimentoMaximo) ? (TotalDeCasas = BispoMovimentoMaximo) : (TotalDeCasas);

    printf("\n||[Bispo] Caminho percorrido:");
    if (LadoEscolhido <= 2 || LadoEscolhido >= 1)
    {
        for (int i = 0; i < TotalDeCasas; i++)
        {
            char Lado[25];

            (LadoEscolhido > 1) ? (strcpy(Lado, "Direita")) : (strcpy(Lado, "Esquerda"));

            printf("\n %s \n Cima", Lado);
        }
    }
}

void Mover_Torre()
{
    int LadoEscolhido; // 1 - esquerda , 2 - direita , 3 - cima/reto
    int TotalDeCasas;  // Quantas casas vai ser percorridas

    printf("||Mover a Torre Pra Qual Direção? \n");
    printf("||1. Esquerda \n");
    printf("||2. Direita \n");
    printf("||3. Cima \n");

    scanf("%d", &LadoEscolhido);
    (LadoEscolhido > 3 || LadoEscolhido < 1) ? (printf("\n \n \n Opção desconhecida. \n")) : (LadoEscolhido);

    // Caso a opção seja invalida, pare o codigo aqui.
    if (LadoEscolhido > 3 || LadoEscolhido < 1)
    {
        return;
    }

    printf("||Quantas Casas? \n");
    scanf("%d", &TotalDeCasas);

    // Aviso de correção, caso o jogador tenha inserido um numero maior que o "maximo" de casas que pode ser percorrido.
    (TotalDeCasas > TorreMovimentoMaximo) ? (printf("||%d é maior que o maximo de casas que pode ser percorrida! -|corrigindo valor para: %d|- \n", TotalDeCasas, TorreMovimentoMaximo)) : (TotalDeCasas);
    (TotalDeCasas > TorreMovimentoMaximo) ? (TotalDeCasas = TorreMovimentoMaximo) : (TotalDeCasas);

    printf("\n||[Torre] Caminho percorrido:");
    if (LadoEscolhido <= 2 || LadoEscolhido >= 1)
    {
        for (int i = 0; i < TotalDeCasas; i++)
        {
            char Lado[25];

            (LadoEscolhido == 1) ? (strcpy(Lado, "Esquerda")) : ((LadoEscolhido == 2) ? (strcpy(Lado, "Direita")) : ((LadoEscolhido == 3) ? (strcpy(Lado, "Cima")) : (strcpy(Lado, "Direção Nula"))));

            printf("\n %s", Lado);
        }
    }
}

void Mover_Rainha()
{
    int LadoEscolhido; // 1 - esquerda , 2 - direita , 3 - cima/reto , 4 - baixo
    int TotalDeCasas;  // Quantas casas vai ser percorridas

    printf("||Mover a Rainha Pra Qual Direção? \n");
    printf("||1. Esquerda \n");
    printf("||2. Direita \n");
    printf("||3. Cima \n");
    printf("||4. Baixo \n");

    scanf("%d", &LadoEscolhido);
    (LadoEscolhido > 4 || LadoEscolhido < 1) ? (printf("\n \n \n Opção desconhecida. \n")) : (LadoEscolhido);

    // Caso a opção seja invalida, pare o codigo aqui.
    if (LadoEscolhido > 4 || LadoEscolhido < 1)
    {
        return;
    }

    printf("||Quantas Casas? \n");
    scanf("%d", &TotalDeCasas);

    // Aviso de correção, caso o jogador tenha inserido um numero maior que o "maximo" de casas que pode ser percorrido.
    (TotalDeCasas > RainhaMovimentoMaximo) ? (printf("||%d é maior que o maximo de casas que pode ser percorrida! -|corrigindo valor para: %d|- \n", TotalDeCasas, RainhaMovimentoMaximo)) : (TotalDeCasas);
    (TotalDeCasas > RainhaMovimentoMaximo) ? (TotalDeCasas = RainhaMovimentoMaximo) : (TotalDeCasas);

    printf("\n||[Rainha] Caminho percorrido:");
    if (LadoEscolhido <= 2 || LadoEscolhido >= 1)
    {
        for (int i = 0; i < TotalDeCasas; i++)
        {
            char Lado[25];

            (LadoEscolhido == 1) ? (strcpy(Lado, "Esquerda")) : ((LadoEscolhido == 2) ? (strcpy(Lado, "Direita")) : ((LadoEscolhido == 3) ? (strcpy(Lado, "Cima")) : ((LadoEscolhido == 4) ? (strcpy(Lado, "Baixo")) : (strcpy(Lado, "Direção Nula")))));

            printf("\n %s", Lado);
        }
    }
}

void Mover_Cavalo()
{
    int LadoEscolhido; // 1 - esquerda , 2 - direita

    printf("||Mover o Cavalo Pra Qual Direção? \n");
    printf("||1. Esquerda \n");
    printf("||2. Direita \n");

    scanf("%d", &LadoEscolhido);
    (LadoEscolhido > 2 || LadoEscolhido < 1) ? (printf("\n \n \n Opção desconhecida. \n")) : (LadoEscolhido);

    // Caso a opção seja invalida, pare o codigo aqui.
    if (LadoEscolhido > 2 || LadoEscolhido < 1)
    {
        return;
    }

    printf("\n||[Cavalo] Caminho percorrido:");
    if (LadoEscolhido <= 2 || LadoEscolhido >= 1)
    {
        for (int i = 1; i < 4; i++)
        {
            char Lado[25];

            (i <= 2) ? (strcpy(Lado, "Cima")) : ((LadoEscolhido > 1) ? (strcpy(Lado, "Direita")) : (strcpy(Lado, "Esquerda")));

            printf("\n %s", Lado);
        }
    }
}

int main()
{

    int Leave = 0; //Caso o jogador queira parar o jogo, "leave" estara valendo 1.

    do {

    int Menu_SelectedOption; //Opção que o jogador escolheu

    //Amostrar o menu pro jogador, perguntando qual pesa ele pretende escolher.
    printf("\n \n||==================================================|| \n");
    printf("||Qual peça pretende mover? \n");
    printf("||1. Bispo \n");
    printf("||2. Torre \n");
    printf("||3. Rainha \n");
    printf("||4. Cavalo \n");
    printf("||5. Nenhum (Sair do jogo) \n");
    printf("||==================================================|| \n");

    scanf("%d",&Menu_SelectedOption);

    switch (Menu_SelectedOption)
    {
    case 1:
    Mover_Bispo();
    break;

    case 2:
    Mover_Torre();
    break;

    case 3:
    Mover_Rainha();
    break;

    case 4:
    Mover_Cavalo();
    break;
    
    case 5:
    printf("\n ||Jogo Encerrado.");
    Leave = 1;
    break;

    default:
    printf("\n ||Opção Desconhecida. \n");
    break;
    }

    } while (Leave < 1);
    
    return 0;
}