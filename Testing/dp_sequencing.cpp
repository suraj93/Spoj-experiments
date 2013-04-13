#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> seq,maxse,maxcons;
    int N,i,temp,j;
    cout<<"Enter number of elements in sequence\n";
    cin>>N;
    cout<<"Enter elements of Sequence";
    for(i=0;i<N;i++)
    {
        cin>>temp;
        seq.push_back(temp);
        maxse.push_back(1);
        maxcons.push_back(1);
        for(j=i-1;j>=0;j--)
        {
            if((seq[j]<seq[i])&&(maxse[j]+1>maxse[i]))
                maxse[i]=maxse[j]+1;
        }
        if((i>0)&&(seq[i]>seq[i-1]))
            maxcons[i]=maxcons[i-1]+1;
    }
    cout<<"Sno     Element      MaxSequence    MaxConsecSeq\n";
    for(i=0;i<seq.size();i++)
    {
        cout<<i+1<<"         "<<seq[i]<<"             "<<maxse[i]<<"                "<<maxcons[i]<<"\n";
    }
    return 0;
}
        
