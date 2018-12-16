#include<bits/stdc++.h>
using namespace std;
#define pf printf
#define sf scanf
#define z long long int 
#define siz 1000000
#define mod 1000000007
#define db double


z po(z x,z y ,z mo)
{
    if(y==0) return 1;
    else if(y%2==0) return (po(x,y/2,mo)%mo*po(x,y/2,mo)%mo)%mo;
    else if(y%2==1) return ((x%mo)*((po(x,y/2,mo)%mo*po(x,y/2,mo)%mo)%mo)%mo)%mo;
    return 0;
}


int main()
{   
  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    z t;
   
    cin>>t;
     z k=t;
    z ev=0;
    while(t--)
    {
        z a;cin>>a;
        if(a%2==0) ev++;
    }
    z od=k-ev;
    if(od==0)
    cout<<po(2,ev,mod)%mod-1;
    else
     cout<<po(2,k-1,mod)%mod-1;

    return 0;   
}
