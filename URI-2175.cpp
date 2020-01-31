#include<bits/stdc++.h>
using namespace std;
int main()
{
    double o,b,i;
    cin>>o>>b>>i;

    if(o<b && o<i)
    {
        printf("Otavio\n");
    }
    else if(b<o && b<i)
    {
        printf("Bruno\n");
    }
    else if(i<o && i<b)
    {
        printf("Ian\n");
    }
    else
    {
        printf("Empate\n");
    }

    return 0;
}

