#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,sum=0;
        cin>>n>>a>>b;
        char s[n+1];
        for(int i=0;i<n;i++)
            cin>>s[i];
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
                sum+=a;
            if(s[i]=='1')
                sum+=b;
        }
        cout<<sum<<endl;
    }

    return 0;
}