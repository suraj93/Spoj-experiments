#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    int N,i,l=0;
    //vector<char> in,out;
    string in,out;
    vector<char> temp;
    cin>>N;
    while(N--)
    {
        cin>>in;
        out.clear();
        for(i=0;i<in.size();i++)
        {
            if(in[i]==')')
            {
                while(temp[l-1]!='(')
                {
                    out += temp[l-1] ;
                    l--;temp.pop_back();
                }
                l--;temp.pop_back();
            }
            else if((in[i]=='(')||(in[i]=='+')||(in[i]=='-')||(in[i]=='*')||(in[i]=='/')||(in[i]=='^'))
            {
                temp.push_back(in[i]);
                l++;
            }
            else
                out+=in[i];
        }
        cout<<out<<"\n";
        
    }
    return 0;
}
