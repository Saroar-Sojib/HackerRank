#include<bits/stdc++.h>
using namespace std;

 int main()
  {
      int n;

      cin>>n;
      int arr[n];
       float a=0,b=0,c=0,d=n;
      for(int i=0;i<n;i++)
      {
          cin>>arr[i];
      }
      for(int i=0;i<n;i++)
      {
          if(arr[i]<0)
            a++;
          else if(arr[i]>0)
            b++;
          else
            c++;
      }
      printf("%.6f\n",b/d);
       printf("%.6f\n",a/d);
        printf("%.6f",c/d);

    return 0;

 }
