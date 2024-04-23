#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <locale.h>

typedef struct {
    char pergunta[100];
    char opcoes[4][50];
    char resposta;
} Pergunta;

void embaralhar(char *opcoes[]) {
    
    int i = 0;
    while (i < 3) {
        int j = rand() % 3;
        char *temp = opcoes[i];
        opcoes[i] = opcoes[j];
        opcoes[j] = temp;
        i++;
    }
}


void gerarPerguntas(Pergunta perguntas[]) {
 
    
    strcpy(perguntas[0].pergunta, "Qual � o processo pelo qual as plantas convertem a luz solar em energia?");
    strcpy(perguntas[0].opcoes[0], "Fotoss�ntese");
    strcpy(perguntas[0].opcoes[1], "Respira��o");
    strcpy(perguntas[0].opcoes[2], "Fermenta��o");
    strcpy(perguntas[0].opcoes[3], "Transpira��o");
    perguntas[0].resposta = 'A';

strcpy(perguntas[1].pergunta, "Qual � o maior oceano do mundo?");
strcpy(perguntas[1].opcoes[0], "Atl�ntico");
strcpy(perguntas[1].opcoes[1], "�ndico");
strcpy(perguntas[1].opcoes[2], "�rtico");
strcpy(perguntas[1].opcoes[3], "Pac�fico");
perguntas[1].resposta = 'D';

// 3
strcpy(perguntas[2].pergunta, "Qual � o �rg�o respons�vel pela produ��o de insulina no corpo humano?");
strcpy(perguntas[2].opcoes[0], "P�ncreas");
strcpy(perguntas[2].opcoes[1], "F�gado");
strcpy(perguntas[2].opcoes[2], "Cora��o");
strcpy(perguntas[2].opcoes[3], "Rins");
perguntas[2].resposta = 'A';

// 4
strcpy(perguntas[3].pergunta, "Qual � o animal terrestre mais r�pido do mundo?");
strcpy(perguntas[3].opcoes[0], "Guepardo");
strcpy(perguntas[3].opcoes[1], "Leopardo");
strcpy(perguntas[3].opcoes[2], "Ant�lope");
strcpy(perguntas[3].opcoes[3], "Lobo");
perguntas[3].resposta = 'A';

// 5
strcpy(perguntas[4].pergunta, "Qual � o maior �rg�o do corpo humano?");
strcpy(perguntas[4].opcoes[0], "C�rebro");
strcpy(perguntas[4].opcoes[1], "Pele");
strcpy(perguntas[4].opcoes[2], "F�gado");
strcpy(perguntas[4].opcoes[3], "Intestino");
perguntas[4].resposta = 'B';

// 6
strcpy(perguntas[5].pergunta, "Qual � a capital do Brasil?");
strcpy(perguntas[5].opcoes[0], "Rio de Janeiro");
strcpy(perguntas[5].opcoes[1], "Bras�lia");
strcpy(perguntas[5].opcoes[2], "S�o Paulo");
strcpy(perguntas[5].opcoes[3], "Belo Horizonte");
perguntas[5].resposta = 'B';

// 7
strcpy(perguntas[6].pergunta, "Qual � o elemento qu�mico mais abundante na crosta terrestre?");
strcpy(perguntas[6].opcoes[0], "Ferro");
strcpy(perguntas[6].opcoes[1], "Oxig�nio");
strcpy(perguntas[6].opcoes[2], "Sil�cio");
strcpy(perguntas[6].opcoes[3], "Carbono");
perguntas[6].resposta = 'B';

// 8
strcpy(perguntas[7].pergunta, "Qual � o maior planeta do sistema solar?");
strcpy(perguntas[7].opcoes[0], "V�nus");
strcpy(perguntas[7].opcoes[1], "Marte");
strcpy(perguntas[7].opcoes[2], "J�piter");
strcpy(perguntas[7].opcoes[3], "Saturno");
perguntas[7].resposta = 'C';

// 9
strcpy(perguntas[8].pergunta, "Qual � o maior animal do mundo?");
strcpy(perguntas[8].opcoes[0], "Elefante");
strcpy(perguntas[8].opcoes[1], "Tubar�o-baleia");
strcpy(perguntas[8].opcoes[2], "Baleia-azul");
strcpy(perguntas[8].opcoes[3], "Girafa");
perguntas[8].resposta = 'C';

// 10
strcpy(perguntas[9].pergunta, "Quantos ossos tem um ser humano adulto?");
strcpy(perguntas[9].opcoes[0], "206");
strcpy(perguntas[9].opcoes[1], "300");
strcpy(perguntas[9].opcoes[2], "150");
strcpy(perguntas[9].opcoes[3], "100");
perguntas[9].resposta = 'A';

// 11
strcpy(perguntas[10].pergunta, "Qual � o �cido presente no lim�o?");
strcpy(perguntas[10].opcoes[0], "�cido c�trico");
strcpy(perguntas[10].opcoes[1], "�cido sulf�rico");
strcpy(perguntas[10].opcoes[2], "�cido ac�tico");
strcpy(perguntas[10].opcoes[3], "�cido clor�drico");
perguntas[10].resposta = 'A';

// 12
strcpy(perguntas[11].pergunta, "Qual � o �nico mam�fero capaz de voar?");
strcpy(perguntas[11].opcoes[0], "Pombo");
strcpy(perguntas[11].opcoes[1], "Andorinha");
strcpy(perguntas[11].opcoes[2], "Morcego");
strcpy(perguntas[11].opcoes[3], "Borboleta");
perguntas[11].resposta = 'C';

// 13
strcpy(perguntas[12].pergunta, "Qual � o maior deserto do mundo?");
strcpy(perguntas[12].opcoes[0], "Deserto do Saara");
strcpy(perguntas[12].opcoes[1], "Deserto de Atacama");
strcpy(perguntas[12].opcoes[2], "Deserto da Ar�bia");
strcpy(perguntas[12].opcoes[3], "Deserto de Gobi");
perguntas[12].resposta = 'A';

// 14
strcpy(perguntas[13].pergunta, "Qual � o pa�s com a maior �rea territorial do mundo?");
strcpy(perguntas[13].opcoes[0], "Canad�");
strcpy(perguntas[13].opcoes[1], "R�ssia");
strcpy(perguntas[13].opcoes[2], "China");
strcpy(perguntas[13].opcoes[3], "Estados Unidos");
perguntas[13].resposta = 'B';

    embaralhar(perguntas[0].opcoes);
}

void apresentarPergunta(Pergunta pergunta) {
    printf("%s\n", pergunta.pergunta);
    printf("A) %s\n", pergunta.opcoes[0]);
    printf("B) %s\n", pergunta.opcoes[1]);
    printf("C) %s\n", pergunta.opcoes[2]);
    printf("D) %s\n", pergunta.opcoes[3]);
}

int verificarResposta(char respostaUsuario, char respostaCorreta) {
    return toupper(respostaUsuario) == respostaCorreta;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    srand(time(NULL));

    Pergunta perguntas[15];

    gerarPerguntas(perguntas);

    int pontuacao = 0;
    int i = 0;

    while (i < 15) {
        printf("\nPergunta %d:\n", i + 1);
        apresentarPergunta(perguntas[i]);

        char respostaUsuario;
        printf("Escolha a op��o correta (A, B, C ou D): ");
        scanf(" %c", &respostaUsuario);

        if (verificarResposta(respostaUsuario, perguntas[i].resposta)) {
            printf("Resposta correta!\n");
            pontuacao++;
        } else {
            printf("Resposta incorreta! A resposta correta era: %c\n", perguntas[i].resposta);
        }

        i++;
    }

    printf("\nPontua��o final: %d\n", pontuacao);

    return 0;
}

