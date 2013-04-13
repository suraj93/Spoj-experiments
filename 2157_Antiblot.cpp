#include<iostream>
#include<cstring>
#include<cstdlib>

using namespace std;

int main()
{
    int N,x,flag1,flag2;
    string a,b,c;
    char ch,d;
    cin>>N;
    while(N--)
    {
        flag1=0;
        flag2=0;
        cin>>a>>ch>>b>>d>>c;
        //cout<<a<<" + "<<b<<" = "<<c<<"\n";
        flag1=b.find("ach");
        flag2=a.find("ach");
        //cout<<"\n\n"<<flag<<"\n\n";
        if(flag1>0)
        {
            x=atoi(c.c_str())-atoi(a.c_str());
            cout<<a<<" + "<<x<<" = "<<c<<"\n";
        }
        else if(flag2>0)
        {
            x=atoi(c.c_str())-atoi(b.c_str());  
            cout<<x<<" + "<<b<<" = "<<c<<"\n";
        }
        else
        {
            x=atoi(a.c_str())+atoi(b.c_str());  
            cout<<a<<" + "<<b<<" = "<<x<<"\n";
        }
    }
    return 0;
}
