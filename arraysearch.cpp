#include<iostream>
#include<stddef.h>
using namespace std;
int main()
{
    int i,a,b,c,k;
   int ar[10]={1,2,3,4,5,6,7,8,9,0};
   cout<<"value which you want to search";
   cin>>a;
   k=0;
   while(k<10)
   {
    if (ar[k]==a)
    {
        c=k+1;
        }

        k=k+1;
   }
   if(c==NULL)
   {
       cout<<"Value not found SORRY";
   }
   }


