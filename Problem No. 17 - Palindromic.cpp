#include<bits/stdc++.h>

using namespace std;

bool CheckPalindrom(char str[], int index, int sz)
{
    if(index <= sz/2)
    {
        if(str[index] != str[sz-index])return false;
        CheckPalindrom(str, index+1, sz);
    }
    return true;
}

int main()
{
    char s[100];
    while(gets(s))
    {
        int len = strlen(s);
        char str[100];
        int index = 0;
        for(int i=0; i<len; i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z')str[index++] = s[i];
            if(s[i] >= 'A' && s[i] <= 'Z')str[index++] = s[i];
            if(s[i] >= '0' && s[i] <= '9')str[index++] = s[i];
        }
        str[index] = '\0';
        int length = strlen(str);
        if(CheckPalindrom(str, 0, length-1))printf("Palindrom\n");
        else printf("Not Palindrom\n");
    }
    return 0;
}
