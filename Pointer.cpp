#include<bits/stdc++.h>
using namespace std;
int sum(int a,int b)
{
    int s=a+b;
    return s;
}
int main() {
    int a,b;
    cin>>a>>b;
    cout<<sum(a,b)<<endl;
    if(a>b)
    {
      cout<<a-b<<endl;
    }

    else
    {
        cout<<b-a<<endl;
    }

    return 0;
}
