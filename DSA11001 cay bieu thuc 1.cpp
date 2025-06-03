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

bool dau(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}

node *build(string s) {
    stack<node *> st;
    for(char c : s) {
        if(!dau(c)) {
            st.push(new node(string(1, c)));
        }
        else {
            node *right = st.top();
            st.pop();
            node *left = st.top();
            st.pop();
            node *op = new node(string(1, c));
            op->l = left;
            op->r = right;
            st.push(op);
        }
    }
    return st.top();
}

void inOrder(node *root) {
    if(!root)
        return;
    inOrder(root->l);
    cout << root->c;
    inOrder(root->r);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        node *root = build(s);
        inOrder(root);
        cout << '\n';
    }
}