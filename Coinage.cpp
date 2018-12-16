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
        z n,a,b,c,d;
        z an=0;
        cin>>n>>a>>b>>c>>d;
        z i,j,k,l;
        for(i=0;i<=a;i++)
        {
            for(j=0;j<=b && j<=(n-i)/2;j++)
            {
                for(k=0;k<=c && k<=(n-i-2*j)/5;k++)
                {
                    
                    if((n-i-2*j-5*k)%10==0 && (n-i-2*j-5*k)/10<=d) 
                        an++;
                }
            }
        }
        cout << an << endl;
    }

    return 0;   
}
