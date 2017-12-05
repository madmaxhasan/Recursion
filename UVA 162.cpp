#include<bits/stdc++.h>

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.cpp", "r", stdin);
    #endif // ONLINE_JUDGE
    stack <string> P1, P2;
    char str[3];
    while(scanf("%s",str) == 1)
    {
        if(str[0] == '#')break;
        for(int i=1; i<=52; i++)
        {
            if(i != 1)scanf("%s",str);
            if(i & 1)P1.push(str);
            else P2.push(str);
        }

        stack <string> deck;
        string s1 = P1.top(), s2 = P2.top();
        deck.push(s1);
        P1.pop();
        P2.pop();
        while(true)
        {
            if(P1.empty() || P2.empty())break;
            switch(s1[1])
            {
            case 'J':
                deck.push(s2);
                if(s2[1] == 'J' || s2[1] == 'Q' || s2[1] == 'K' || s2[1] == 'A')
                {
                    s1 = P1.top();
                    P1.pop();
                    break;
                }
                for(int i=0; i<1; i++)
                {
                    s2 = P2.top();
                    deck.push(s2);
                    P2.pop();
                    if(s2[1] == 'J' || s2[1] == 'Q' || s2[1] == 'K' || s2[1] == 'A')break;
                }
                s1 = P1.top();
                P1.pop();
                break;

            case 'Q':
                deck.push(s2);
                if(s2[1] == 'J' || s2[1] == 'Q' || s2[1] == 'K' || s2[1] == 'A')
                {
                    s1 = P1.top();
                    P1.pop();
                    break;
                }
                for(int i=0; i<2; i++)
                {
                    s2 = P2.top();
                    deck.push(s2);
                    P2.pop();
                    if(s2[1] == 'J' || s2[1] == 'Q' || s2[1] == 'K' || s2[1] == 'A')break;
                }
                s1 = P1.top();
                P1.pop();
                break;

            case 'K':
                deck.push(s2);
                if(s2[1] == 'J' || s2[1] == 'Q' || s2[1] == 'K' || s2[1] == 'A')
                {
                    s1 = P1.top();
                    P1.pop();
                    break;
                }
                for(int i=0; i<3; i++)
                {
                    s2 = P2.top();
                    deck.push(s2);
                    P2.pop();
                    if(s2[1] == 'J' || s2[1] == 'Q' || s2[1] == 'K' || s2[1] == 'A')break;
                }
                s1 = P1.top();
                P1.pop();
                break;

            case 'A':
                deck.push(s2);
                if(s2[1] == 'J' || s2[1] == 'Q' || s2[1] == 'K' || s2[1] == 'A')
                {
                    s1 = P1.top();
                    P1.pop();
                    break;
                }
                for(int i=0; i<4; i++)
                {
                    s2 = P2.top();
                    deck.push(s2);
                    P2.pop();
                    if(s2[1] == 'J' || s2[1] == 'Q' || s2[1] == 'K' || s2[1] == 'A')break;
                }
                s1 = P1.top();
                P1.pop();
                break;

            default:
                deck.push(s2);
                s1 = P1.top();
                P1.pop();
            }

            switch(s2[1])
            {
            case 'J':
                deck.push(s1);
                if(s1[1] == 'J' || s1[1] == 'Q' || s1[1] == 'K' || s1[1] == 'A')
                {
                    s2 = P2.top();
                    P2.pop();
                    break;
                }
                for(int i=0; i<1; i++)
                {
                    s1 = P1.top();
                    deck.push(s1);
                    P1.pop();
                    if(s1[1] == 'J' || s1[1] == 'Q' || s1[1] == 'K' || s1[1] == 'A')break;
                }
                s2 = P2.top();
                P2.pop();
                break;

            case 'Q':
                deck.push(s1);
                if(s1[1] == 'J' || s1[1] == 'Q' || s1[1] == 'K' || s1[1] == 'A')
                {
                    s2 = P2.top();
                    P2.pop();
                    break;
                }
                for(int i=0; i<2; i++)
                {
                    s1 = P1.top();
                    deck.push(s1);
                    P1.pop();
                    if(s1[1] == 'J' || s1[1] == 'Q' || s1[1] == 'K' || s1[1] == 'A')break;
                }
                s2 = P2.top();
                P2.pop();
                break;

            case 'K':
                deck.push(s1);
                if(s1[1] == 'J' || s1[1] == 'Q' || s1[1] == 'K' || s1[1] == 'A')
                {
                    s2 = P2.top();
                    P2.pop();
                    break;
                }
                for(int i=0; i<3; i++)
                {
                    s1 = P1.top();
                    deck.push(s1);
                    P1.pop();
                    if(s1[1] == 'J' || s1[1] == 'Q' || s1[1] == 'K' || s1[1] == 'A')break;
                }
                s2 = P2.top();
                P2.pop();
                break;

            case 'A':
                deck.push(s1);
                if(s1[1] == 'J' || s1[1] == 'Q' || s1[1] == 'K' || s1[1] == 'A')
                {
                    s2 = P2.top();
                    P2.pop();
                    break;
                }
                for(int i=0; i<4; i++)
                {
                    s1 = P1.top();
                    deck.push(s1);
                    P1.pop();
                    if(s1[1] == 'J' || s1[1] == 'Q' || s1[1] == 'K' || s1[1] == 'A')break;
                }
                s2 = P2.top();
                P2.pop();
                break;

            default:
                deck.push(s1);
                s2 = P2.top();
                P2.pop();
            }
        }
        cout << deck.size() << endl;
    }
    return 0;
}
