#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int T,S,S1,B,B1,A,A1;
    double sum1 = 0,sum2 = 0,b1 = 0,b2=0,a1=0,a2=0;
    string str;
    cin>>T;
    for(int t=0;t<T;t++)
    {
        cin>>str;
        cin>>S>>B>>A>>S1>>B1>>A1;

        sum1 = sum1 + S;
        sum2 = sum2 + S1;

        b1 = b1+B;
        b2 = b2+B1;

        a1 = a1+A;
        a2 = a2+A1;
    }
    double sum = (sum2*100)/sum1;
    double BB = (b2*100)/b1;
    double AA = (a2*100)/a1;
    printf("Pontos de Saque: %.2lf ",sum);
    cout<<"%."<<endl;
    printf("Pontos de Bloqueio: %.2lf ",BB);
    cout<<"%."<<endl;
    printf("Pontos de Ataque: %.2lf ",AA);
    cout<<"%."<<endl;


    return 0;
}
