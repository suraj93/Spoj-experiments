#include<iostream>

using namespace std;

int main()
{
    int N,n,z;
    cin>>N;
    while(N--)
    {
        z=0;
        cin>>n;
        while(n!=0)
        {
            n/=5;
            z+=n;
        }
        cout<<z<<"\n";
    }
    return 0;
}
