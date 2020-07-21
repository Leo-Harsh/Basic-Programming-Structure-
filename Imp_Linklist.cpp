#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node *link;

node()
{
   link=NULL;
   data=0;
}
node( int d) {
    data = d;
  }
};
class link_list{
public:
    node *head;
    link_list()
    {
        head=NULL;

    }
    link_list(node * n) {
    head = n;
               }
void append(node *d)
{
    if(head==NULL)
    {
        head=d;
        d->link=NULL;


        cout<<"Append Success"<<endl;
        }else{
        node *ptr=head;

          while(ptr->link!=NULL)
          {
              ptr=ptr->link;
          }
          ptr->link=d;
          d->link=NULL;

              cout<<"append Success"<<endl;
        }
    }
void print()
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
void preappend(node *d)
{   node *ptr=head;
    if(ptr==NULL)
    {
        head=d;
        cout<<"Preaddpend"<<endl;
    }
    else{
         d->link=ptr;
         head=d;
         cout<<"preappend"<<endl;
        }
}
void addnode(int k,node *d)
{
    if(head==NULL)
{
    head=d;
    cout<<"node is appended at starting";
}
    else
    {  node *ptr=head;
        for(int i=0;i<k;i++)
    {
           ptr=ptr->link;
    }
      d->link=ptr->link;
      ptr->link=d;
      cout<<"node is added after node"<<k<<endl;
}}
void delete_node(int k)
{
    if (head==NULL)
    {
        cout<<"No node present to delete"<<endl;
    }
    else {
           node *ptr1=head;
           node *ptr2=head;
           for(int i=1;i<k;i++)
           {
               ptr1=ptr1->link;
           }
           for(int i=0;i<k;i++)
           {
               ptr2=ptr2->link;
           }
           ptr1->link=ptr2->link;
           ptr2->link=NULL;
        cout<<"Node deleted"<<endl;
    }
}
void update_node(int k,int d)
{
    if(head==NULL)
{

    cout<<"list is empty";
}
    else
    {  node *ptr=head;
        for(int i=0;i<k;i++)
    {
           ptr=ptr->link;
    }
     ptr->data=d;
      cout<<"node is updated"<<k<<endl;
}}

};

int main()

  { link_list s;
    int l,d,k;

do{    cout<<"choose the process"<<endl;
    cout<<"1 for Append"<<endl;
    cout<<"2 for preappend"<<endl;
    cout<<"3 for add node at your desire location in link list"<<endl;
    cout<<"4 for delete node"<<endl;
    cout<<"7 for print"<<endl;
    cout<<"0 for exit";
    cin>>l;


 node *n1=new node();
    switch(l){
    case 0:
        cout<<"Exit"<<endl;
        break;
        case 1:
      cout<<"enter the value for append"<<endl;;
      cin>>d;
      n1->data=d;
      s.append(n1);
      break;
        case 2:

            cout<<"enter the value for preappend"<<endl;
            cin>>d;
            n1->data=d;
            s.preappend(n1);
            break;
        case 3:
                cout<<"enter the node value and node where you want to add the given node";
                cin>>d;

                cin>>k;
                n1->data=d;
                s.addnode(k,n1);
                break;
        case 4:
            cout<<"Enter the node number which you want to delete"<<endl;

            cin>>k;
            s.delete_node(k);
            break;
        case 5:
            cout<<"enter the value and node of which you want to update the value";
            cin>>k>>d;
            s.update_node(k,d);

        case 7:
            cout<<"the link list is created as"<<endl;
            s.print();
            break;
            default: cout<<"enter appropriate value";
            system("cls");
            break;
  }} while (l!=0);

}



