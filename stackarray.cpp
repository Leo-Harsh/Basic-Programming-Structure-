#include<bits\stdc++.h>
#define max 10000
using namespace std;
class stack1{
int top;
public:
     int a[max];
    void push(int);
    void pop(int);
    int top1();
    void is_list_is_empty();
};

void stack1 :: push(int x)
{
    if (top>=max)
    {
        cout<<"overflow"<<endl;
    }
    else
    {
        top++;
        a[top]=x;
        cout<<x<<"pushed"<<endl;
    }
}
void stack1 :: pop(int x)
{
    if(top<0)
    {
        cout<<"Stack is empty";

    }
    else
    {
        int x=a[top];
        top--;
        cout<<x<<"is pop out"<<endl;
    }
}
int stack1 ::  top1()
{
    return top;
}
void stack1 :: is_list_is_empty()
{
    if(top< 0)
    {
        cout<<" true";
    }
    else {
        cout<<" false"<<endl;
    }
}
int main()
{ int a;
    stack1 s;
    s.is_list_is_empty();
    s.push(30);
    s.push(6);
    s.push(7);
    s.pop(7);
    a=s.top1();
    cout<<a<<endl;

}
