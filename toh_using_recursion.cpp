#include<bits/stdc++.h>
using namespace std;
toh(int n,char s ,char l,char au)
{
    if(n>=1)
        {


           toh(n-1,s,au,l);
          cout<<s<<"to"<<l<<endl;
          toh(n-1,au,l,s);


        }
}
int main()
{
 int i =3;
 char s='a',l='c',au='b';

 toh(i,s,l,au);
}
