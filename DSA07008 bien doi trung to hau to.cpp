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
    else if(c == '+' || c == '-')    return 1;
    else if(c == '*' || c == '/')    return 2;
    else if(c == '^')    return 3;
}

void solve(string s)
{
    string res = "";
    stack<char> st;
    for(char x : s)
    {
        if(isalpha(x))
            res += x;
        else if(x == '(')
        {
            st.push(x);
        }
        else if(x == ')')
        {
            while(!st.empty() && st.top() != '(')
            {
                res += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while(!st.empty() && pre(st.top()) >= pre(x))
            {
                res += st.top();
                st.pop();
            }
            st.push(x);
        }
    }
    while(!st.empty())
    {
        res += st.top();
        st.pop();
    }
    cout << res << "\n";
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