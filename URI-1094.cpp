#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ani,sum,c,r,s;
    double c1,r1,s1;
    double pc,pr,ps;
    char ss;
    cin>>n;
    sum = 0,c=0,r=0,s=0;
    for(int i=0; i<n; i++)
    {
        cin>>ani>>ss;
        sum += ani;
        if(ss=='C')
        {
            c += ani;
        }
        else if(ss=='R')
        {
            r += ani;
        }
        else if(ss=='S')
        {
            s += ani;
        }
        c1 = c;r1=r;s1=s;

    }
    pc = (double) (c1/sum) * 100.00;
    pr = (double) (r1/sum) * 100.00;
    ps = (double) (s1/sum) * 100.00;
    printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n",sum,c,r,s);
    printf("Percentual de coelhos: %0.2lf %%\nPercentual de ratos: %0.2lf %%\nPercentual de sapos: %0.2lf %%\n",pc,pr,ps);


    return 0;
}

