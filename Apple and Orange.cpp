#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  s,t,a,b,m,n;
    cin>>s>>t>>a>>b>>m>>n;

    int count=0,count1=0;
    while(m--)
    {
        long long p;
        cin>>p;
         if ((a+p)>=s && (a+p)<=t)count++;

    }

    while(n--)
    {
        long long q;
        cin>>q;
        if ((b+q)<=t && (b+q)>=s )count1++;

    }
     cout<<count<<endl;
    cout<<count1<<endl;
    return 0;

}
