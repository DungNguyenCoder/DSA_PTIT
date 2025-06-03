#include<bits/stdc++.h>

using namespace std;

struct node {
    int val;
    node *l, *r;
    node (int x) {
        val = x;
        l = r = NULL;
    }
};

node *insert(node *root, int val) {
    if(!root)
        return new node(val);
    if(val < root->val)
        root->l = insert(root->l, val);
    else
        root->r = insert(root->r, val);
    return root;
}

node *buildBST(vector<int> &a) {
    node *root = NULL;
    for(int val : a) {
        root = insert(root, val);
    }
    return root;
}

int deep = 0;

void deepOfTree(node *root) {
    if(!root)
        return;
    queue<pair<node *, int>> q;
    q.push({root, 0});
    while(!q.empty()) {
        auto [node, level] = q.front();
        q.pop();

        deep = max(deep, level);
        if(node->l)
            q.push({node->l, level + 1});
        if(node->r)
            q.push({node->r, level + 1});
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        deep = 0;
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        node *root = buildBST(a);
        deepOfTree(root);
        cout << deep << '\n';
    }
}