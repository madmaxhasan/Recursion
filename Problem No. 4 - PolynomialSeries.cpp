#include<bits/stdc++.h>

using namespace std;

void PolynomialSeries(int N, int i)
{
    if(i == N)return;
    if(i == 0)printf("1");
    else if(i == 1)printf(" + x");
    else printf(" + x^%d",i);
    PolynomialSeries(N, i+1);
}

int main()
{
    int N;
    scanf("%d",&N);
    PolynomialSeries(N, 0);
    printf("\n");
    return 0;
}
