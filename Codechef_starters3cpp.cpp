#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n,k;
         cin>>n>>k;
         
         int a[n];
         for(int i=0;i<n;i++)
            cin>>a[i];
        
        sort(a,a+n);

        for(int i=0;i<k;i++)
        {
            if(a[i]<0)
            {
                a[i]=a[i]*(-1);
            }
            else
                break;
        }

        long long s=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]>0)
            {
                s=s+a[i];
            }
        }
        cout<<s<<endl;
     }
        
 }