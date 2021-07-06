#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testCase = 0, N, K, result;
    scanf("%d",&testCase);
    while(testCase--)
    {
        cin>>N>>K;
        result = 0;
        result += (N / K) + (N % K);
        printf("%d\n",result);
    }


    return 0;
}

