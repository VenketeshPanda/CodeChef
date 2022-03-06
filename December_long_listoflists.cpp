#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0,max=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n-1;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(a[i]==a[j])
                    c++;
            }
            if(max<c)
                max=c;
        }
        cout<<n-max+1<<endl;
    }
}