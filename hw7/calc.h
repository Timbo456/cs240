#define NUMBER '0'


void push(double);
int s = 0;
int p = 0;
double val[NUMBER];

void push(double)
{
    if(s < NUMBER)
        val[s++]=s;
   
}
double pop(void)
{
    if(s>0)
        return val[--p];
    else
    {
        return 0.0;
    }
}

int getop(char[]);

int getch(void);
void ungetch(int);
