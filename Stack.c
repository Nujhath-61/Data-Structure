#include<stdio.h>
int t = -1;
int stack[1000];
int push(int data)
{
    t++;
    stack[t]=data;
}
void pop ()
{
    if(t!= -1)
    {
        t--;
    }
}
void top()
{
    if(t!=-1 )
    {

    printf("top element: %d\n",stack[t]);
    }
}
void isEmpty ()
{
    if(top != -1)
    {
        printf("True\n");
    }
    else{
       printf("False\n");
    }
}
int main ()
{ int c;
    while( c != 5)
    {

    printf("Enter your choice: 1.push\n2.pop\n3.top\n4.empty or not\n5.Exit");
    scanf("%d",&c);
    if(c==1)
    {
        int d;
        scanf("%d",&d);
        push(d);
    }
    else if(c==2)
    {
        pop();
    }
    else if(c==3)
    {
        top();

    }
    else if(c==4)
    {
        isEmpty();
    }
    }
}
