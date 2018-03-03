#define N7 9
#define M7 28
#define SYM_WALL '#'
#define SYM_GATE ' '
#define SYM_TR 'x'

void place(int x, int y);

int isOutBord(int x, int y);
int isFreePass(int x, int y);
void printMatrix(void);