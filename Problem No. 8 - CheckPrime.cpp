#include<bits/stdc++.h>

using namespace std;

bool Check_Prime(int N, int i)
{
    if(N < 2)return false;
    if(i == 1)return true;
    else
    {
        if(N % i == 0)return false;
        else return Check_Prime(N, i-1);
    }
}

int main()
{
    int N;
    while(scanf("%d",&N) != EOF)
    {
        if(Check_Prime(N, N/2))printf("Prime\n");
        else printf("Not Prime\n");
    }
    return 0;
}
