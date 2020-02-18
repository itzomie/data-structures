#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==0)
        return 1;
    else if(n>0)
    {
        return(n*fact(n-1));
    }
}
int main()
{
    int num;
    cout<<"\n enter the number :";
    cin>>num;
    cout<<"\n factorial of "<<num<<" is "<<fact(num);
}
