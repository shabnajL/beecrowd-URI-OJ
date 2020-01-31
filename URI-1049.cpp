#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    if(s1[0]=='v')
    {
        if(s2[0]=='a')
        {
            if(s3[0]=='c')
            {
                printf("aguia\n");
            }
            else if (s3[0]=='o')
            {
                printf("pomba\n");
            }
        }
        else if(s2[0]=='m')
         {
            if(s3[0]=='o')
            {
                printf("homem\n");
            }
            else if (s3[0]=='h')
            {
                printf("vaca\n");
            }
        }
    }
    else if(s1[0]=='i')
    {
        if(s2[0]=='i')
        {
            if(s3[0]=='h' && s3[2]=='m')
            {
                printf("pulga\n");
            }
            else if(s3[0]=='h' && s3[2]=='r')
            {
                printf("lagarta\n");
            }
        }
        else if(s2[0]=='a')
         {
            if(s3[0]=='h')
            {
                printf("sanguessuga\n");
            }
            else if (s3[0]=='o')
            {
                printf("minhoca\n");
            }
        }
    }
    s1.clear();
    s2.clear();
    s3.clear();
    return 0;
}
