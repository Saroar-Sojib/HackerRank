#include<bits/stdc++.h>
using namespace std;
int main()
{

  int n;
  cin>>n;
  while(n--)
  {
      int p;
      cin>>p;
      if(p<38)
      {
         cout<<p<<endl;
      }
      else
      {
         int r=p/5;
      int m=(r+1)*5;
      int a=m-p;
      if(a<3)
        cout<<m<<endl;
      else
        cout<<p<<endl;
      }


  }
    return 0;
}
