#include<bits/stdc++.h>
using namespace std;
int sum(int a,int b,int c,int d)
{
    int p=max(a,b);
    int q=max(c,d);
    int n=max(p,q);
    return n;
}
int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<sum(a,b,c,d)<<endl;

    return 0;
}
