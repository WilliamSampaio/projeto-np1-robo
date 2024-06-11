#ifdef _WIN32
#include <windows.h>
#elif linux
#include <unistd.h>
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "np1.h"

void print_c(char _c, float _delay)
{
    printf("%c", _c);
    usleep(_delay);
    fflush(stdout);
}

void unip()
{
    printf("%s%s                                                                                %s\n", BG_BLACK, FG_L_YELLOW, RESET_C);
    printf("%s%s           UUUUUO.   UUUUUO.  UUUUO.    UUUUUO.  UUUUUO.  UUUUUUUUUUUUO.        %s\n", BG_BLACK, FG_L_YELLOW, RESET_C);
    printf("%s%s          UUUUUO.   UUUUUO.  UUUUUUO.  UUUUUO.  UUUUUO.  UUUUUUUUUUUUUUO.       %s\n", BG_BLACK, FG_L_YELLOW, RESET_C);
    printf("%s%s         UUUUUO.   UUUUUO.  UUUUUUUUO.UUUUUO.  UUUUUO.  UUUUUO.   UUUUUO.       %s\n", BG_BLACK, FG_L_YELLOW, RESET_C);
    printf("%s%s        UUUUUO.   UUUUUO.  UUUUUUUUUUUUUUUO.  UUUUUO.  UUUUUUUUUUUUUUUO.        %s\n", BG_BLACK, FG_L_YELLOW, RESET_C);
    printf("%s%s       UUUUUO.  _UUUUUO.  UUUUUUUUUUUUUUUO.  UUUUUO.  UUUUUUUUUUUUUUO.          %s\n", BG_BLACK, FG_L_YELLOW, RESET_C);
    printf("%s%s      UUUUUUUUUUUUUUUO.  UUUUUUO.UUUUUUUO.  UUUUUO.  UUUUUO.                    %s\n", BG_BLACK, FG_L_YELLOW, RESET_C);
    printf("%s%s      uUUUUUUUUUUUUOo.  UUUUOo.   UUUUOo.  UUUUOo.  UUUUOo.                     %s\n", BG_BLACK, FG_L_YELLOW, RESET_C);
    printf("%s%s       uUUUUUUUUUOo.   UUUOo.      UUOo.  UUUOo.   UUUOo.                       %s\n", BG_BLACK, FG_L_YELLOW, RESET_C);
    printf("%s%s                                                                                %s\n", BG_BLACK, FG_L_YELLOW, RESET_C);
    printf("%s================================================================================%s\n", FG_WHITE, RESET_C);
    printf("%s%s X X X  X X X X XXX XXX XXX X XX   X  XX  XXX    XXX  X  X X X   X XXX XXX  X   %s\n", BG_RED, FG_WHITE, RESET_C);
    printf("%s%s X X XX X X X X X   X X X   X X X X X X X X      X X X X X X X   X X    X  X X  %s\n", BG_RED, FG_WHITE, RESET_C);
    printf("%s%s X X XXXX X X X XXX XX  XXX X X X XXX X X XXX    XXX XXX X X X   X XXX  X  XXX  %s\n", BG_RED, FG_WHITE, RESET_C);
    printf("%s%s X X X XX X X X X   X X   X X X X X X X X X      X   X X X X X   X   X  X  X X  %s\n", BG_RED, FG_WHITE, RESET_C);
    printf("%s%s XXX X  X X  X  XXX X X XXX X XX  X X XX  XXX    X   X X XXX XXX X XXX  X  X X  %s\n", BG_RED, FG_WHITE, RESET_C);
    printf("%s================================================================================%s\n", FG_WHITE, RESET_C);
}

void starWars()
{
    printf("%s                                                                                %s\n", BG_BLACK, RESET_C);
    printf("%s%s                      v@@@@@@@@@@@@@@@@@@uk@@@@@i@@@@@@@@@q                     %s\n", BG_BLACK, FG_L_MAGENTA, RESET_C);
    printf("%s%s                     @@@@@@@@@@@@@@@@@@@@v@@@@@@7O@@@@@@@@@@:                   %s\n", BG_BLACK, FG_L_MAGENTA, RESET_C);
    printf("%s%s                    @@@@@J       G@@@@   @@@@@@@G,@@@@  E@@@@L                  %s\n", BG_BLACK, FG_L_MAGENTA, RESET_C);
    printf("%s%s                   @@@@@@@@@@@@L @@@@@  O@@@@@@@@ B@@@@8@@@@@@j                 %s\n", BG_BLACK, FG_L_MAGENTA, RESET_C);
    printf("%s%s                  .@@@@@@@@@@@@7i@@@@q 7@@@@:N@@@7;@@@@@@@@@@@@                 %s\n", BG_BLACK, FG_L_MAGENTA, RESET_C);
    printf("%s%s                         1@@@@@ @@@@@. @@@@@ q@@@@ @@@@@8@@@@@i                 %s\n", BG_BLACK, FG_L_MAGENTA, RESET_C);
    printf("%s%s                P@@@@@0  @@@@@J @@@@@ O@@@@@@@@@@@.S@@@@i:@@@@M,                %s\n", BG_BLACK, FG_L_MAGENTA, RESET_C);
    printf("%s%s               @@@@@@@@@@@@@@@ P@@@@OJ@@@@@EEB@@@@F.@@@@@  @@@@@8               %s\n", BG_BLACK, FG_L_MAGENTA, RESET_C);
    printf("%s%s              :@@@@@@@@@@@@@@5 @@@@@@@@@@@    @@@@@ @@@@@@  O@@@@@L             %s\n", BG_BLACK, FG_L_MAGENTA, RESET_C);
    printf("%s%s               :7L:. iii7::,   7rv.:ii:i;:    riiir .: .iY   iiiiv1.            %s\n", BG_BLACK, FG_L_MAGENTA, RESET_C);
    printf("%s%s            i@@@@.  i@@@@   r@@@@, BBMMB@F:@@@@BB@@@@B. B@@@@@@@@@@@@           %s\n", BG_BLACK, FG_L_MAGENTA, RESET_C);
    printf("%s%s           i@@@@7 .@@@@@Y  Z@@@@:.@@@@@@@E,@@@@@@@@@@@@8@@@@@@@@@@@@@@          %s\n", BG_BLACK, FG_L_MAGENTA, RESET_C);
    printf("%s%s          :@@@@7 U@@@@@@  @@@@@.,@@@@@@@@N @@@@@. 0@@@@@@@@@@@; F@@@@@@         %s\n", BG_BLACK, FG_L_MAGENTA, RESET_C);
    printf("%s%s         :@@@@u @@@@@@@Y @@@@@ :@@@@@@@@@0 @@@@@. 1@@@@@@@@@@@S  ,...:i         %s\n", BG_BLACK, FG_L_MAGENTA, RESET_C);
    printf("%s%s        :@@@@Bk@@@@@@@@F@@@@@ i@@@@@@@@@@E @@@@@@@@@@@@@@@@@@@@@@@@@@@@@F       %s\n", BG_BLACK, FG_L_MAGENTA, RESET_C);
    printf("%s%s       ,@@@@@@@@@@@@@@@@@@@@ r@@@@@7U@@@@G @@@@@@@@@@@@@@ 5@@@@@@@@@@@@@@@      %s\n", BG_BLACK, FG_L_MAGENTA, RESET_C);
    printf("%s%s      ,@@@@@@@@@.M@@@@@@@@@ v@@@@@k k@@@@8 @@@@@@@@@@@@v    ...   :G@@@@@@@     %s\n", BG_BLACK, FG_L_MAGENTA, RESET_C);
    printf("%s%s     .@@@@@@@@M  @@@@@@@@@ j@@@@@@@@@@@@@O @@@@@@ @@@@@@   @@BMB@,  8@@@@@@M    %s\n", BG_BLACK, FG_L_MAGENTA, RESET_C);
    printf("%s%s    .@@@@@@@@L  E@@@@@@@M 5@@@@@@@@@@@@@@M @@@@@@  @@@@@@v ;@@@@@@BG@@@@@@@@X   %s\n", BG_BLACK, FG_L_MAGENTA, RESET_C);
    printf("%s%s   ,@@@@@@@@.   @@@@@@@M E@@@@@B    @@@@@@ @@@@@@L .@@@@@@S @@@@@@@@@@@@@@@@@F  %s\n", BG_BLACK, FG_L_MAGENTA, RESET_C);
    printf("%s%s  7@@@@@@@G    1@@@@@@@ @@@@@@O    ,@@@@@@ @@@@@@@  :@@@@@@@u@@@@@@@@@@@@@@@@@  %s\n", BG_BLACK, FG_L_MAGENTA, RESET_C);
    printf("%s%s  7r::::::     :i::::: .r:::::      i::::: i::::ii   .::::ir. ,:::::::::::::,   %s\n", BG_BLACK, FG_L_MAGENTA, RESET_C);
}

void starWarsRobots()
{
    printf("%s                                                                                %s\n", BG_BLACK, RESET_C);
    printf("%s                                                                                %s\n", BG_BLACK, RESET_C);
    printf("%s                                                          %s,:::,                 %s\n", BG_BLACK, FG_L_YELLOW, RESET_C);
    printf("%s                                                        %s,Ms,  BX                %s\n", BG_BLACK, FG_L_YELLOW, RESET_C);
    printf("%s                                                        %ssBs2s 9B:               %s\n", BG_BLACK, FG_L_YELLOW, RESET_C);
    printf("%s                                                        %siMrGss9@r               %s\n", BG_BLACK, FG_L_YELLOW, RESET_C);
    printf("%s                                                         %sS@29S5B,               %s\n", BG_BLACK, FG_L_YELLOW, RESET_C);
    printf("%s                                                          %sB295GB,               %s\n", BG_BLACK, FG_L_YELLOW, RESET_C);
    printf("%s                                                          %sSBsXs9                %s\n", BG_BLACK, FG_L_YELLOW, RESET_C);
    printf("%s                                                     %s,:,,:MM,Srrs,,r            %s\n", BG_BLACK, FG_L_YELLOW, RESET_C);
    printf("%s                                                   %s:9si  :Xsrsr:  is,r,         %s\n", BG_BLACK, FG_L_YELLOW, RESET_C);
    printf("%s                                                   %s@MHB5   :,   sisi2r2i        %s\n", BG_BLACK, FG_L_YELLOW, RESET_C);
    printf("%s                                                 %s,s:MM@9ri,    s@XGHMMG2        %s\n", BG_BLACK, FG_L_YELLOW, RESET_C);
    printf("%s                                                %s2s SX s@BMGSrXB@:sBGG%s@B@:       %s\n", BG_BLACK, FG_L_YELLOW, FG_RED, RESET_C);
    printf("%s                                              %si2s;@B  2@s:rssS@2 GB  %sBMM@S      %s\n", BG_BLACK, FG_L_YELLOW, FG_RED, RESET_C);
    printf("%s                                             %srB: @Br  MG ,,,rG9  @s  %sSBMM@M     %s\n", BG_BLACK, FG_L_YELLOW, FG_RED, RESET_C);
    printf("%s                                              %s9X rs   9Bi:, sBG 2B   %ssHM99@B,   %s\n", BG_BLACK, FG_L_YELLOW, FG_RED, RESET_C);
    printf("%s                  %s,s%sG@BB%s92i                   %sr@ :2    @G2i5B@G9Bi   %siG92MBS:   %s\n", BG_BLACK, FG_WHITE, FG_BLUE, FG_WHITE, FG_L_YELLOW, FG_RED, RESET_C);
    printf("%s                %s:H2%s:XBG9M%ssrSs                  %sBi G   sBMB@B@MBB@r   %s:@5XBs     %s\n", BG_BLACK, FG_WHITE, FG_BLUE, FG_WHITE, FG_L_YELLOW, FG_RED, RESET_C);
    printf("%s               %ssG5r%s:sHX22%s:iXB@                 %s2M,Mr  rM9M99HSssX@   %sBX9BM      %s\n", BG_BLACK, FG_WHITE, FG_BLUE, FG_WHITE, FG_L_YELLOW, FG_RED, RESET_C);
    printf("%s              %s,B@92issHrssXSGBB                 %sXiss  2B9S,:i2SGS@  %s@BBBG       %s\n", BG_BLACK, FG_WHITE, FG_L_YELLOW, FG_RED, RESET_C);
    printf("%s              %sG@BG92sss229X99GB,               %ss9:,,:rB99Hss9@BMrX%sM@M@Bs        %s\n", BG_BLACK, FG_BLUE, FG_L_YELLOW, FG_RED, RESET_C);
    printf("%s              %sMBSsi:222s2222Hss;               %s,HHH   Mr22sM@@M%s999@B@B          %s\n", BG_BLACK, FG_BLUE, FG_L_YELLOW, FG_RED, RESET_C);
    printf("%s              %s:s,,,,,s: isss:::Xr ,             %s,s,   25sXs99siB%s9sGGB           %s\n", BG_BLACK, FG_WHITE, FG_L_YELLOW, FG_RED, RESET_C);
    printf("%s           %srS   ri,%s::irHS2s,ss%s:rS :,                  %s5GsBG9Mr 92:9             %s\n", BG_BLACK, FG_WHITE, FG_BLUE, FG_WHITE, FG_L_YELLOW, RESET_C);
    printf("%s           %ssX, ,2r,:::,:r2sr,ir;Mrrs        ;         %sXH:@99B5,2XrG             %s\n", BG_BLACK, FG_WHITE, FG_L_YELLOW, RESET_C);
    printf("%s           %sXS;rs9:,%s::   r952, r%s:M5sS        r         %s9XrB99@2siGrM             %s\n", BG_BLACK, FG_WHITE, FG_BLUE, FG_WHITE, FG_L_YELLOW, RESET_C);
    printf("%s          %s,@Brrs2:,,:r:,,%sGXG:%s :;sS59    ,   ,,,       %s9Gr@S9@S2:5rG             %s\n", BG_BLACK, FG_WHITE, FG_BLUE, FG_WHITE, FG_L_YELLOW, RESET_C);
    printf("%s           %sBB:ir2::,isi  %s9MS2%s ,rsSB:   ::,i: ,::      %s:BrMX9Ss2 SSS             %s\n", BG_BLACK, FG_WHITE, FG_BLUE, FG_WHITE, FG_L_YELLOW, RESET_C);
    printf("%s           %sGMssHs:: :ri: %ssssr%s,:rr@M   ,  @B@G   ,      %sGsSsGX5i:Gsi             %s\n", BG_BLACK, FG_WHITE, FG_BLUE, FG_WHITE, FG_L_YELLOW, RESET_C);
    printf("%s           %ss@2sB5is2r  ,,  ,,,,,:MX  ri, rGGiS@:ri    %sSM2ssXMr,sssH2            %s\n", BG_BLACK, FG_WHITE, FG_L_YELLOW, RESET_C);
    printf("%s           %s2B;:@2rMM2,srr:GMG  ,i@s  ;S2:  ,,ssr2:    %ss@BGHS2HX2sGB9            %s\n", BG_BLACK, FG_WHITE, FG_L_YELLOW, RESET_C);
    printf("%s           %s9@rsBGiG92::,r:ss2:::iMs   rGGS22XXGGr      %sr@BMMG9GGGG@5            %s\n", BG_BLACK, FG_WHITE, FG_L_YELLOW, RESET_C);
    printf("%s          %s,BB:s@B,rssrssissrssrs2G2  %s:Hs:%sri:r:%s,i5s%s,     %ssBGB9@9XB99r            %s\n", BG_BLACK, FG_WHITE, FG_ORANGE, FG_WHITE, FG_ORANGE, FG_WHITE, FG_L_YELLOW, RESET_C);
    printf("%s          %s:r2ssHGsG2sr:i,:srsrrrSBs  %sr2, ,    , sH,%s,,    %sB@B52G2GX2             %s\n", BG_BLACK, FG_WHITE, FG_ORANGE, FG_WHITE, FG_L_YELLOW, RESET_C);
    printf("%s          %sB5SGssHXs9s9GBM9XHG@MGB9   %s,22ss  ,:222s,%s,:    %sMB@9s9XG@r             %s\n", BG_BLACK, FG_WHITE, FG_ORANGE, FG_WHITE, FG_L_YELLOW, RESET_C);
    printf("%s          %sr9GGXH@X rMB@BMXs2M@BMG,  , %s,s22S2H552s,%s ,::   %ss@MG:9HGM              %s\n", BG_BLACK, FG_WHITE, FG_ORANGE, FG_WHITE, FG_L_YELLOW, RESET_C);
    printf("%s         %ssssS2rXMX      rGrs9@BM:%s:ss%si,,  %s:irrr:,%s ::%ssH9   %ssMG5 Xss9              %s\n", BG_BLACK, FG_WHITE, FG_ORANGE, FG_WHITE, FG_ORANGE, FG_WHITE, FG_ORANGE, FG_L_YELLOW, RESET_C);
    printf("%s        %ss2r,s2rGMG     29r5s,X@@%sGHG5XS%ss,,,,,,,,,:%ss9SGB   %s5GGHiXssS              %s\n", BG_BLACK, FG_WHITE, FG_ORANGE, FG_WHITE, FG_ORANGE, FG_L_YELLOW, RESET_C);
    printf("%s       %s,MGr,,M9MBX    5Sr,is  B@%sBX%srsH%ssHS%sr:::::,s%sXXr%s;22 %s,,is9r9GssM              %s\n", BG_BLACK, FG_WHITE, FG_ORANGE, FG_WHITE, FG_ORANGE, FG_WHITE, FG_ORANGE, FG_WHITE, FG_L_YELLOW, RESET_C);
    printf("%s         %ssGi:9MSMS    @Si ,s: iii%si%ss2@r%s2GGs%srrris%s9G2r%ssM%s9X2sX@Bss@5 Gr             %s\n", BG_BLACK, FG_WHITE, FG_ORANGE, FG_WHITE, FG_ORANGE, FG_WHITE, FG_ORANGE, FG_WHITE, FG_L_YELLOW, RESET_C);
    printf("%s           %sssr::::    iM9ssGG9s   :XBHrr%s9G%srrrsG%s92%s2XS%sSGGGMG5s: G@HsMS            %s\n", BG_BLACK, FG_WHITE, FG_ORANGE, FG_WHITE, FG_ORANGE, FG_WHITE, FG_L_YELLOW, RESET_C);
    printf("%s                        %srX5ss2,     9BMs%sMB%s2rs9%s@B%s@G2            %s:G9sH            %s\n", BG_BLACK, FG_WHITE, FG_ORANGE, FG_WHITE, FG_ORANGE, FG_WHITE, FG_L_YELLOW, RESET_C);
    printf("%s                                      %ssGM%sM9GGM%sB9s                               %s\n", BG_BLACK, FG_ORANGE, FG_WHITE, FG_ORANGE, RESET_C);
    printf("%s                                                                                %s\n", BG_BLACK, RESET_C);
    printf("%s                %sR2-D2                    BB-8             C-3PO                 %s\n", BG_BLACK, FG_WHITE, RESET_C);
}

void info()
{
    printf(RESET_C);
    printf(FG_L_GREEN);

    char buffer1[110], buffer2[110];

    snprintf(
        buffer1,
        110,
        "\n                         TURMA: %sDS1A34%s\tTURNO: %sMATUTINO%s                         \n",
        FG_L_YELLOW,
        FG_L_GREEN,
        FG_L_YELLOW,
        FG_L_GREEN);

    snprintf(
        buffer2,
        111,
        "\n                ALUNO: %sWILLIAM BENJAMIM M SAMPAIO%s / RA: %sD7534B-7%s                \n",
        FG_L_YELLOW,
        FG_L_GREEN,
        FG_L_YELLOW,
        FG_L_GREEN);

    char *info[] = {
        "\n________________________________________________________________________________\n",
        "                          UNIVERSIDADE PAULISTA - UNIP                          \n",
        "\n                          SUP TEC ANÁLISE DES SISTEMAS                          \n",
        buffer1,
        buffer2,
        "                **** Arte gerada com ASCII Generator v2.0.0 ****                \n",
        "                     - http://ascgendotnet.jmsoftware.co.uk                     \n",
        "                        - http://ascgen2.sourceforge.net                        \n",
        "________________________________________________________________________________\n"};

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < strlen(info[i]); j++)
        {
            print_c(info[i][j], DELAY);
        }
    }
}

void sair()
{
    printf(FG_L_RED);
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
    exit(0);
}

void menu()
{
    int option;

    printf(" [1] - RESET\n");
    printf(" [2] - SOBRE\n");
    printf(" [3] - SAIR\n");
    printf("\n Digite o número da opção: ");

    scanf("%d", &option);

    switch (option)
    {
    case 1:
        system(CMD_CLEAR);
        break;
    case 2:
        system(CMD_CLEAR);
        info();
        menu();
        break;
    case 3:
        system(CMD_CLEAR);
        sair();
        break;
    default:
        system(CMD_CLEAR);
        printf("\x1b[31;10m\n * Opção inválida *\n\n\x1b[0m");
    }
}