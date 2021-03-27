#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,m,res;
    while(cin>>a>>b>>c)
    {

        if((a+b<=c) || (b+c<=a) || (a+c<=b))
        {
            printf("-1.000\n");
        }
        else{
            m = 0.5 * (a + b + c);
            res = m * (m-a) * (m-b) * (m-c);
            res = sqrt(res);
            res = (4.0 * res)/3.0;
            printf("%0.3lf\n",res);

        }

    }

    return 0;
}
