#include<iostream>
#include<vector>

using namespace std;
vector<int> myint;

void displayRev()
{
    cout<<"\n";
    for(int i=myint.size()-1;i>=0;i--)
    {
        cout<<myint[i];
    }
    cout<<"\n";
}

int main()
{
    int N,n,temp,x,i;
    cin>>N;
    while(N--)
    {
        cin>>n;
        myint.clear();
        myint.push_back(n%10);
        myint.push_back((n/10)%10);
        myint.push_back(n/100);  
        //display();
        n--;
        while(n)
        {
            temp=0;
            for(i=0;i<myint.size();i++)
            {
                x=myint[i]*n+temp;  
                myint[i]=x%10;
                temp=x/10;
            }
            while(temp)
            {
                myint.push_back(temp%10);
                temp/=10;
            }  
            n--;
        }
        i=myint.size()-1;
        while(myint[i]==0)
        {
            myint.pop_back(); 
            i--;
        }  
        displayRev();
    }
    return 0;
}
