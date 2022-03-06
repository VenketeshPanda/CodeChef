#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,l;
        cin>>n>>k>>l;
        int a[n],m,frnd;
        for(int i=0;i<n;i++)
            cin>>a[i];
        if(k<=0)
        {
            cout<<"No"<<endl;
            break;
        }
        else
        {
            frnd=a[n-1];
            sort(a,a+n);
            m=a[n-1];
            int sp=(l*frnd);
            if(sp>m)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
    return 0;
}