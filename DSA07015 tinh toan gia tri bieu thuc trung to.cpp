#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define fi first
#define se second
#define vt vector
#define db double

const int mx = 1e5;
const int mod = 1e9+7;
#define TEST 1

int pre(char c)
{
    if(c == '(')    return 0;
    else if(c == '+' || c == '-')
        return 1;
    else if(c == '*' || c == '/')    return 2;
}

ll tt(ll a, ll b, char c)
{
    if(c == '+')    return a+b;
    if(c == '-')    return a-b;
    if(c == '*')    return a*b;
    else    return a/b;
}

void solve(string s)
{
    stack<char> st1;
    stack<ll> st2;
    int n = s.size();
    for(int i = 0; i < n; i++)
    {
        if(s[i] == '(')
            st1.push(s[i]);
        else if(isdigit(s[i]))
        {
            ll tmp = 0;
            while(i < n && isdigit(s[i]))
            {
                tmp = tmp*10 + s[i] - '0';
                ++i;
            }
            st2.push(tmp);
            i--;
        }
        else if(s[i] == ')')
        {
            while(!st1.empty() && st1.top() != '(')
            {
                ll o1 = st2.top();
                st2.pop();
                ll o2 = st2.top();
                st2.pop();
                st2.push(tt(o2,o1,st1.top()));
                st1.pop();
            }
            st1.pop();
        }
        else
        {
            while(!st1.empty() && pre(st1.top()) >= pre(s[i]))
            {
                ll o1 = st2.top();
                st2.pop();
                ll o2 = st2.top();
                st2.pop();
                st2.push(tt(o2,o1,st1.top()));
                st1.pop();            
            }
            st1.push(s[i]);
        }
    }
    while(!st1.empty())
    {
        ll o1 = st2.top();
        st2.pop();
        ll o2 = st2.top();
        st2.pop();
        st2.push(tt(o2,o1,st1.top()));
        st1.pop();            
    }
    cout << st2.top() << "\n";
}

inline void solution()
{
    string s;
    cin >> s;
    solve(s);
}

int main()
{
    faster();
    int t;
    if(TEST)
    {
        cin >> t;
        cin.ignore();
    }
    else        t = 1;
    while(t--)
    {
        solution();
    }
}