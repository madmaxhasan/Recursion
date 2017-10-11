#include<bits/stdc++.h>

using namespace std;

int Fibonacci(int N)
{
    if(N < 3)return 1;
    return Fibonacci(N-2) + Fibonacci(N-1);
}

int main()
{
    int N;
    scanf("%d",&N);
    printf("%d\n",Fibonacci(N));
    return 0;
}
