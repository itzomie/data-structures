#include<iostream>
using namespace std;
int fib(int n)
{
    if(n==0 || n==1)
        return n;
    else if(n>1)
    {
        return(fib(n-1)+fib(n-2));
    }
}

int main()
{
    int num,i;
    cout<<"\n enter the number ";
    cin>>num;
    cout<<"the series is";
    for(i=0;i<num;i++)
    {
        cout<<" "<<fib(i);
    }
}
