#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,n,sum =0.0,avg;
    int x = 1;
    while(x==1)
    {
        cin>>a>>n;
        while(a<0.0 || a>10.0)
        {
            printf("nota invalida\n");
            cin>>a;
        }
        while(n<0.0 || n>10.0)
        {
            printf("nota invalida\n");
            cin>>n;
        }


        avg = (a+n);
        sum = (avg/2.0);
        printf("media = %.2lf\n",sum);
        printf("novo calculo (1-sim 2-nao)\n");
        while(1)
        {
            cin>>x;
            if(x>=1&&x<=2)
            {
                break;
            }
            cout<<"novo calculo (1-sim 2-nao)\n";
        }

    }


    return 0;
}


