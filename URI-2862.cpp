#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int c,n;
    while(cin>>c)
    {
        for(int i=0; i<c; i++)
        {
            cin>>n;
            if(n>8000)
            {
                printf("Mais de 8000!\n");
            }
            else{
                printf("Inseto!\n");
            }

        }


    }



    return 0;
}

