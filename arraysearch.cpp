//Searching a number in array by using simple linear search method;
//Level Easy
//PS run code for better understanding.
#include<iostream>
#include<stddef.h>
using namespace std;
int main()
{
    int i,a,b,c,k;
   int ar[10]={1,2,3,4,5,6,7,8,9,0};    //Initializing array 
   cout<<"value which you want to search";
   cin>>a;                                //Input value which user want to search
   k=0;
   while(k<10)            //Traversing the loop .
   {
    if (ar[k]==a)                    // Condition for getting the value 
    {
        c=k+1;
        cout<<"Value found in NOde"<<c<<endl; //if value found
        }

        k=k+1;
   }
   if(c==NULL)                 //If value not found
   { 
       cout<<"Value not found SORRY";
   }
   }


