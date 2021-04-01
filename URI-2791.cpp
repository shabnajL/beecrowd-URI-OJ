#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,c[10];
    for(int i =0;i<4;i++)
    {
        cin>>c[i];
    }
    for(int i =0;i<4;i++)
    {
        if(c[i]==1)
        {
            printf("%d\n",i+1);
        }
    }

}
