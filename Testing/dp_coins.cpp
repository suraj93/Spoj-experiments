#include<iostream>
#include<vector>

using namespace std;

#define INF 100000000

int main()
{
    vector<int> v,min;
    int i,N,j,temp;
    cout<<"Enter number of coins\n";
    cin>>N;
    cout<<"Enter coin denominations \n";
    for(i=0;i<N;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    min.push_back(0);
    for(i=1;i<50;i++)
    {
        min.push_back(INF);
        for(j=0;j<N;j++)
        {
            if((v[j]<=i)&&(min[i-v[j]]+1<min[i]))
                min[i]=min[i-v[j]]+1;
        }
    }
    for(i=1;i<min.size();i++)
    {
        cout<<i<<" : "<<min[i]<<"\n";
    }
    return 0;
}
            
