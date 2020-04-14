#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string p,q;
    p+=s[0];
    p+=s[1];
    int n=s.size();
    q+=s[n-2];
    q+=s[n-1];
     stringstream ss(p);
     int x;
     ss >> x;
    //cout<<x<<endl;
    if(x<12 && q=="PM")
    {
        int so=x+12;
        cout<<so;
        for(int i=2;i<n-2;i++)
            cout<<s[i];
    }
    else if(x==12 && q=="PM")
    {
        for(int i=0;i<n-2;i++)
            cout<<s[i];
    }
    else if(x>=1 && x<=11 && q=="AM")
    {
        for(int i=0;i<n-2;i++)
            cout<<s[i];
    }
    else if(x==12 && q=="AM")
    {
        cout<<"00";
        for(int i=2;i<n-2;i++)
            cout<<s[i];
    }

    return 0;

}
