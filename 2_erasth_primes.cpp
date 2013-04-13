#include<iostream>
using namespace std;
int primes[3500],l=0;

bool isPrime(int i)
{
    for(int j=0;j<l;j++)
    {
        if(i%primes[j]==0)
            return false;
    }
    return true;
}
int main()
{
    int i,k=2,temp;
    bool a[32000];
    for(i=0;i<32000;i++)
        a[i]=true;    
    while(k*k<32000)
    {
        temp=1;
        while(temp*k<32000)
        {
            a[temp*k]=false;
            temp++;
        }
        primes[l++]=k;
        while(a[k]==false)
        {
            k++;
        }
    }
    primes[l++]=k;
    while(k<32000)
    {
        if(a[k]==true)
            primes[l++]=k;
        k++;
    }
    /*for(i=0;i<50;i++)
        cout<<primes[i]<<"\n";*/
    //cout<<"\n"<<float(end-start)<<"\n\n\n";
    int N,n,m;
    cin>>N;
    while(N--)
    {
        cin>>m>>n;
        if(m==1)
            m=2;
        for(int r=m;r<=n;r++)
        {
            if(isPrime(r))
                cout<<r<<"\n";
        }
        cout<<"\n";      
    }
    return 0;
}
        
        
    
        
