#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,res,a,b,c,d,e;
    cin>>n;
    if(n<=2000.00)
    {
        printf("Isento\n");
    }
    else if(n>2000.00 && n<=3000.00)
    {
        a = n - 2000.00;
        res = (a*0.08);
        printf("R$ %.2lf\n",res);
    }
    else if(n>3000.00 && n<=4500.00)
    {
        a = n - 2000.00;
        b = n - 3000.00;
        c = a - b;
        res = (b*0.18) + (c*0.08);
        printf("R$ %.2lf\n",res);
    }
    else if(n>4500.00)
    {
        a = n - 2000.00;
        b = n - 4500.00;
        c = a - b;
        d = c - 1000.00;
        e = c - d;
        res = (b*0.28) + (d*0.18) + (e*0.08);

        printf("R$ %.2lf\n",res);
    }

    return 0;
}

