#include<bits/stdc++.h>

using namespace std;

int Linear_Search_Recursively(int arr[], int N, int i, int data)
{
    if(arr[i] == data)return i;
    if(i == N)return -1;
    return Linear_Search_Recursively(arr, N, i+1, data);
}

int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0; i<N; i++)scanf("%d",arr+i);
    int query;
    scanf("%d",&query);
    while(query--)
    {
        int data;
        scanf("%d",&data);
        int index = Linear_Search_Recursively(arr, N, 0, data);
        if(index != -1)printf("%d\n",index);
        else printf("Not Found\n");
    }
    return 0;
}
