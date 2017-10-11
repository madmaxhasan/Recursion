#include<bits/stdc++.h>

using namespace std;

void ForwardLoop(int N, int i)
{
    if(i == N+1)return; //terminates
    printf("%d\n",i);
    ForwardLoop(N, i+1);
}

void BackwardLoop(int N, int i)
{
    if(i == N+1)return; //terminates
    BackwardLoop(N, i+1);
    printf("%d\n",i);   //Reversing the Progress
}

int main()
{
    int N;
    scanf("%d",&N);
    ForwardLoop(N, 1);
    BackwardLoop(N, 1);
    return 0;
}
