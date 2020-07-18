//Program for deleting the array node at any position by taking input from user.
//level Easy
//PS:: Run the code first for better understanding.
#include<iostream>
using namespace std;
int main()
{
    int i,a,b,c,k;
    cout<< "enter the size of array"; 
    cin>>a;
    int ar[a];
    cout<<"enter"<<a<<"value";
    for(i=0;i<a;i++)            //Creating a array.
    {
        cin>>ar[i];
    }
    cout<<"before Update";
    for(int b=0;b<a;b++)        //Printing a Array
    {
        cout<<"LA["<<b<<"]"<<"="<<ar[b]<<endl;
    }

    cout<<"enter the position which you want to delete the array";
    cin>>k;

    a=a-1;                  // Subtract the value by one because we are deleting one node.

    for(k;a>k;k++)          //traversing the array
    {
        ar[k]=ar[k+1];        //shifting the node 

    }
     cout<<"after Update";   //printing the array after deletion
    for(int b=0;b<a;b++)
    {
        cout<<"LA["<<b<<"]"<<"="<<ar[b]<<endl;
    }



}
