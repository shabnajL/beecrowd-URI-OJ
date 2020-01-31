#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,n,sum =0.0,avg;
    cin>>a;

    while(a>0.0)
    {
        if(a<0.0){
            break;
        }
        sum +=a;
        cin>>a;
        n++;

    }
        avg = (sum/n);
    printf("%.2lf\n",avg);

    return 0;
}



