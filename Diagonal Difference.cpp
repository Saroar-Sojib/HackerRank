#include<bits/stdc++.h>
using namespace std;

 int main()
  {
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++)
{
   for(int j=0;j<n;j++)
    cin>>arr[i][j];
}
int n1=0,n2=0;
for(int i=0;i<n;i++)
{
    n1+=arr[i][i];
    n2+=arr[i][n-i-1];
}
if(n1<=n2)
    cout<<n2-n1<<endl;
else
    cout<<n1-n2<<endl;
   return 0;

}
