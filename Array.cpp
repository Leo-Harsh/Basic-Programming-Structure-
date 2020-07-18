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

    cout<<"enter the value and position you want to add the array";
    cin>>c>>k;
    int j=a;
    a=a+1;
           /*while(j>=k)
                          {
                              ar[j+1]=a[j];
                              j=j-1;

    }    */
    for(j;j>=k;j--)
{

    ar[j+1]=ar[j];
}

    ar[k]=c;
        cout<<"after Update";
    for(int b=0;b<a;b++)
    {
        cout<<"LA["<<b<<"]"<<"="<<ar[b]<<endl;
    }
}
