#ifdef _WIN32
    #include <windows.h>
#elif linux
    #include <unistd.h>
#endif

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/** CORES ANSI */
#define COLOR_RED              "\x1b[31m"
#define COLOR_GREEN            "\x1b[32m"
#define COLOR_YELLOW           "\x1b[33m"
#define COLOR_BLUE             "\x1b[34m"
#define COLOR_MAGENTA          "\x1b[35m"
#define COLOR_WHITE            "\x1b[37m"
#define COLOR_ORANGE           "\x1b[38;5;202m"
#define COLOR_LIGHT_RED        "\x1b[31;1m"
#define COLOR_LIGHT_GREEN      "\x1b[32;1m"
#define COLOR_LIGHT_YELLOW     "\x1b[33;1m"
#define COLOR_LIGHT_MAGENTA    "\x1b[35;1m"
#define COLOR_LIGHT_BLUE       "\x1b[36;1m"
#define COLOR_LIGHT_WHITE      "\x1b[37;1m"
#define COLOR_BACKGROUND_BLACK "\x1b[40m"
#define COLOR_BACKGROUND_RED   "\x1b[41m"
#define COLOR_RESET            "\x1b[0m"

/** Função imprime o logotipo da UNIP */
void unip(void){
    printf(COLOR_RESET);
    printf(COLOR_BACKGROUND_BLACK);
    printf(COLOR_LIGHT_YELLOW);
    printf("                                                                                \n");
    printf("           UUUUUO.   UUUUUO.  UUUUO.    UUUUUO.  UUUUUO.  UUUUUUUUUUUUO.        \n");
    printf("          UUUUUO.   UUUUUO.  UUUUUUO.  UUUUUO.  UUUUUO.  UUUUUUUUUUUUUUO.       \n");
    printf("         UUUUUO.   UUUUUO.  UUUUUUUUO.UUUUUO.  UUUUUO.  UUUUUO.   UUUUUO.       \n");
    printf("        UUUUUO.   UUUUUO.  UUUUUUUUUUUUUUUO.  UUUUUO.  UUUUUUUUUUUUUUUO.        \n");
    printf("       UUUUUO.  _UUUUUO.  UUUUUUUUUUUUUUUO.  UUUUUO.  UUUUUUUUUUUUUUO.          \n");
    printf("      UUUUUUUUUUUUUUUO.  UUUUUUO.UUUUUUUO.  UUUUUO.  UUUUUO.                    \n");
    printf("      uUUUUUUUUUUUUOo.  UUUUOo.   UUUUOo.  UUUUOo.  UUUUOo.                     \n");
    printf("       uUUUUUUUUUOo.   UUUOo.      UUOo.  UUUOo.   UUUOo.                       \n");
    printf("                                                                                \n");
    printf(COLOR_WHITE);
    printf("================================================================================\n");
    printf(COLOR_BACKGROUND_RED);
    printf(" X X X  X X X X XXX XXX XXX X XX   X  XX  XXX    XXX  X  X X X   X XXX XXX  X   \n");
    printf(COLOR_BACKGROUND_BLACK);
    printf(COLOR_BACKGROUND_RED);
    printf(" X X XX X X X X X   X X X   X X X X X X X X      X X X X X X X   X X    X  X X  \n");
    printf(COLOR_BACKGROUND_BLACK);
    printf(COLOR_BACKGROUND_RED);
    printf(" X X XXXX X X X XXX XX  XXX X X X XXX X X XXX    XXX XXX X X X   X XXX  X  XXX  \n");
    printf(COLOR_BACKGROUND_BLACK);
    printf(COLOR_BACKGROUND_RED);
    printf(" X X X XX X X X X   X X   X X X X X X X X X      X   X X X X X   X   X  X  X X  \n");
    printf(COLOR_BACKGROUND_BLACK);
    printf(COLOR_BACKGROUND_RED);
    printf(" XXX X  X X  X  XXX X X XXX X XX  X X XX  XXX    X   X X XXX XXX X XXX  X  X X  \n");
    printf(COLOR_BACKGROUND_BLACK);
    printf("================================================================================\n");
}

/** Função imprime "Star Wars" */
void starWars(void){
    printf(COLOR_BACKGROUND_BLACK);
    printf(COLOR_LIGHT_MAGENTA);
    printf("                                                                                \n");
    printf("                      v@@@@@@@@@@@@@@@@@@uk@@@@@i@@@@@@@@@q                     \n");
    printf("                     @@@@@@@@@@@@@@@@@@@@v@@@@@@7O@@@@@@@@@@:                   \n");
    printf("                    @@@@@J       G@@@@   @@@@@@@G,@@@@  E@@@@L                  \n");
    printf("                   @@@@@@@@@@@@L @@@@@  O@@@@@@@@ B@@@@8@@@@@@j                 \n");
    printf("                  .@@@@@@@@@@@@7i@@@@q 7@@@@:N@@@7;@@@@@@@@@@@@                 \n");
    printf("                         1@@@@@ @@@@@. @@@@@ q@@@@ @@@@@8@@@@@i                 \n");
    printf("                P@@@@@0  @@@@@J @@@@@ O@@@@@@@@@@@.S@@@@i:@@@@M,                \n");
    printf("               @@@@@@@@@@@@@@@ P@@@@OJ@@@@@EEB@@@@F.@@@@@  @@@@@8               \n");
    printf("              :@@@@@@@@@@@@@@5 @@@@@@@@@@@    @@@@@ @@@@@@  O@@@@@L             \n");
    printf("               :7L:. iii7::,   7rv.:ii:i;:    riiir .: .iY   iiiiv1.            \n");
    printf("            i@@@@.  i@@@@   r@@@@, BBMMB@F:@@@@BB@@@@B. B@@@@@@@@@@@@           \n");
    printf("           i@@@@7 .@@@@@Y  Z@@@@:.@@@@@@@E,@@@@@@@@@@@@8@@@@@@@@@@@@@@          \n");
    printf("          :@@@@7 U@@@@@@  @@@@@.,@@@@@@@@N @@@@@. 0@@@@@@@@@@@; F@@@@@@         \n");
    printf("         :@@@@u @@@@@@@Y @@@@@ :@@@@@@@@@0 @@@@@. 1@@@@@@@@@@@S  ,...:i         \n");
    printf("        :@@@@Bk@@@@@@@@F@@@@@ i@@@@@@@@@@E @@@@@@@@@@@@@@@@@@@@@@@@@@@@@F       \n");
    printf("       ,@@@@@@@@@@@@@@@@@@@@ r@@@@@7U@@@@G @@@@@@@@@@@@@@ 5@@@@@@@@@@@@@@@      \n");
    printf("      ,@@@@@@@@@.M@@@@@@@@@ v@@@@@k k@@@@8 @@@@@@@@@@@@v    ...   :G@@@@@@@     \n");
    printf("     .@@@@@@@@M  @@@@@@@@@ j@@@@@@@@@@@@@O @@@@@@ @@@@@@   @@BMB@,  8@@@@@@M    \n");
    printf("    .@@@@@@@@L  E@@@@@@@M 5@@@@@@@@@@@@@@M @@@@@@  @@@@@@v ;@@@@@@BG@@@@@@@@X   \n");
    printf("   ,@@@@@@@@.   @@@@@@@M E@@@@@B    @@@@@@ @@@@@@L .@@@@@@S @@@@@@@@@@@@@@@@@F  \n");
    printf("  7@@@@@@@G    1@@@@@@@ @@@@@@O    ,@@@@@@ @@@@@@@  :@@@@@@@u@@@@@@@@@@@@@@@@@  \n");
    printf("  7r::::::     :i::::: .r:::::      i::::: i::::ii   .::::ir. ,:::::::::::::,   \n");
}

/** Função desenha os robôs do Star Wars */
void starWarsRobots(void){
    printf(COLOR_BACKGROUND_BLACK);
    printf("                                                                                \n");
    printf("                                                                                \n");
    printf("                                                          %s,:::,                 \n",COLOR_LIGHT_YELLOW);
    printf("                                                        ,Ms,  BX                \n");
    printf("                                                        sBs2s 9B:               \n");
    printf("                                                        iMrGss9@r               \n");
    printf("                                                         S@29S5B,               \n");
    printf("                                                          B295GB,               \n");
    printf("                                                          SBsXs9                \n");
    printf("                                                     ,:,,:MM,Srrs,,r            \n");
    printf("                                                   :9si  :Xsrsr:  is,r,         \n");
    printf("                                                   @MHB5   :,   sisi2r2i        \n");
    printf("                                                 ,s:MM@9ri,    s@XGHMMG2        \n");
    printf("                                                %s2s SX s@BMGSrXB@:sBGG%s@B@:       \n",COLOR_LIGHT_YELLOW,COLOR_RED);
    printf("                                              %si2s;@B  2@s:rssS@2 GB  %sBMM@S      \n",COLOR_LIGHT_YELLOW,COLOR_RED);
    printf("                                             %srB: @Br  MG ,,,rG9  @s  %sSBMM@M     \n",COLOR_LIGHT_YELLOW,COLOR_RED);
    printf("                                              %s9X rs   9Bi:, sBG 2B   %ssHM99@B,   \n",COLOR_LIGHT_YELLOW,COLOR_RED);
    printf("                  %s,s%sG@BB%s92i                   %sr@ :2    @G2i5B@G9Bi   %siG92MBS:   \n",COLOR_WHITE,COLOR_BLUE,COLOR_WHITE,COLOR_LIGHT_YELLOW,COLOR_RED);
    printf("                %s:H2%s:XBG9M%ssrSs                  %sBi G   sBMB@B@MBB@r   %s:@5XBs     \n",COLOR_WHITE,COLOR_BLUE,COLOR_WHITE,COLOR_LIGHT_YELLOW,COLOR_RED);
    printf("               %ssG5r%s:sHX22%s:iXB@                 %s2M,Mr  rM9M99HSssX@   %sBX9BM      \n",COLOR_WHITE,COLOR_BLUE,COLOR_WHITE,COLOR_LIGHT_YELLOW,COLOR_RED);
    printf("              %s,B@92issHrssXSGBB                 %sXiss  2B9S,:i2SGS@  %s@BBBG       \n",COLOR_WHITE,COLOR_LIGHT_YELLOW,COLOR_RED);
    printf("              %sG@BG92sss229X99GB,               %ss9:,,:rB99Hss9@BMrX%sM@M@Bs        \n",COLOR_BLUE,COLOR_LIGHT_YELLOW,COLOR_RED);
    printf("              %sMBSsi:222s2222Hss;               %s,HHH   Mr22sM@@M%s999@B@B          \n",COLOR_BLUE,COLOR_LIGHT_YELLOW,COLOR_RED);
    printf("              %s:s,,,,,s: isss:::Xr ,             %s,s,   25sXs99siB%s9sGGB           \n",COLOR_WHITE,COLOR_LIGHT_YELLOW,COLOR_RED);
    printf("           %srS   ri,%s::irHS2s,ss%s:rS :,                  %s5GsBG9Mr 92:9             \n",COLOR_WHITE,COLOR_BLUE,COLOR_WHITE,COLOR_LIGHT_YELLOW);
    printf("           %ssX, ,2r,:::,:r2sr,ir;Mrrs        ;         %sXH:@99B5,2XrG             \n",COLOR_WHITE,COLOR_LIGHT_YELLOW);
    printf("           %sXS;rs9:,%s::   r952, r%s:M5sS        r         %s9XrB99@2siGrM             \n",COLOR_WHITE,COLOR_BLUE,COLOR_WHITE,COLOR_LIGHT_YELLOW);
    printf("          %s,@Brrs2:,,:r:,,%sGXG:%s :;sS59    ,   ,,,       %s9Gr@S9@S2:5rG             \n",COLOR_WHITE,COLOR_BLUE,COLOR_WHITE,COLOR_LIGHT_YELLOW);
    printf("           %sBB:ir2::,isi  %s9MS2%s ,rsSB:   ::,i: ,::      %s:BrMX9Ss2 SSS             \n",COLOR_WHITE,COLOR_BLUE,COLOR_WHITE,COLOR_LIGHT_YELLOW);
    printf("           %sGMssHs:: :ri: %ssssr%s,:rr@M   ,  @B@G   ,      %sGsSsGX5i:Gsi             \n",COLOR_WHITE,COLOR_BLUE,COLOR_WHITE,COLOR_LIGHT_YELLOW);
    printf("           %ss@2sB5is2r  ,,  ,,,,,:MX  ri, rGGiS@:ri    %sSM2ssXMr,sssH2            \n",COLOR_WHITE,COLOR_LIGHT_YELLOW);
    printf("           %s2B;:@2rMM2,srr:GMG  ,i@s  ;S2:  ,,ssr2:    %ss@BGHS2HX2sGB9            \n",COLOR_WHITE,COLOR_LIGHT_YELLOW);
    printf("           %s9@rsBGiG92::,r:ss2:::iMs   rGGS22XXGGr      %sr@BMMG9GGGG@5            \n",COLOR_WHITE,COLOR_LIGHT_YELLOW);
    printf("          %s,BB:s@B,rssrssissrssrs2G2  %s:Hs:%sri:r:%s,i5s%s,     %ssBGB9@9XB99r            \n",COLOR_WHITE,COLOR_ORANGE,COLOR_WHITE,COLOR_ORANGE,COLOR_WHITE,COLOR_LIGHT_YELLOW);
    printf("          %s:r2ssHGsG2sr:i,:srsrrrSBs  %sr2, ,    , sH,%s,,    %sB@B52G2GX2             \n",COLOR_WHITE,COLOR_ORANGE,COLOR_WHITE,COLOR_LIGHT_YELLOW);
    printf("          %sB5SGssHXs9s9GBM9XHG@MGB9   %s,22ss  ,:222s,%s,:    %sMB@9s9XG@r             \n",COLOR_WHITE,COLOR_ORANGE,COLOR_WHITE,COLOR_LIGHT_YELLOW);
    printf("          %sr9GGXH@X rMB@BMXs2M@BMG,  , %s,s22S2H552s,%s ,::   %ss@MG:9HGM              \n",COLOR_WHITE,COLOR_ORANGE,COLOR_WHITE,COLOR_LIGHT_YELLOW);
    printf("         %ssssS2rXMX      rGrs9@BM:%s:ss%si,,  %s:irrr:,%s ::%ssH9   %ssMG5 Xss9              \n",COLOR_WHITE,COLOR_ORANGE,COLOR_WHITE,COLOR_ORANGE,COLOR_WHITE,COLOR_ORANGE,COLOR_LIGHT_YELLOW);
    printf("        %ss2r,s2rGMG     29r5s,X@@%sGHG5XS%ss,,,,,,,,,:%ss9SGB   %s5GGHiXssS              \n",COLOR_WHITE,COLOR_ORANGE,COLOR_WHITE,COLOR_ORANGE,COLOR_LIGHT_YELLOW);
    printf("       %s,MGr,,M9MBX    5Sr,is  B@%sBX%srsH%ssHS%sr:::::,s%sXXr%s;22 %s,,is9r9GssM              \n",COLOR_WHITE,COLOR_ORANGE,COLOR_WHITE,COLOR_ORANGE,COLOR_WHITE,COLOR_ORANGE,COLOR_WHITE,COLOR_LIGHT_YELLOW);
    printf("         %ssGi:9MSMS    @Si ,s: iii%si%ss2@r%s2GGs%srrris%s9G2r%ssM%s9X2sX@Bss@5 Gr             \n",COLOR_WHITE,COLOR_ORANGE,COLOR_WHITE,COLOR_ORANGE,COLOR_WHITE,COLOR_ORANGE,COLOR_WHITE,COLOR_LIGHT_YELLOW);
    printf("           %sssr::::    iM9ssGG9s   :XBHrr%s9G%srrrsG%s92%s2XS%sSGGGMG5s: G@HsMS            \n",COLOR_WHITE,COLOR_ORANGE,COLOR_WHITE,COLOR_ORANGE,COLOR_WHITE,COLOR_LIGHT_YELLOW);
    printf("                        %srX5ss2,     9BMs%sMB%s2rs9%s@B%s@G2            %s:G9sH            \n",COLOR_WHITE,COLOR_ORANGE,COLOR_WHITE,COLOR_ORANGE,COLOR_WHITE,COLOR_LIGHT_YELLOW);
    printf("                                      %ssGM%sM9GGM%sB9s                               \n",COLOR_ORANGE,COLOR_WHITE,COLOR_ORANGE);
    printf("                                                                                \n");
    printf("                %sR2-D2                    BB-8             C-3PO                 \n",COLOR_WHITE);
}

/** Função imprime as informações sobre a aplicação */
void info(void){
    printf(COLOR_LIGHT_GREEN);
    int tan,i;

    char lin1[] = "\n________________________________________________________________________________\n";
    char lin2[] = "\n                          UNIVERSIDADE PAULISTA - UNIP \n";
    char lin3[] = "                          SUP TEC ANÁLISE DES SISTEMAS \n";
    char lin4[] = "\n                         TURMA: DS1A34\tTURNO: MATUTINO \n";
    char lin5[] = "\n                ALUNO: WILLIAM BENJAMIM M SAMPAIO / RA: D7534B-7 \n";
    char lin6[] = "                **** Arte gerada com ASCII Generator v2.0.0 **** \n";
    char lin7[] = "                     - http://ascgendotnet.jmsoftware.co.uk \n";
    char lin8[] = "                        - http://ascgen2.sourceforge.net \n";
    char lin9[] = "________________________________________________________________________________\n";

    tan = strlen(lin1);
	for(i=0;i<tan;i++){
        printf("%c",lin1[i]);
    }
    tan = strlen(lin2);
	for(i=0;i<tan;i++){
        printf("%c",lin2[i]);
    }
    tan = strlen(lin3);
	for(i=0;i<tan;i++){
        printf("%c",lin3[i]);
    }
    tan = strlen(lin4);
	for(i=0;i<tan;i++){
        printf("%c",lin4[i]);
    }
    tan = strlen(lin5);
	for(i=0;i<tan;i++){
        printf("%c",lin5[i]);
    }
    printf("\n");
    tan = strlen(lin6);
	for(i=0;i<tan;i++){
        printf("%c",lin6[i]);
    }
    tan = strlen(lin7);
	for(i=0;i<tan;i++){
        printf("%c",lin7[i]);
    }
    tan = strlen(lin8);
	for(i=0;i<tan;i++){
        printf("%c",lin8[i]);
    }
    tan = strlen(lin9);
	for(i=0;i<tan;i++){
        printf("%c",lin9[i]);
    }
}

/** Função imprime "Obrigado!" e fecha a aplicação */
void sair(void){
    printf(COLOR_LIGHT_RED);
    printf("                                                                               \n");
    printf("                                                                               \n");
    printf("                                                                       b$GO    \n");
    printf("                                                                       @@@G    \n");
    printf("      L@@@@@: ,@@@@@@: E@@@@@$. @@  1@@@@@,    @@;   @@@@@@,   G@@@@U  @@@     \n");
    printf("     i@@. ,@@  @E   @@ b@;  ,@@ @@ S@N  ;@@   N@@@   @@..;@@: @@7  K@WL@@G     \n");
    printf("     @@     @O @K  .@2 Z@.   @@ @$ @$         @T:@r  @@    @G:@1    b@@$@:     \n");
    printf("     @$     @g @@@@@@r Z@@@@@i  @0 @2  G@$$: D@  @@  @@    @By@:    r@0$g      \n");
    printf("     @@    .@K @r   j@.T@. W@T  @$ @@   .W@. @@@@@@z @@    @W.@E    G@         \n");
    printf("     L@@r,n@@ .@8,;r@@ K@.  8@S @@ y@@;.;@@.$@,,,.@@ @@r;7@@. @@G,,0@@$@       \n");
    printf("      :g@@@G  :@@@@@$; j@:   D@;$$  ;$@@@8:.@K    r@yS@@@@B.   n@@@@SB@@       \n");
    printf("                                                                               \n");
    printf("                                                                               \n");
}

/** Função principal */
int main()
{
    /** Função Menu*/
    void menu(void){
        int option;
        printf(" [1] - RESET\n");
        printf(" [2] - SOBRE\n");
        printf(" [3] - SAIR\n");
        printf("\n Digite o número da opção: ");
        scanf("%d",&option);
        switch(option){
        case 1:
        	/** Chama a função principal "main", ou seja, REINICIA a aplicaçõa! */
        	#ifdef _WIN32
                system("cls");
            #elif linux
                system("clear");
            #endif // _WIN32
            main();
            break;
        case 2:
        	/** Limpa a tela, chama a função info() e, em seguida, menu() */
            #ifdef _WIN32
                system("cls");
            #elif linux
                system("clear");
            #endif // _WIN32
            info();
            menu();
            break;
        case 3:
        	/** Chama a funçõa sair() - que imprime OBRIGADO! e 1s depois fecha a aplicaçõa */
        	#ifdef _WIN32
                system("cls");
            #elif linux
                system("clear");
            #endif // _WIN32
            sair();
            break;
        default:
        	/**
        		Caso a opção fornecida pelo usuário seja inválida então:
        			exibe a mensagem de erro: " * Opção inválida * "
        			chama a função menu() novamente
        	*/
        	#ifdef _WIN32
                system("cls");
            #elif linux
                system("clear");
            #endif // _WIN32
            printf("\x1b[31;10m\n * Opção inválida *\n\n\x1b[0m");
            menu();
        }
    }

    setlocale(LC_ALL,"portuguese"); //Passa a aceitar caracteres especiais (Ex.: á, é, ã, ç...)
    unip(); //Chama a função unip() - Desenha unip na tela
    starWars(); //Chama a função starwars() - Desenha StarWars na tela
    starWarsRobots(); //Chama a função starWarsRobots() - Desenha os robôs R2-D2, BB-8 e C-3PO na tela
    info(); //Chama a função info() - Escreva as informações sobre a aplicação
    menu();	//Chama a função menu() - Exibe um menu de 3 opções para o usuário

	return 0;
}
