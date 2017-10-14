#include<bits/stdc++.h>

using namespace std;

void ReverseStirng(string str, int index, int sz)
{
    if(index <= sz/2)
    {
        swap(str[index], str[sz-index]);
        ReverseStirng(str, index+1, sz);
    }
    else cout << str << endl;
}

int main()
{
    string s;
    while(cin >> s)
    {
        ReverseStirng(s, 0, s.size()-1);
    }
    return 0;
}
