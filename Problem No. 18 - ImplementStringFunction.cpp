#include<bits/stdc++.h>

using namespace std;

/*String ConCat Function*/

char* strCat(char leftStr[], char rightStr[], int index, int last, int sz)
{
    if(index == sz)
    {
        leftStr[last] = '\0';
        return leftStr;
    }
    leftStr[last] = rightStr[index];
    strCat(leftStr, rightStr, index+1, last+1, sz);
}

/*String Copy Function*/

char* strCpy(char leftStr[], char rightStr[], int index, int sz)
{
    if(index == sz)
    {
        leftStr[index] = '\0';
        return leftStr;
    }
    leftStr[index] = rightStr[index];
    strCpy(leftStr, rightStr, index+1, sz);
}

/*String Compare Function*/

int strCmp(char leftStr[], char rightStr[], int index)
{
    int val = leftStr[index] - rightStr[index];
    if(leftStr[index] == '\0' || rightStr[index] == '\0')return val;
    if(val == 0)strCmp(leftStr, rightStr, index+1);
}

/*String Length Function*/

int strLen(char str[], int index)
{
    if(str[index] == '\0')return index;
    strLen(str, index+1);
}

int main()
{
    printf("STRING CONCAT FUNCTION:\n");
    char s1[100], s2[100];
    scanf("%s %s",&s1,&s2);
    int len1 = strLen(s1, 0);
    int len2 = strLen(s2, 0);
    cout << "String After Concat: " << strCat(s1, s2, 0, len1, len2) << endl;

    printf("\nSTRING COPY FUNCTION:\n");
    char input[100];
    scanf("%s",&input);
    int inputLen = strLen(input, 0);
    char output[100];
    cout << "Input String: " << input << "\nCopied String: " << strCpy(output, input, 0, inputLen) << endl;

    printf("\nSTRING COMPARE FUNCTION:\n");
    char s3[100], s4[100];
    scanf("%s %s",&s3,&s4);
    int len3 = strLen(s3, 0);
    int len4 = strLen(s4, 0);
    int value = strCmp(s3, s4, 0);
    if(value == 0)printf("Both String Matched\n");
    else printf("Both String Does not Matched\n");

    printf("\nSTRING LENGTH FUNCTION:\n");
    char test[100];
    scanf("%s",&test);
    int length = strLen(test, 0);
    printf("%d\n",length);

    return 0;
}
