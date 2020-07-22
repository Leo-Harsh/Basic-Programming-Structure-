#include<bits/stdc++.h>
#define N 100;
using namespace std;

class node{
    node *front_1=NULL;
    node *rear=NULL;
    public:
        int data;
        node * link;
        node * head;
        void insert_1(node*);
        void delete_1();
        void print_1();
        node()
        {     head=NULL;
             data=0;
              link=NULL;


        }
        };
        void node ::insert_1(node* n)
        {  node * ptr=head;
            if (head==NULL)
            {
                head=n;
                n->link=NULL;

            }
            else
            { while(ptr->link!=NULL)
            {
                ptr=ptr->link;
            }
               ptr->link=n;
               n->link=NULL;
               ptr=ptr->link;

            }
            front_1=head;

            rear=ptr;
        }
         void node :: delete_1()
        {  node * ptr=head;
            if (head==NULL)
            {
                cout<<"Nothing to delete "<<endl;

            }
            else
            {  head= head->link;
                cout<<"Value got deleted from front;"<<endl;
            }
            front_1=head;
        }

         void node :: print_1()
         {
             node *ptr=head;
             while(ptr!=NULL)
             {
                 cout<<ptr->data<<endl;
                 ptr=ptr->link;
             }
            cout<<"value for the Front and rear of the queue are"<<front_1->data<<" "<<rear->data;
         }


int main()
{   int a,d;
     node *n1;
     node n2;
     do{     node * n1 =new node;
            cout<<"Enter 1 for insert and enter 2 for delete enter 3 for print and 0 for exit";
            cin>>a;
        switch (a){
               case 1:
                cout<<"Enter the value for insert";
                cin>>d;
                n1->data=d;
                n2.insert_1(n1);
                break;
               case 2:
                cout<<"you choose to delete "<<endl;
                n2.delete_1();
                break;
               case 3:
                cout<<"print the queue value "<<endl;
                n2.print_1();
                break;
               case 0:
                break;
               default:
                cout<<"sorry choose proper option"<<endl;
                system("cls");
            }}while(a!=0);


}
