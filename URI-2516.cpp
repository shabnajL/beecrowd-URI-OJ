#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,va,vb;
    while(cin>>s>>va>>vb)
    {


        if(vb>=va)
        {
            printf("impossivel\n");
        }
        else
        {
            double t =(double) s/(va-vb);
            printf("%.2lf\n",t);
        }
    }
    return 0;
}


