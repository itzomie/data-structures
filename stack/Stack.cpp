#include<iostream>
#define max 5

using namespace std;
class stack
{

    int arr[max];
    int i;
    int top=-1;
    public:
    void push()
    {
        int val;
        cout<<"\n you have chosen push ";
        if(top==max-1)
            cout<<"\n\n the stack is full";
        else
        {
            cout<<"\n\n enter the element to be pushed : ";
            cin>>val;
            top=top+1;
            arr[top]=val;
        }
    }
    void pop()
    {
        if(top==-1)
            cout<<"\n stack is empty";
        else
        {
            cout<<"\n \n you have chosen pop";
            cout<<"\n\n  the element popped is "<<arr[top];
            top=top-1;
        }
    }
    void display()
    {
        cout<<"\n the stack status is :";
        cout<<"\n";
        for(i=top;i>=0;i--)
        {
            cout<<"\n"<<arr[i];
        }
        cout<<"\n";

    }
};

int main()
{
    stack stk;
 int ch;
    do
    {

    cout<<"\n\n  **** Stack Operation****\n\n";
    cout<<"\n1.push \n2.pop \n3.display \n4.exit \n";
    cout<<"\n enter your choice : ";
    cin>>ch;
    switch(ch)
    {
        case 1: stk.push();
        break;
        case 2:stk.pop();
        break;
        case 3:stk.display();
        break;
        case 4: cout<<"Exit point";
        break;
        default : cout<<"Wrong Choice";
    }
    }while(ch!=4);

}
