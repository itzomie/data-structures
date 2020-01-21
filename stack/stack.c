#include<stdio.h>
#define MAX 5
int stack[MAX];

int top=-1;
void push();
void pop();
void display();

main()
{

    int ch;
    do
    {

    printf("\n **** Stack Operation****\n");
    printf("\n1. push \n2. pop \n 3.display \n4.exit \n");
    printf("\n enter your choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: push();
        break;
        case 2:pop();
        break;
        case 3:display();
        break;
        case 4: printf("Exit point");
        break;
        default : printf("Wrong Choice");
    }
    }while(ch!=4);

}
void push()
{
    int val;
    if(top==MAX-1)
        printf("\n the stack is full!! Overflow!!");
    else
    {
        printf("\n you have choosen push ");
        printf("\n enter the number to be pushed");
        scanf("%d",&val);
        top=top+1;
        stack[top]=val;
    }
}
void pop()
{
    if(top==-1)
        printf("\n the stack is empty!! Underflow !!");
    else
    {
        printf("\n you have chosen pop ");
        printf("\n the element poped is : %d",stack[top]);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        printf("\n the stack is empty!! Underflow !!");
    else
    {
        printf("\n the stack status is :");
        for(i=top;i>=0;i--)
            printf("\n \t %d",stack[i]);
    }
}
