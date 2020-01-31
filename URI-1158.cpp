#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,x,y,sum;
    cin>>N;
    while(N--)
    {
        cin>>x>>y;
        sum = 0;
        if(x%2==0)
        {
            x++;
            for(int i=0; i<y; i++)
            {
                sum += x;
                x += 2;
            }
        }
        else
        {
            for(int i=0; i<y; i++)
            {
                sum += x;
                x += 2;
            }
        }
        printf("%d\n",sum);


    }
    return 0;
}
