#include<bits/stdc++.h>

using namespace std;

int large = 0;
int secondLarge = 0;

void FindSecondMaximumNumber(int arr[], int N, int i)
{
    if(i == N)return;
    if(large < arr[i])large = arr[i];
    FindSecondMaximumNumber(arr, N, i+1);
    if(arr[i] > secondLarge && arr[i] < large)secondLarge = arr[i];
}

int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0; i<N; i++)scanf("%d",arr+i);
    FindSecondMaximumNumber(arr, N, 0);
    printf("%d\n",secondLarge);
    return 0;
}
