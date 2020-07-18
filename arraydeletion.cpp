#include<iostream>
using namespace std;
int main()
{
    int i,a,b,c,k;
    cout<< "enter the size of array";
    cin>>a;
    int ar[a];
    cout<<"enter"<<a<<"value";
    for(i=0;i<a;i++)
    {
        cin>>ar[i];
    }
    cout<<"before Update";
    for(int b=0;b<a;b++)
    {
        cout<<"LA["<<b<<"]"<<"="<<ar[b]<<endl;
    }

    cout<<"enter the position which you want to delete the array";
    cin>>k;

    a=a-1;

    for(k;a>k;k++)
    {
        ar[k]=ar[k+1];

    }
     cout<<"after Update";
    for(int b=0;b<a;b++)
    {
        cout<<"LA["<<b<<"]"<<"="<<ar[b]<<endl;
    }



}
