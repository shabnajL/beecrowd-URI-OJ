#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,x,y,r,b,c;
    cin>>N;
    for(int t=0;t<N;t++)
    {
        cin>>x>>y;
        r = (9*x*x) + (y*y);
        b = (2*x*x) + (25*y*y);
        c = -(100*x) + (y*y*y);
        if(r>b && r>c){printf("Rafael ganhou\n");}
        else if(b>r && b>c){printf("Beto ganhou\n");}
        else{printf("Carlos ganhou\n");}

    }
    return 0;
}

