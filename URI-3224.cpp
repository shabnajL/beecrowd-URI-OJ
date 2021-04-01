#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,ss;
    cin>>s1>>s2;
    {
        int x = s1.size();
        int y = s2.size();

        if(y<=x)
        {
            printf("go\n");
        }
        else
        {
            printf("no\n");
        }

        s1.clear();
        s2.clear();
    }
    return 0;
}

