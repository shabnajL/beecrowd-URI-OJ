#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r1,r2,x1,x2,y1,y2;
    double d;
    while((cin>>r1>>x1>>y1>>r2>>x2>>y2)!=0)
    {
        d = ((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2));
        d = sqrt(d);
        if( (d+r2) <= r1 )
        {
            printf("RICO\n");
        }
        else
        {
            printf("MORTO\n");
        }
    }
    return 0;
}
