#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 0

char kitu[] = {'0','2'};
string date = "00000000";
vector<string> ans;

string chuanHoa(string date) {
    date.insert(2,"/");
    date.insert(5,"/");
    return date;
}

bool isDate(string date) {
    int d = stoi(date.substr(0,2));
    if(d < 1) {
        return false;
    }
    int m = stoi(date.substr(2,2));
    if(m > 12 || m < 1) {
        return false;
    }
    int y = stoi(date.substr(4,4));
    if(y < 2000) {
        return false;
    }
    return true;
}

void Try(int i) {
    if(i == 8) {
        if(isDate(date)) {
            string tmp = chuanHoa(date);
            ans.push_back(tmp);
        }
        return;
    }
    for(int j = 0; j <= 1; j++) {
        date[i] = kitu[j];
        Try(i+1);
    }
}

inline void solution() {
    ans.clear();
    Try(0);
    sort(ans.begin(),ans.end());
    for(auto x : ans) {
        cout << x << "\n";
    }
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