#include<bits\stdc++.h>
using namespace std;
class node{
    int top;
    public:
    int data;
    node * link,*ptr;
    node *head=NULL;
    push  ( node *x);
    pop (node *x);
    void print();
   node()
   {    top=0;
        data=0;
        link=NULL;
    }
    void top1();
};
 node :: push(node *x)

{ top++;
    if(head==NULL)
    {
        head=x;
        x->link=NULL;
        cout<<"value is pushed"<<endl;
    }
    else
    { x->link=head;
       head=x;
       cout<<"value is pushed"<<endl;
    }
}
 node :: pop(node *x)
{
    if (head==NULL)
    {
        cout<<"No value is present";
        }
        else{
                node *ptr=head;
        for (int i=0;i<1;i++)
                {
                    ptr=ptr->link;
                }
            head->ptr=NULL;
            head=ptr;
            cout<<"Value is popeped"<<endl;
            top--;

        }

}
void node :: top1()
{
    cout<<top<<endl;
}
int main()
{
int a,b,i;

node n1;
do
{node*n2=new node;
    cout<<"press 0 to exit"<<endl;
   cout<<"Press 1 for POP press 2 for push and press 3 for know the value of top"<<endl;
    cin>>a;
    switch (a)
{
case 0:
    break;
case 1:
    cout<<"Enter the value for pop";
    cin>>b;
n2->data=b;
n1.pop(n2);

   break;
case 2:
    cout<<"Enter the value for Push";
    cin>>b;
   n2->data=b;
n1.push(n2);
    break;
    case 3:
n1.top1();
    break;
    case 4:
        n1.print();
        break;

} } while(a!=0);
n1.print();
}
void node :: print()
{ if (head==NULL)
{
    cout<<"no node present";;
} else{
    node *temp=head;
  while(temp!=NULL)
  {
      cout<<"("<<temp->data<<"->)...";
      temp=temp->link;
  }
}}
