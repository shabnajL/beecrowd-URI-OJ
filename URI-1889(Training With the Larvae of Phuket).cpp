#include<bits/stdc++.h>
using namespace std;
int validSlides(double a, double b, double c)
{
    if(a+b>c && b+c>a && c+a>b)
    {
        return 1;
    }
}
double area(double a, double b, double c)
{
    double s = 0.5 * (a+b+c);
    double var = s * (s - a) * (s - b) * (s - c);
    var = sqrt(var);
    return var;
}
int main()
{
    int T,N;
    double x, mn;
    vector<double>v;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&N);
        for(int i=0; i<N; i++)
        {
            scanf("%lf",&x);
            v.push_back(x);
        }

        sort(v.begin(),v.end());
        mn = 1000017.5;
        for(int i=0; i<N; i++)
        {
            for(int j = i+1; j<N; j++)
            {
                double sum = v[i] + v[j];
                int pos = lower_bound(v.begin(), v.end(), sum) - v.begin();
                //cout<<"j = "<<j<<"and pos1 = "<<pos+1;
                if((pos-1 == i) || (pos-1 ==j) || (pos==N+1) || !validSlides(v[i],v[j],v[pos-1]))
                {
                    continue;
                }
                mn = min(mn, area(v[i],v[j],v[pos-1]));

                double sub = v[j] - v[i];
                pos = upper_bound(v.begin(), v.end(), sub) - v.begin();
                //cout<<"  and pos2 = "<<pos<<endl;
                if((pos == i) || (pos==j) || (pos==N) || !validSlides(v[i],v[j],v[pos]))
                {
                    continue;
                }
                mn = min(mn, area(v[i],v[j],v[pos]));
            }
        }
        if(mn == 1000017.5){
            printf("-1\n");
        }
        else{
            printf("%.2lf\n",mn);
        }

    v.clear();
    }

return 0;
}
