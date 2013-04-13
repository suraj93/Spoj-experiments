// Not AC, TLE


#include<iostream>
#include<vector>

using namespace std;

vector<int> g,mg;

int main()
{
    int N,gs,mgs,i,j,temp,a,b;
    cin>>N;
    while(N--)
    {
        g.clear();
        mg.clear();
        cin>>gs>>mgs;
        for(i=0;i<gs;i++)
        {
            cin>>temp;
            g.push_back(temp);
        }
        for(i=0;i<mgs;i++)
        {
            cin>>temp;
            mg.push_back(temp);
        }
        a=g[gs-1];    
        for(i=0;i<gs-1;i++)
        {
            if(g[i]>a)
                a=g[i];
        }
        b=mg[mgs-1];
        for(i=0;i<mgs-1;i++)
        {
            if(mg[i]>b)
                b=mg[i];
        }
        
        if(a>=b)
            cout<<"Godzilla\n";
        else if(a<b)
            cout<<"MechaGodzilla\n";
        else    
            cout<<"uncertain\n";
    }
    return 0;
}
