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

void insert(node *root, int u, int v, int dir) {
    if(!root)
        return;
    if(root->val == u) {
        make(root, v, dir);
        return;
    }
    insert(root->l, u, v, dir);
    insert(root->r, u, v, dir);
}

void levelOrder(node *root) {
    if(!root)
        return;
    queue<node*> q;
    q.push(root);
    while(!q.empty()) {
        node *cur = q.front();
        q.pop();
        cout << cur->val << " ";
        if(cur->l)
            q.push(cur->l);
        if(cur->r)
            q.push(cur->r);
    }
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
        for (int i = 0; i < n; i++) {
            int u, v;
            char dir;
            cin >> u >> v >> dir;
            if(i == 0) {
                root = new node(u);
                make(root, v, dir);
            }
            else {
                insert(root, u, v, dir);
            }
        }
        levelOrder(root);
        cout << '\n';
    }
}