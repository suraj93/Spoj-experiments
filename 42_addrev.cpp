#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int N,len1,len2,i,temp;
    string a,b,c;
    //cout<<"\n"<<char('1')<<" "<<char('3');
    //cout<<"\n"<<char('1')+char('3')-96<<"\n";
    cin>>N;
    while(N--)
    {
        i=0;    
        c.erase();
        c+='0';
        cin>>a;
        cin>>b;
        //cout<<"\n\n"<<a<<" "<<b<<"\n\n";
        len1=a.size();
        len2=b.size();
        while((i<len1)&&(i<len2))
        {
            temp=a[i]+b[i]+c[i]-144;
            c+=temp/10+48; 
            c[i]=temp%10+48;
            //cout<<c<<"\n";  
            
            i++;
        }
        while(i<len1)
        {
            temp=a[i]+c[i]-96;
            c+=temp/10+48; 
            c[i]=temp%10+48;
            i++;
        }
        while(i<len2)
        {
            
            temp=b[i]+c[i]-96;
            c+=temp/10+48; 
            c[i]=temp%10+48;
            i++;
        }
        
        if(c[i]=='0')
            c=c.substr(0,c.size()-1);
        i=0;
        while((c[i]==48)||(c[i]==58))
            i++;
        if(i>0)        
            c=c.substr(i,c.size()-1);
        cout<<c<<"\n";  
    }
}
    
