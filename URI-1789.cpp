#include<bits/stdc++.h>
using namespace std;
int main()
{
    int L,x,lvl,mx;
    while(cin>>L)
    {
        mx = -1;
        for(int i=0; i<L; i++)
        {
            cin>>x;
            if(x>mx)
            {
                mx = x;
            }
        }

        if(mx<10)
        {
            lvl = 1;
        }
        else if(mx>=10 && mx<20)
        {
            lvl = 2;
        }
        else
        {
            lvl = 3;
        }
        printf("%d\n",lvl);


    }
    return 0;
}

