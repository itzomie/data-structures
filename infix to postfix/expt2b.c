#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define size 100

char stack[size];
int top=-1;

int main()
{
    char infix[size],postfix[size];
    printf("\n enter the valid infix expression :\n ");
    gets(infix);
    infixtopostfix(infix,postfix);
    printf("\n the postfix expr is : \n");
    puts(postfix);
    return(0);

}

void push(char item)
{
    if(top >= size-1)
        printf("\n stack is full !! ");
    else
    {
        top=top+1;
        stack[top]=item;
    }
    return;
}

char pop(void)
{
    char item;
    if (top < 0)
    {
        printf("\n the stack is empty !!");
        exit(1);
    }
    else
    {
        item = stack[top];
        top=top-1;
        return(item);
    }
}

bool isoperator(char symbol)
{
    if(symbol=='^'||symbol=='*'||symbol=='/'||symbol=='+'||symbol=='-')
        return true;
    else
        return false;
}

int priority(char symbol)
{
    if(symbol=='^')
        return(3);
    else if(symbol=='*'||symbol=='/')
        return(2);
    else if(symbol=='+'||symbol=='-')
        return(1);
    else
        return(0);

}

void infixtopostfix(char infix[],char postfix[])
{
    char token,stacktop;
    int i=0;
    int j=0;
    push('(');
    strcat(infix,")");
    token=infix[i];

    while( infix[i]!='\0')
    {
        if(token=='(')
           push(token);
        else if(isdigit(token)||isalpha(token))
        {
            postfix[j]=token;
            j++;
        }
        else if(isoperator(token))
        {
            stacktop=pop();
            while(isoperator(stacktop)&&priority(stacktop)>=priority(token))
            {
                postfix[j]=stacktop;
                j++;
                stacktop=pop();
            }
            push(stacktop);
            push(token);
        }
        else if(token==')')
        {
            stacktop=pop();
            while(stacktop!='(')
            {
                postfix[j]=stacktop;
                j++;
                stacktop=pop();
            }
        }
        i++;
        token=infix[i];
    }
    postfix[j]='\0';
    return;
}
