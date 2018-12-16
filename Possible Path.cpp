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


int main()
{   
  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    z t;
    cin>>t;
    while(t--)
    {
    z a,b,x,y;
    cin>>a>>b>>x>>y;
    if(__gcd(a,b)==__gcd(x,y))
        cout <<"YES"<<endl;
    else  cout <<"NO"<<endl;
}

    return 0;   
}
