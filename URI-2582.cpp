#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c,x,y,t;
    string s[11];
    s[0] = "PROXYCITY";
    s[1] = "P.Y.N.G.";
    s[2] = "DNSUEY!";
    s[3] = "SERVERS";
    s[4] = "HOST!";
    s[5] = "CRIPTONIZE";
    s[6] = "OFFLINE DAY";
    s[7] = "SALT";
    s[8] = "ANSWER!";
    s[9] = "RAR?";
    s[10] = "WIFI ANTENNAS";
    cin>>c;
    while(c--)
    {
        cin>>x>>y;
        t = x+y;
        printf("%s\n",s[t].c_str());
    }
    return 0;
}


