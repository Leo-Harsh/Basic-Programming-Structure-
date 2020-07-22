#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    int a[]={2,4,77,8,11,2,33,8};
    for (i=0;i<7;i++)
    {
        for (j=i+1;j<8;j++)
        {
            if (a[j]<a[i])
            {
                a[j]=a[j]*a[i];
                a[i]=a[j]/a[i];
                a[j]=a[j]/a[i];
            }
        }
        }
        cout<<"New array as follow";
        for(int i=0;i<8;i++)
        {
            cout<<a[i]<<endl;

        }
}
