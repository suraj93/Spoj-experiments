#include<iostream>
using namespace std;
int main()
{
int N,s=0,t;
cin>>N;
while(N--)
{
cin>>t;
if(t>0)
s+=t;
}
cout<<s;
return 0;
}   
