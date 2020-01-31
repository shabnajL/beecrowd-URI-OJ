#include<bits/stdc++.h>
using namespace std;
int main()
{
    double sum = 0.0;
    for(double i = 1.0,j=1.0;i<=39.0;i+=2.0,j*=2.0)
    {
        sum += (i/j);
        //printf("%0.2lf | %0.2lf\n",i,j);
    }
    printf("%0.2lf\n",sum);
    return 0;
}
