#ifdef _WIN32
#define CMD_CLEAR "cls"
#elif linux
#define CMD_CLEAR "clear"
#endif

#define DELAY 800

/** CORES ANSI */
#define FG_RED "\x1b[31m"
#define FG_GREEN "\x1b[32m"
#define FG_YELLOW "\x1b[33m"
#define FG_BLUE "\x1b[34m"
#define FG_MAGENTA "\x1b[35m"
#define FG_WHITE "\x1b[37m"
#define FG_ORANGE "\x1b[38;5;202m"
#define FG_L_RED "\x1b[31;1m"
#define FG_L_GREEN "\x1b[32;1m"
#define FG_L_YELLOW "\x1b[33;1m"
#define FG_L_MAGENTA "\x1b[35;1m"
#define FG_L_BLUE "\x1b[36;1m"
#define FG_L_WHITE "\x1b[37;1m"
#define BG_BLACK "\x1b[40m"
#define BG_RED "\x1b[41m"
#define RESET_C "\x1b[0m"

void print_c(char, float);

void unip();
void starWars();
void starWarsRobots();
void info();
void sair();
void menu();
