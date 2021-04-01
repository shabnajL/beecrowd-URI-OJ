#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,ss;
    while(cin>>s1>>s2)
    {
        int pos = s1.find(s2);
        int cnt = 0;
        for(int i=pos,j=0; i<s1.size(),j<s2.size(); i++,j++)
        {
            if(s1[i] == s2[j])
            {
                cnt++;
            }
        }
        if(cnt==s2.size())
        {
            printf("Resistente\n");
        }
        else
        {
            printf("Nao resistente\n");
        }

        s1.clear();
        s2.clear();
    }
    return 0;
}

