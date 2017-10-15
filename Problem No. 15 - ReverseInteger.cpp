#include<bits/stdc++.h>

using namespace std;

int ReverseInteger(int N, int c)
{
    if(N == 0)return c;
    c = (c * 10) + (N % 10);
    return ReverseInteger(N/10, c);
}

int main()
{
    int N;
    while(scanf("%d",&N) != EOF)
    {
        printf("%d\n",ReverseInteger(N, 0));
    }
    return 0;
}
