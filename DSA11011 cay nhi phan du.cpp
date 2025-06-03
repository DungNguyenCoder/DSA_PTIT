#include <bits/stdc++.h>

using namespace std;

struct node {
    int val;
    node *l, *r;
    node(int x) {
        val = x;
        l = r = NULL;
    }
};

void make(node *root, int v, char dir) {
    if(dir == 'L')
        root->l = new node(v);
    else
        root->r = new node(v);
}

void insert(node *root, int u, int v, char dir) {
    if(!root)
        return;
    if(root->val == u) {
        make(root, v, dir);
        return;
    }
    insert(root->l, u, v, dir);
    insert(root->r, u, v, dir);
}

bool isFull(node *root) {
    if(!root)
        return true;
    if(!root->l && !root->r)
        return true;
    if(root->l && root->r)
        return isFull(root->l) && isFull(root->r);
    return false;
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
        node *root = NULL;
        int u, v;
        char dir;
        for (int i = 0; i < n; i++) {
            cin >> u >> v;
            cin >> dir;
            if(i == 0) {
                root = new node(u);
                make(root, v, dir);
            }
            else {
                insert(root, u, v, dir);
            }
        }
        cout << isFull(root) << '\n';
    }
}