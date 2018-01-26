#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,double>mp;
    int N;
    string s;
    cin>>N;
    while(N--)
    {
        int M;
        cin>>M;
        for(int i = 0; i<M; i++)
        {
            double x;
            cin>>s>>x;
            mp[s] = x;
        }
        int P;
        cin>>P;
        double sum = 0.0;
        while(P--)
        {
            double y;
            cin>>s>>y;
            sum = sum + (y * mp[s]);
        }
        printf("R$ %.2lf\n",sum);
    }
    return 0;

}


