#include<bits/stdc++.h>

using namespace std;

int MaxNumber = 0;

int check_Maximum_Number(int arr[], int N, int i)
{
    if(i == N)return MaxNumber;
    if(MaxNumber < arr[i])MaxNumber = arr[i];
    check_Maximum_Number(arr, N, i+1);
}

int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0; i<N; i++)scanf("%d",arr+i);
    printf("%d\n",check_Maximum_Number(arr,N,0));
    return 0;
}
