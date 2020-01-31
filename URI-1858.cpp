#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,mn =999,xa[105];
    cin>>n;
    for(int t=0; t<n; t++)
    {
        cin>>x;
        xa[t] = x;
        if(x<mn)
        {
            mn = x;
        }
    }
    for(int t=0; t<n; t++)
    {
        if(xa[t]==mn)
        {
            printf("%d\n",t+1);
            break;
        }
    }
    memset(xa,0,sizeof xa);
    return 0;
}
