#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<long long>so;
    int n;
    cin>>n;
    while(n--)
    {
        int p;
        cin>>p;
        so.push_back(p);

    }
    long long sum=0;
    for(int i=0;i<so.size();i++)
    {
        sum+=so[i];
    }
    cout<<sum<<endl;

   return 0;

}
