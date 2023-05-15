#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // necessário para usar setlocale
#include <wchar.h>  // necessário para usar wprintf e wscanf
int main(void)
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // onde adicionamos as perguntas e o tamanho do caracteres que vão até esse vetor.

    char perguntas[6][500] =
        {
            "Normalmente, quantos litros de sangue uma pessoa tem? Em média, quantos Sao retirados numa doação de sangue? \n",
            "De quem é a famosa frase “Penso, logo existo?\n",
            "De onde é a invenção do chuveiro elétrico? \n",
            "Qual artista é conhecida como o Rei do Pop?\n ",
            "Qual é o maior país do mundo?\n",
            "Qual é o país mais populos do mundo?\n"};
    char respostas[6] = {'b', 'c', 'd', 'a', 'a', 'b'}; // 6 respostas.
    // opções das respostas
    char opcoes[7][7][100] = {
        {"a) Tem entre 2 a 4 litros. Sao retirados 450 mililitros",
         "b) Tem entre 4 a 6 litros. Sao retirados 450 mililitros",
         "c) Tem 10 litros. Sao retirados 2 litros",
         "d) Tem 7 litros. Sao retirados 1,5 litros",
         "e) Tem 0,5 litros. Sao retirados 0,5 litros"},
        {"a) Platão",
         "b) Galileu Galilei",
         "c) Descarte",
         "d) Sócrates",
         "e) Francis Bacon"},
        {"a) França",
         "b) Inglaterra",
         "c) Itália",
         "d) Brasil",
         "e) Austrália"},
        {"a) Michael Jackson", "b) Justin Biebier", "c) Bad Bunny", "d) BTS", "e) Exo"},
        {"a) Rússia", "b) Brasil", "c) Paris", "d) Estados Unidos"},
        {"a) Japao", "b) China", "c) Russia", "d) Inglaterra"},
        {"a) Japao", "b) China", "c) Russia", "d) Inglaterra"}

    };

    printf("Olá, bem-vindo ao jogo do Quiz.\n");
    printf("As respostas tem que ser feita em letra minuscula\n");

    int acertos = 0;
    // for para pecorrer até o número de questões que tem.
    for (int i = 0; i < 7; i++)
    {
        printf("\nPERGUNTA %d\n", i + 1);
        printf("%s\n", perguntas[i]);
        printf("%s\n%s\n%s\n%s\n%s\n", opcoes[i][0], opcoes[i][1], opcoes[i][2], opcoes[i][3], opcoes[i][4]); // pecorrrendo as perguntas

        char resposta; // respostas, se for certa ou errado.
        printf("Resposta: ");
        scanf(" %c", &resposta);

        if (resposta == respostas[i])
        {
            printf("Resposta correta!\n");
            acertos++;
        }
        else
        {
            printf("Resposta incorreta.\n");
        }
    }

    printf("\nVocê acertou %d perguntas de 7.\n", acertos);
    printf("Obrigado por jogar!\n");

    return 0;
}
