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
    cout<<"value which youu want to update and at what place";
    cin>>k>>c;
    ar[c]=k;
    cout<<"After Update";
    for(int b=0;b<a;b++)
    {
        cout<<"LA["<<b<<"]"<<"="<<ar[b]<<endl;
    }

}
