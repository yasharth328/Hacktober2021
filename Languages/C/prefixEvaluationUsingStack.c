#include<stdio.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#define maxsize 20
#define TRUE 1
#define FALSE 0
struct stack
{
    int item[maxsize];
    int top;
};
struct stack s;
void initialize()
{
    s.top=-1;
}
int empty()
{
    if(s.top==-1)
        return TRUE;
    else
        return FALSE;
}
int push(int x)
{
    if(s.top==maxsize-1)
    {
        printf("\nstack overflow");
        return 1;
    }
    else
    {
        s.top++;
        s.item[s.top]=x;
    }
}
int pop()
{
    int y;
    if(empty())
    {
        printf("\nstack underflow");
        return 1;
    }
    else
    {
        y=s.item[s.top];
        s.top--;
        return y;
    }
}
int stacktop()
{
    int b=s.item[s.top];
    return b;
}
int prefixEvaluation(char str[])
{
    int opnd1,opnd2,value,z,i=0;
    char symbol;
    while(str[i]!='\0')
    {
        symbol=str[i];

        if(isdigit(symbol))
            push(symbol-48);
        else
        {
            opnd2=pop();
            opnd1=pop();
            switch(symbol)
            {
                case '+' : value=opnd2+opnd1;
                            break;
                case '-' : value=opnd2-opnd1;
                           break;
                case '*' : value=opnd2*opnd1;
                           break;
                case '/' : value=opnd2/opnd1;
                           break;
                case '^' : value=pow(opnd2,opnd1);
                           break;
            }
            push(value);
        }
        i++;
    }
    z=stacktop();
    return z;
}
void main()
{
    initialize();
    char str[]="-+7*45+20";
    int p=prefixEvaluation(strrev(str));
    printf("The value of prefix expression is %d",p);
}

