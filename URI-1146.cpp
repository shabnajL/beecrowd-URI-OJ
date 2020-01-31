#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        for(int i=1;i<n;i++)
        {
            printf("%d ",i);
        }
        printf("%d\n",n);
    }
    return 0;
}

