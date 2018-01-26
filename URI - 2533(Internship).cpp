#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,c;
    while((cin>>m))
    {
        int sum1 = 0;
        int sum2 = 0;
        for(int i=0;i<m;i++)
        {
            cin>>n>>c;
            sum1 = sum1 + (n*c);
            sum2 = sum2 + c;
        }
        double var = sum2 * 100;
        double api = (sum1 / var);

        printf("%.4lf\n",api);
    }

    return 0;
}
