#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

bool isValidNumber(string s, int &num) {
    if(s.find('?' == string::npos)) {
        num = stoi(s);
        return num >= 10 && num <= 99;
    }
    return false;
}

bool check(int a, int b, int c, char op) {
    switch(op) {
        case '+':
            return a + b == c;
        case '-':
            return a - b == c;
        case '*':
            return a * b == c;
        case '/':
            return a % b == 0 && a / b == c;
    }
    return false;
}

vector<int> generate(string s) {
    vector<int> ans;
    for (int i = 10; i <= 99; i++) {
        string tmp = to_string(i);
        if(s.size() != tmp.size())
            continue;
        bool match = true;
        for (int j = 0; j < s.size(); j++) {
            if(s[j] != '?' && s[j] != tmp[j]) {
                match = false;
                break;
            }
        }
        if(match) {
            ans.push_back(i);
        }
    }
    return ans;
}

vector<char> generateOps(string s) {
    vector<char> ans;
    string ops = "+-*/";
    for(char op : ops) {
        if(s[0] == '?' || s[0] == op)
            ans.push_back(op);
    }
    return ans;
}

inline void solution() {
    string s;
    getline(cin, s);
    stringstream ss(s);
    string sa, sop, sb, seq, sc;
    ss >> sa >> sop >> sb >> seq >> sc;

    vector<int> A = generate(sa);
    vector<int> B = generate(sb);
    vector<int> C = generate(sc);
    vector<char> Ops = generateOps(sop);

    bool found = false;

    for(int a : A) {
        for(char op : Ops) {
            for(int b : B) {
                for(int c : C) {
                    if(check(a,b,c,op)) {
                        cout << a << " " << op << " " << b << " = " << c << endl;
                        found = true;
                        goto END;
                    }
                }
            }
        }
    }
    END:
    if(!found)
        cout << "WRONG PROBLEM!" << "\n";
}

int main() {
    faster();
    int t;
    if(TEST) {
        cin >> t;
        cin.ignore();
    }
    else        t = 1;
    while(t--) {
        solution();
    }
}