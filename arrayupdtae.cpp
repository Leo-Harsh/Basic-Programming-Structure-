//Program for add a node in array at any position 
//(Level Easy)
//PS:: Run program first for better understanding.
#include<iostream>
using namespace std;
int main()
{
    int i,a,b,c,k;
    cout<< "enter the size of array";
    cin>>a;
    int ar[a];
    cout<<"enter"<<a<<"value";
    for(i=0;i<a;i++)    //Taking Input from user to create an array;
    {
        cin>>ar[i];
    }
    cout<<"before Update";    //Printing Value before update
    for(int b=0;b<a;b++)
    {
        cout<<"LA["<<b<<"]"<<"="<<ar[b]<<endl;
    }
    cout<<"value which youu want to update and at what place"; 
    cin>>k>>c;                                 //Input value and node
    ar[c]=k;                                   //Update
    cout<<"After Update";
    for(int b=0;b<a;b++)             //Printing Value After Update;
    {
        cout<<"LA["<<b<<"]"<<"="<<ar[b]<<endl;
    }

}
