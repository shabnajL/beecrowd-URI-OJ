#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,res;
    char c;
    while(cin>>n)
    {
        if(n==0){break;}
        res = 0;
        for(int i=0; i<n; i++)
        {
            cin>>x>>c;
            if(c=='+')
                res += x;
            else if(c=='-')
                res -= x;
        }
        cout<<res;
    }

}
