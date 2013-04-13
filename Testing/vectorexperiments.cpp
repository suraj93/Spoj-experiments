#include<vector>
#include<iostream>

using namespace std;

int main()
{
    vector<int> myint;
    cout<<"0 ; "<<myint.size()<<"\n";
    for(int i=0;i<15;i++)
        myint.push_back(i+5);
    cout<<"1 ; "<<myint.size()<<"\n";
    cout<<"2 ; "<<myint[3]<<"\n";
}
    
