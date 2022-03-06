#include<iostream>
using namespace std;

void arr(long long a[],long long n)
{
    int even=1,odd=0;
    while(true)
    {
        while(even<n && a[even]%2==1)
            even+=2;
        
        while(odd<n && a[odd]%2==0)
            odd+=2;

        if(even<n && odd<n)
            swap(a[even],a[odd]);
        else    
            break;
        
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long a[n];
        for(long long i=0;i<n;i++)
            cin>>a[i];
        arr(a,n);

        long long sum=0;
        for(long long i=0;i<n;i++)
            sum+=(a[i]+(i+1))%2;
        cout<<sum<<endl;
    }
    return 0;
}