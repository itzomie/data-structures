#include<stdio.h>
#include<math.h>
#include<ctype.h>
#define stacksize 100
#define exprsize 100

int stack[stacksize];
int top=-1;
void push(int);
int pop(void);
int evaluate_postfix(char[]);
int main()
{

    char postexpr[exprsize];
    int result;
    printf("\n Enter the valid postfix expression : \n ");
    gets(postexpr);
    result=evaluate_postfix(postexpr);
    printf("\n\n the evaluation of post fix expression = %d",result);
    return 0;
}

void push(int item)
{
    if(top==stacksize-1)
        printf("\n stack overflow!!!");
    else
    {
        top++;
        stack[top]=item;
    }
}

int pop(void)
{
    int item;
    if(top==-1)
    {
        printf("\n stack is empty !!");
        exit(0);
    }
    else
    {
        item=stack[top];
        top--;
    }
    return(item);
}
int evaluate_postfix(char postexpr[])
{

    char ch;
    int op1,op2,i,res;
    for(i=0;postexpr[i]!='\0';i++)
    {
        ch=postexpr[i];
        if(isdigit(ch))
            push(ch-'0');
        else if(ch=='+'||ch=='-'||ch=='*'||ch=='/')
        {
            op2=pop();
            op1=pop();
            switch(ch)
            {
                case '+':res=op2+op1;
                break;
                case '-':res=op1-op2;
                break;
                case '*':res=op2*op1;
                break;
                case '/':res=op1/op2;
                break;
            }
            push(res);
        }

    }
    return(res);

}
