#include<bits/stdc++.h>

using namespace std;

void TowerOfHanoi(int N, char left, char middle, char right)
{
    if(N > 0)
    {
        TowerOfHanoi(N-1, left, right, middle); //Move N-1 disk to Middle Pillar
        printf("%c -> %c\n",left,right);
        TowerOfHanoi(N-1, middle, left, right); //Move N-1 disk to Right Pillar
    }
}

int main()
{
    int N;
    while(scanf("%d",&N) != EOF)
    {
        TowerOfHanoi(N, 'A', 'B', 'C');
    }
    return 0;
}
