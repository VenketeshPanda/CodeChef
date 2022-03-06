#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        long long s;
        cin>>n>>k>>s;
        s=s-(n*n);
        cout<<s/(k-1)<<endl;
    }
}