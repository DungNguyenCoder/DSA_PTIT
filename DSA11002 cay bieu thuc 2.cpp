#include <bits/stdc++.h>

using namespace std;

struct node {
    string c;
    node *l, *r;
    node(string x) {
        c = x;
        l = r = NULL;
    }
};

bool dau(string c) {
    return c == "+" || c == "-" || c == "*" || c == "/";
}

node *build(const vector<string> &v, int i) {
    if(i >= v.size())
        return NULL;
    node *root = new node(v[i]);
    root->l = build(v, i * 2 + 1);
    root->r = build(v, i * 2 + 2);
    return root;
}

int tinhToan(node *root) {
    if(!dau(root->c)) {
        return stoi(root->c);
    }
    int left = tinhToan(root->l);
    int right = tinhToan(root->r);
    if(root->c == "+")
        return left + right;
    if(root->c == "-")
        return left - right;
    if(root->c == "*")
        return left * right;
    else
        return left / right;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<string> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        node *root = build(v, 0);
        cout << tinhToan(root) << '\n';
    }
}