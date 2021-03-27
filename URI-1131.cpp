#include<bits/stdc++.h>
using namespace std;
int winInter = 0,winGremio = 0,draw = 0;
int game(int goal1, int goal2)
{
    if(goal1>goal2)
    {
        winInter++;
    }
    else if(goal2>goal1){
        winGremio++;
    }
    else{
        draw++;
    }
}
int main()
{
    int x, tes = 1, goalInter, goalGremio;
    cin>>goalInter>>goalGremio;
    game(goalInter, goalGremio);
    printf("Novo grenal (1-sim 2-nao)\n");
    cin>>x;
    while(x==1)
    {
        cin>>goalInter>>goalGremio;
        tes++;
        game(goalInter, goalGremio);
        printf("Novo grenal (1-sim 2-nao)\n");
        cin>>x;
    }
    printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n",tes,winInter,winGremio,draw);
    if(winInter>winGremio){
        printf("Inter venceu mais\n");
    }
    else if(winInter<winGremio){
        printf("Gremio venceu mais\n");
    }
    else{
        printf("Não houve vencedor\n");
    }

    return 0;
}
