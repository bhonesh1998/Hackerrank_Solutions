#include <bits/stdc++.h>
using namespace std;
#define pf printf
#define sf scanf
#define db double
#define z long long int 
#define mod 1000000007
#define siz 10000000000000000

int main() 
{
    
    
    z t,i;
    cin>>t;
    while(t--)
    {
        z n;
        cin>>n;
        z a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        z hc=a[0];
        for(i=1;i<n;i++) hc=__gcd(hc,a[i]);
        if(hc==1) std::cout << "YES" << std::endl;
        else std::cout << "NO" << std::endl;
    }
    
    

}
