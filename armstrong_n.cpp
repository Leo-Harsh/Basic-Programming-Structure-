//Program for n number of armstrong number;
#include<bits/stdc++.h>
using namespace std;
int order(int a)
{
    int flag=0;
    while(a!=0)
    {    flag++;
        int mod=a%10;
        a=a/10;
    }
    return flag;
}
int power(int flag, int mod)
{  int temp=1;
    while(flag!=0)
    {
        temp= temp*mod;
        flag--;
        power(flag,mod);
    }

    return temp;
}
int main()
{
int a,div,temp,mod,b;
cin>>a;
for(int i=0;i<a;i++)
{   temp=0;
    div=i;
    b=order(i);

    while(div!=0)
    {
       mod=div%10;
       temp=temp + power(b,mod);
       div=div/10;
       }
     if(temp==i)
    {
        cout<<i<<endl;
    }}


}
