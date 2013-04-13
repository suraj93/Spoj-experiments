#include<iostream>
#include<fstream>
using namespace std;
int primes[3500],l=0;

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
    ofstream MyFile;
    MyFile.open ("2_primedump.csv", ios::out | ios::ate | ios::app | ios::binary) ;
    for(i=0;i<l;i++)
    {    cout<<primes[i]<<"\n";
        MyFile<<primes[i]<<',';
    }//cout<<"\n"<<float(end-start)<<"\n\n\n
    return 0;
}       
        
    
        
