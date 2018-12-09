#include <bits/stdc++.h>
using namespace std;
#define pf printf
#define sf scanf
#define db double
#define z long long int 
#define mod 1000000007
#define siz 10000000000000000

vector<z> v;

void fun(z s)
{
    //pf("%s\n",s);
    v.push_back(s);
    
    if(s>=siz)
    return ;
    else
    {
        fun(s*10+0);
        fun(s*10+9);
    }
       
}

int main() 
{
    z ss=9;
    fun(ss);
    vector<z> :: iterator it ;
    sort(v.begin(),v.end());
    // for(it=v.begin();it!=v.end();it++)
    // {
    //     pf("%lld\n",*it);
    // }
    map<z,z> m;
    for(z j=1;j<=500;j++)
    {
                for(it=v.begin();it!=v.end();it++)
            {
                if((*it)%j==0)
                {
                    m[j]=*it;break;
                }
                //pf("%lld\n",*it);
            }
    }
    
    z t;
    cin>>t;
    while(t--)
    {
        z n; cin>>n;
        cout<<m[n]<<endl;
    }

}
