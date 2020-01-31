#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,r;
    cin>>p>>r;

    if(p==1 && r==1)
    {
        printf("A\n");
    }
    else if(p==1 && r==0)
    {
        printf("B\n");
    }
    else if(p==0 && r==0)
    {
        printf("C\n");
    }
    else if(p==0 && r==1)
    {
        printf("C\n");
    }

    return 0;
}


