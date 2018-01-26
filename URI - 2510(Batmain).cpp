#include<iostream>
using namespace std;
int main()
{
    int T;string S;
    cin>>T;
    for(int t=0;t<T;t++)
    {
        cin>>S;
        if(S=="BATMAN")
        {
            cout<<"N"<<endl;
        }
        else{
            cout<<"Y"<<endl;
        }
    }
    return 0;
}
