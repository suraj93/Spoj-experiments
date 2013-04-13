#include<iostream>
#include<string>
using namespace std;

int main()
{
    int i,N,lenstr,mid;
    string input,modstr;
    char temp='0';
    cin>>N;
    std::cin.ignore(100, '\n');
    while(N--)
    {
        temp='0';
        getline(cin,modstr);
        lenstr=modstr.size();
        input=modstr;
        mid=lenstr/2;
        //cout<<lenstr<<"\n";
            
        for(i=0;i<lenstr/2;i++)
        {
            //modstr[i]=modstr[lenstr-1-i];
        }
        for(;i<lenstr;i++)
        {
            modstr[i]=modstr[lenstr-1-i];
        }   
        if(modstr.compare(input)<=0)
        {
            //cout<<"\n"<<mid<<"\n";
            //cout<<modstr<<"\n";
            while(mid!=lenstr)
            {
                if(modstr[mid]!='9')
                {
                    modstr[mid]++;
                    modstr[lenstr-1-mid]=modstr[mid];
                    break;
                }
                modstr[mid]='0';
                modstr[lenstr-1-mid]=modstr[mid];
                mid++;
            }
            if(mid==lenstr)
            {
                temp='1';
                modstr[0]='1';
            }
            cout<<modstr;
            if(temp=='1')   
                cout<<temp;
            cout<<"\n";
        }
        else
            cout<<modstr<<"\n";
    }


    return 0;
}
