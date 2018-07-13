#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,i;
    long int s=0;
    scanf("%d",&n);
     long int arr[n];
     for(i=1;i<=n;i++)
         {scanf("%ld",&arr[i]);
         }

                if((n>=1&&n<=10)&&(arr[i]>=0&&arr[i]<=10000000000))
{
   for(i=1;i<=n;i++)
       {s=s+arr[i];}
}printf("%ld",s);
        return 0;
}

