#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,q,r;
    cin>>a>>b;
    q = a / b;
    r = a % b;
    if(r<0)
    {
        if(q<0)
        {
            q--;
        }
        if(q>0)
        {
            q++;
        }
        if(q==0 && b>0)
        {
            q--;
        }
        if(q==0 && b<0)
        {
            q++;
        }
        r = a -(b*q);

    }
    printf("%d %d\n",q,r);

return 0;
}



