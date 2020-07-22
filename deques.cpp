#include<bits/stdc++.h>
using namespace std;
#define N 10
 int front1=-1;
  int queue_1[N];
 int rear=-1;

  insert_1(int n )
{
    if ((front1==0) && (rear==N-1)|| (front1==rear+1))
    {
        cout<<"Queue is full Sorry"<<endl;
    }
    else if((front1==-1)&& (rear ==-1))
    {
         front1=0;
        rear=0;
        queue_1[front1]=n;

    }
    else {
       if (rear==N)
    {    rear=0;
        queue_1[rear]=n;

    }
    else {
        rear++;
        queue_1[rear]=n;

    }
    }
}
insert_2(int n )
{       if ((front1==0) )
    {
        queue_1[front1]=n;
    }
    else if((front1==-1)&& (rear ==-1))
    {
         front1=0;
        rear=0;
        queue_1[front1]=n;

    }

    else {
        front1--;
        queue_1[front1]=n;
        cout<<"Value inserted at the front";

    }
    }

delete2()
{
    if ((front1==-1 && rear==-1))
    {
        cout<<"Queue is empty Sorry Please add something to delete"<<endl;
    }
    else if (front1==rear)
        {  queue_1[front1]=NULL;
              rear=-1;
        front1=-1;
        }
    else {   queue_1[rear]=NULL;
            cout<<"Value is deleted from other side of queue"<<endl;
              rear--;
}}
delete1()
{
    if ((front1==-1 && rear==-1))
    {
        cout<<"Queue is empty Sorry Please add something to delete"<<endl;
    }
    else if (front1==rear)
    {    queue_1[front1]=NULL;
         rear=-1;
        front1=-1;

    }
    else {    queue_1[front1]=NULL;
            cout<<"Value is deleted"<<endl;
              front1++;
}}

print()
{
    for(int i=0;i<=N;i++)
    {
        cout<<queue_1[i]<<endl;
    }
    cout<<"Front of queue is"<<front1<<"  "<<queue_1[front1]<<"rear of queue is "<<rear<<" "<<queue_1[rear]<<endl;
}
int main()
{ int a,d;
    do{
            cout<<"Enter 1 for insert and enter 2 for delete enter 3 for print 4 for delete from other side 5 for insert from another side and 0 for exit";
            cin>>a;
        switch (a){
               case 1:
                cout<<"Enter the value for insert";
                cin>>d;

                insert_1(d);
                break;
               case 2:
                cout<<"you choose to delete "<<endl;
                delete1();
                break;
               case 3:
                cout<<"print the queue value "<<endl;
                print();
                break;
               case 4:
                cout<<"delete from other end known as (input restricted deques) "<<endl;
                delete2();
                break;
               case 5:
                cout<<"inserted from other end known as (output restricted deques) "<<endl;
                cin>>d;
                insert_2(d);
                break;
               case 0:
               break;
               default:
                system("cls");
            }}while(a!=0);


}


