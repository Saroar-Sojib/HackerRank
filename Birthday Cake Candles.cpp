#include<bits/stdc++.h>
using namespace std;

 int main()
  {
      long long n;
      cin>>n;
      long long arr[n];
      for(int i=0;i<n;i++)
      {
           cin>>arr[i];

      }
      sort(arr,arr+n);
      int c=0;
      for(int i=0;i<n;i++)
      {
          //cout<<arr[i]<<" ";
          if(arr[n-1]==arr[i])
            c++;
      }
      if(c>0)
        cout<<c<<endl;
      else
        cout<<0<<endl;
    return 0;

 }
