#include<bits/stdc++.h>

using namespace std;

void PrintArrayWithoutOddNumbers(int arr[], int N, int i)
{
    if(i == N)return;
    if(arr[i] % 2 == 0)printf("%d ",arr[i]);
    PrintArrayWithoutOddNumbers(arr,N,i+1);
}

int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0; i<N; i++)scanf("%d",arr+i);
    PrintArrayWithoutOddNumbers(arr, N, 0);
    printf("\n");
    return 0;
}
