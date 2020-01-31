#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,sum;
    while(cin>>x)
    {
        if(x==0){break;}
        sum = 0;
        if(x%2!=0)
        {
            x++;
            for(int i=0; i<5; i++)
            {
                sum += x;
                x += 2;
            }
        }
        else
        {
            for(int i=0; i<5; i++)
            {
                sum += x;
                x += 2;
            }
        }
        printf("%d\n",sum);


    }
    return 0;
}
