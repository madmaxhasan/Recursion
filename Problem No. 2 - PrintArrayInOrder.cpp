#include<bits/stdc++.h>

using namespace std;

void PrintArrayInOrder(int arr[], int N, int i)
{
    if(i == N/2 + 1)return;
    printf("%d %d\n",arr[i],arr[N-i-1]);
    PrintArrayInOrder(arr, N, i+1);
}

int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0; i<N; i++)scanf("%d",arr+i);
    PrintArrayInOrder(arr, N, 0);
    return 0;
}
