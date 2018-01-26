#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    for(int i=x+1;i>x;i++)
    {
        if(i%2==0){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}
