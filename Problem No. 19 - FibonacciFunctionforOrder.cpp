#include<bits/stdc++.h>

using namespace std;

void InOrder(int N)
{
    if(N == 1 || N == 2)
    {
        printf(" %d",N);
        return;
    }
    InOrder(N-2);
    printf(" %d",N);
    InOrder(N-1);
}

void PreOrder(int N)
{
    if(N == 1 || N == 2)
    {
        printf(" %d",N);
        return;
    }
    printf(" %d",N);
    PreOrder(N-2);
    PreOrder(N-1);
}

void PostOrder(int N)
{
    if(N == 1 || N == 2)
    {
        printf(" %d",N);
        return;
    }
    PostOrder(N-2);
    PostOrder(N-1);
    printf(" %d",N);
}

int main()
{
    int N;
    while(scanf("%d",&N) != EOF)
    {
        printf("Fibonacci Series:\n");
        printf("In Order:");
        InOrder(N);
        printf("\n");

        printf("Pre Order:");
        PreOrder(N);
        printf("\n");

        printf("Post Order:");
        PostOrder(N);
        printf("\n");
    }
    return 0;
}
