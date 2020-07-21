#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s1 ;
    string otp;
    string inp="Harsh";
    for(int i=0;i<inp.length();i++)
    {
        s1.push(inp[i]);

    }
    for (int i=0;i<inp.length();i++)
    {
        char c=s1.top();
        otp+=c;
        s1.pop();

    }
    cout<<otp<<endl;

}
