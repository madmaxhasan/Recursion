#include<bits/stdc++.h>

using namespace std;

int GCD(int N, int M)
{
    if(M != 0)return GCD(M, N%M);   //swap the parameter
    else return N;
}

int main()
{
    int N,M;
    while(scanf("%d %d",&N,&M) != EOF)
    {
        printf("GCD: %d\n",GCD(N,M));
//        cout << __gcd(N,M) << endl; //std built in library
    }
    return 0;
}
