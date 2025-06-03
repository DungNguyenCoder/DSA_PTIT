#include<bits/stdc++.h>

using namespace std;

struct node {
    int val;
    node *l, *r;
    node(int x) {
        val = x;
        l = r = NULL;
    }
};

node *insert(node *root, int val) {
    if(!root)
        return new node(val);
    if(val < root->val) {
        root->l = insert(root->l, val);
    }
    else if(val > root->val)
        root->r = insert(root->r, val);
    return root;
}

node *buildBST(const vector<int> &a) {
    node *root = NULL;
    for(int val : a) {
        root = insert(root,val);
    }
    return root;
}

void inOrder(node *root, vector<int> &res) {
    if(!root)
        return;
    inOrder(root->l, res);
    res.push_back(root->val);
    inOrder(root->r, res);
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
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        node *root = buildBST(a);
        vector<int> res;
        inOrder(root, res);
        if(res.size() != a.size()) {
            cout << 0 << '\n';
            continue;
        }
        bool check = true;
        for (int i = 0; i < n; i++) {
            if(res[i] != a[i]) {
                check = false;
                break;
            }
        }
        cout << check << '\n';
    }
}