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
    int ar[a];                               //Initializing Array of size n which user going to put.
    cout<<"enter"<<a<<"value";
    for(i=0;i<a;i++)     //taking input from the user by using for loop;                     
    {
        cin>>ar[i];
    }
    cout<<"before Update";       
    for(int b=0;b<a;b++)            //displaying input before any update
    {
        cout<<"LA["<<b<<"]"<<"="<<ar[b]<<endl;
    }

    cout<<"enter the value and position you want to add the array";
     cin>>c>>k;         //taking the value and position to add 
    int j=a;
    a=a+1;
           /*while(j>=k)
                          {                     //can use this syntax also
                              ar[j+1]=a[j];
                              j=j-1;

    }    */
    for(j;j>=k;j--)        //updating the array
{

    ar[j+1]=ar[j];
}

    ar[k]=c;
        cout<<"after Update";
    for(int b=0;b<a;b++)                  //displaying output after updation.
    {
        cout<<"LA["<<b<<"]"<<"="<<ar[b]<<endl;
    }
}
