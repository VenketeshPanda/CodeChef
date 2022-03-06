#include<iostream>
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
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int b[n-1];
        for(int i=0;i<n-1;i++)
            cin>>b[i];
        
        sort(a,a+n);
        sort(b,b+(n-1));

        int m=b[0];
        for (int i = 0; i < n-1; i++)
        if (b[i] > m)
            m = b[i];
        
        int d,min=abs(a[0]-m);
        for(int i=0;i<n;i++)
        {
            d=abs(m-a[i]);
            if(d<min)
                min=d;
                
        }
        cout<<min<<endl;
    }





    return 0;
}