#include<bits/stdc++.h>
using namespace std;
int main()
{
    double i,j;
    int ii,jj;
    for(ii=0; ii<1; ii++)
    {
        for(jj=1; jj<=3; jj++)
        {
            printf("I=%d J=%d\n",ii,jj);
        }
    }
    for(i=0.2; i<=0.8; i+=0.2)
    {
        for(j=1.0; j<=3.8; j+=1.0)
        {

            printf("I=%.1lf J=%.1lf\n",i,j+i);
        }
    }

    for(ii=1; ii<2; ii++)
    {
        for(jj=2; jj<=4; jj++)
        {
            printf("I=%d J=%d\n",ii,jj);
        }
    }

    for(i=1.2; i<=1.8; i+=0.2)
    {
        for(j=1.0; j<=3.8; j++)
        {
            printf("I=%.1lf J=%.1lf\n",i,j+i);
        }
    }


    for(ii=2; ii<3; ii++)
    {
        for(jj=3; jj<=5; jj++)
        {
            printf("I=%d J=%d\n",ii,jj);
        }
    }
    return 0;
}

