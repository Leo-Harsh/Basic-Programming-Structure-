#include<bits/stdc++.h>
using namespace std;
int main()
{
int k,temp,j;
int arr[5]={22,1,33,111,4};
for(k=1;k<10;k++)
{ temp=a[k];
  j=k-1;
  while(j>=0 &&temp<=a[j])
  {   a[j+1]=a[j];
        j--;
      }
    a[j+1]=temp;
  }
  for(k=0;k<=5;k++)
  { cout<<a[k]<<endl;
  }


}
