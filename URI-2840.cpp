#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415
int main()
{
    long int r,res;
    double area,l,x;

    while(cin>>r>>l)
    {
        area = (double) (4.0/3.0) * pi * r * r * r;
        x = l / area;
        res = (int) x;
        printf("%ld\n",res);
    }
    return 0;
}
