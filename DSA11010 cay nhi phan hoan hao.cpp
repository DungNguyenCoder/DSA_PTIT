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
    }
    insert(root->l, u, v, dir);
    insert(root->r, u, v, dir);
}

bool isPerfect(node *root) {
    if(!root)
        return true;
    queue<pair<node *, int>> q;
    q.push({root, 0});
    int leafLevel = -1;
    while(!q.empty()) {
        auto [node, level] = q.front();
        q.pop();

        if(!node->l && !node->r) {
            if(leafLevel == -1)
                leafLevel = level;
            else if(level != leafLevel)
                return false;
        }

        if((!node->l && node->r) || (node->l && !node->r))
            return false;

        if(node->l)
            q.push({node->l, level + 1});
        if(node->r)
            q.push({node->r, level + 1});
    }
    return true;
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
            cin >> u >> v >> dir;
            if(i == 0) {
                root = new node(u);
                make(root, v, dir);
            }
            else {
                insert(root, u, v, dir);
            }
        }
        if(isPerfect(root))
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}