#include<bits/stdc++.h>
using namespace std;
#define pf printf
#define sf scanf
#define z long long int 
#define siz 1000000
#define mod 1000000000
#define db double


// z po(z x,z y ,z mo)
// {
//     if(y==0) return 1;
//     else if(y%2==0) return (po(x,y/2,mo)%mo*po(x,y/2,mo)%mo)%mo;
//     else if(y%2==1) return ((x%mo)*((po(x,y/2,mo)%mo*po(x,y/2,mo)%mo)%mo)%mo)%mo;

// }

  z ans[2005][2005];
int main()
{   
  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    z n,r,t;

    for(n=0;n<=2000;n++)
    {
        for(r=0;r<=n;r++)
        {
            if(r==0 || n==r ) ans[n][r]=1;
            else
            ans[n][r]=(ans[n-1][r-1]+ans[n-1][r])%mod;
        }
    }

    cin>>t;
    while(t--)
    {
        z a,b;
        cin>>a>>b;
        cout <<ans[a+b-1][b]<<endl;
    }

    return 0;   
}
