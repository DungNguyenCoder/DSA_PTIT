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

int cnt = 0;

void cntNotLeaf(node *root) {
    if(!root)
        return;
    if(!(!root->l && !root->r)) {
        ++cnt;
    }
    else {
        return;
    }
    cntNotLeaf(root->l);
    cntNotLeaf(root->r);
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        cnt = 0;
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        node *root = buildBST(a);
        cntNotLeaf(root);
        cout << cnt << '\n';
    }
}