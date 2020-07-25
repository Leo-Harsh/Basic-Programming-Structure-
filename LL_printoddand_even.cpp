#include<bits\stdc++.h>
using namespace std;
class node{
    node *head;
    public:
    node (){
        head=NULL;
    }
    int data;
    node *link;
    void print_even();
    void print_odd();
    void insert_1(node *);
};
void node :: insert_1(node *n1)
 {  node *ptr=head;
    if (head==NULL)
    {
        head=n1;
        n1->link=NULL;

    }
    else {
        while(ptr->link!=NULL)
        {
            ptr=ptr->link;
        }
        ptr->link=n1;
        n1->link=NULL;

         }
}
void node:: print_even()
{  node * ptr=head;
    if (head==NULL)
    {
        cout<<"No data to print!!";
    }
    else
    {
        while (ptr!=NULL)
        {
            if ((ptr->data%2)==0)
            {
                cout<<ptr->data;
            }
            ptr=ptr->link;


        }
    }


}
void node:: print_odd()
{  node * ptr=head;
    if (head==NULL)
    {
        cout<<"No data to print!!";
    }
    else
    {
        while (ptr!=NULL)
        {
            if ((ptr->data%2)!=0)
            {
                cout<<ptr->data;
            }
            ptr=ptr->link;


        }
    }


}


int main() {
    int n,i,a,d;
cout<<"Enter Number of query"<<endl;
    cin>>n;

    for (i=0;i<n;i++)
    {  cout<<"Enter Number of node u want to add in link list"<<endl;
           node n2;
        cin>>a;
        for (int j=0;j<a;j++)
        {
            node *n1= new node();
            cin>>d;
            n1->data=d;
            n2.insert_1(n1);
             }

     n2.print_even();
     n2.print_odd();
     cout<<endl;
    }

    }


