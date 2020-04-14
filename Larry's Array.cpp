#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int so[n];
        for(int i=0;i<n;i++)cin>>so[i];
        /*
          vector<int>so;

        while(n--)
        {
            int p;
            cin>>p;
            so.push_back(p);
        }
        */
        int sum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
                if(so[j]<so[i])
                    sum++;
        }
       
       if(sum%2==0)cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;
    }
    return 0;
}
