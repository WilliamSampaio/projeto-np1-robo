#include <locale.h>
#include "np1.h"

int main()
{
    setlocale(LC_ALL, "portuguese"); // Passa a aceitar caracteres especiais (Ex.: á, é, ã, ç...)

    while (1)
    {
        unip();           // Chama a função unip() - Desenha unip na tela
        starWars();       // Chama a função starwars() - Desenha StarWars na tela
        starWarsRobots(); // Chama a função starWarsRobots() - Desenha os robôs R2-D2, BB-8 e C-3PO na tela
        info();           // Chama a função info() - Escreva as informações sobre a aplicação
        menu();           // Chama a função menu() - Exibe um menu de 3 opções para o usuário
    }

    return 0;
}
