#include<bits/stdc++.h>

using namespace std;

int sum = 0;

int PolynomialSeries(int N, int x, int i)
{
    if(i == N)return sum;
    if(i == 0)sum += 1;
    else if(i == 1)sum += x;
    else sum += pow(x,i);
    PolynomialSeries(N, x, i+1);
}

int main()
{
    int X,N;
    scanf("%d %d",&X,&N);
    printf("%d\n",PolynomialSeries(N, X, 0));
    return 0;
}
