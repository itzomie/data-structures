/*this program is written by Omkar Sulakhe 
the following program demonstrates the use of arrays and passing them as parameter tgo functions.
note: it is better to declare array and its size n as global*/

#include<stdio.h>
void insert();
void deleten();
void search();
int i;
int main()
{
   int choice,n;
   int a[20];
    printf("\n Enter the number of elements : ");
    scanf("%d",&n);
    printf("\n Enter the elements : ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        while(1)
        {

    printf("\n Enter the choice:\n 1-insert \n 2-delete \n 3-search \n ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: printf("\n you have chosen to insert an element ");
                insert(a,n);
                n++;
                break;
        case 2: printf("\n you have chosen delete an element");
                deleten(a,n);
                n--;
                break;
        case 3: printf("\n you have chosen search an element");
                search(a,n);
                break;

        default: printf("\n invalid choice");
    }
        }
}

void insert(int a[],int n)
{
    int pos,val;
    printf("\n enter the position where u want to insert :");
    scanf("%d",&pos);
    printf("\n enter the value for element : ");
    scanf("%d",&val);

    for(i=n;i>=pos;i--)
        a[i]= a[i-1];

    a[pos-1]= val;
    n++;

    printf(" \n resultant array is : ");
    for(i=0;i<n;i++)
        printf("%d ", a[i]);
    printf("\n");
    return ;
}

void deleten( int a[],int n)
{
    int index,val;
    printf("\n Enter the position where u want to delete : ");
    scanf("%d",&index);
    if(index<n&& index>=0)
    {
        printf("\n before deletion \n");
        for(i=0;i<n;i++)
            printf("%d ",a[i]);
        for(i=index-1;i<n-1;i++)
        {
            a[i]=a[i+1];
        }
        n--;
        printf("\n after deletion \n");
        for(i=0;i<n;i++)
            printf("%d ",a[i]);
    }
    else
        printf("\n enter the position in range");
    return;

}

void search(int a[],int n)
{
    int key,z,pos;
    z=-1;
    printf("\n Enter the element to be searched :");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            z=1;
            pos=i;
        }

    }
    if(z=1)
        printf("the element is found at position %d ",pos);
    else
            printf("the element does not exist ");
}
