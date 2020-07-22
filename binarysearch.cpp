#include<bits/stdc++.h>
using namespace std;
void B_S(int arr[],int beg, int endd,int value)
{  int mid;

    if (endd>=beg)
    {
        int mid =(beg+endd)/2;
        if (arr[mid]==value)
    {
       cout<<"Value found at"<<mid+1<<endl;

    }
    else if (arr[mid]>value)
    {
        mid=mid-1;
        B_S(arr,beg,mid,value);
    }
    else
    {      mid=mid+1;
        B_S(arr,mid,endd,value);
    }
    }

}
int main()
{
    int arr[14]={1,2,3,4,5,6,33,55,77,99,100,375,780,1000};
    int value;
    cout<<"value to search";
    cin>>value;
B_S(arr,0,13,value);



}
