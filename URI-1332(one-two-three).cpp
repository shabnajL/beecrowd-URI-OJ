#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    string s;
    cin>>T;
    for(int t=0; t<T; t++)
    {
        cin>>s;
        if(s.size()==3)
        {
            if((s[0]=='o'&& s[1]=='n') || (s[0]=='o'&& s[2]=='e') ||(s[1]=='n'&&s[2]=='e'))
                printf("1\n");
            else if((s[0]=='t'&&s[1]=='w') || (s[0]=='t'&&s[2]=='o') || (s[2]=='o'&&s[1]=='w'))
            {
                printf("2\n");
            }
        }
        else if(s.size()==5)
        {
            printf("3\n");
        }
        s.clear();

    }


    return 0;
}




