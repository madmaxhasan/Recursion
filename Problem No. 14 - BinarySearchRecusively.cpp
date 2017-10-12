#include<bits/stdc++.h>

using namespace std;

int Binary_Search_Recusively(int arr[], int low, int high, int data)
{
    if(low > high)return -1;
    int mid = (low + high) / 2;
    if(arr[mid] < data)return Binary_Search_Recusively(arr, mid+1, high, data);
    if(arr[mid] > data)return Binary_Search_Recusively(arr, low, mid-1, data);
    return mid;
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
        int index = Binary_Search_Recusively(arr, 0, N-1, data);
        if(index == -1)printf("Not Found\n");
        else printf("%d\n",index);
    }
    return 0;
}
