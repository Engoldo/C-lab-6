int eval(char *buf);// function -. string in buf -�������, ����������� ������, ������������ � buf
char partition(char *buf, char *expr1, char *expr2);
void cleangap(char *p);

char *int2str(char *buf, int value);// recursia

void inttochar(char *in, int value);// help from int to char*

int isnumb(char *arr);

int makeexpr(char op, char *expr1, char *expr2);

char *eval_recur(char *buf);// -�������, ����������� ������, ������������ � buf
char* checkexpr(char*in, int *nomERROR);//first check input expr

char* addExpr(char *p, int bracket);// if need add expr2;
