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
    if(val > root->val) {
        root->r = insert(root->r, val);
    }
    else {
        root->l = insert(root->l, val);
    }
    return root;
}

node *buildBST(vector<int> &a) {
    node *root = NULL;
    for(int val : a) {
        root = insert(root, val);
    }
    return root;
}

vector<int> ans;

void sumOfLeaf(node *root) {
    if(!root)
        return;
    if(!root->l && !root->r) {
        ans.push_back(root->val);
        return;
    }
    sumOfLeaf(root->l);
    sumOfLeaf(root->r);
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        ans.clear();
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        node *root = buildBST(a);
        sumOfLeaf(root);
        for(const int &x : ans)
            cout << x << ' ';
        cout << '\n';
    }
}