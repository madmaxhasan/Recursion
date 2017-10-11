#include<bits/stdc++.h>

using namespace std;

void PrintReverseArray(int arr[], int N, int i)
{
    if(i == N)return;
    PrintReverseArray(arr, N, i+1);
    printf("%d ",arr[i]);
}

int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0; i<N; i++)scanf("%d",arr+i);
    PrintReverseArray(arr, N, 0);
    printf("\n");
    return 0;
}
