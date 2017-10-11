#include<bits/stdc++.h>

using namespace std;

int LCM(int N, int M, int common)
{
    if(N*common % M == 0)return N*common;
    return LCM(N, M, common+1);
}

int main()
{
    int N,M;
    while(scanf("%d %d",&N,&M) != EOF)
    {
        printf("LCM: %d\n",LCM(N, M, 1));
    }
    return 0;
}
