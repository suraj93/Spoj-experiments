#include<cstdio>

using namespace std;


int main()
{
    int i,lb=0;
    int n,m;
    scanf("%d %d",&n,&m);
    int ht[300001];
    int curr_sum=0,max=0;
    scanf("%ld",&ht[0]);
    curr_sum=ht[0];
    max=ht[0];
    for(i=1;i<n;i++)
    { 
        scanf(" %ld",&ht[i]);
        curr_sum+=ht[i];
        while((curr_sum>m)&&(lb<i))
        {            
            curr_sum-=ht[lb];
            lb++;
        }
    
        if(curr_sum>max)
            max=curr_sum;
        //out<<curr_sum<<" ";
    }
    printf("%d",max);
    return 0;
}
    
