#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ss,ee,d,x;
    cin>>ss>>ee;

    if(ss>=ee)
    {
        x = ss - ee;
        d = 24 - x;
    }
    else{
        d = abs(ss-ee);
    }
    printf("O JOGO DUROU %d HORA(S)\n",d);
    return 0;
}
