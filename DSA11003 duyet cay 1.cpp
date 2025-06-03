#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

struct node {
    int data;
    node *left;
    node *right;
    node(int t) : data(t), left(NULL), right(NULL) {}
};
typedef node *tree;

unordered_map<int, int> mp;

tree build(vector<int>& preorder, int preStart, int preEnd, vector<int> &inorder, int inStart, int inEnd) {
    if(preStart > preEnd || inStart > inEnd)
        return NULL;
    int rootVal = preorder[preStart];
    tree root = new node(rootVal);
    int rootIdx = mp[rootVal];
    int leftSize = rootIdx - inStart;

    root->left = build(preorder, preStart + 1, preStart + leftSize, inorder, inStart, rootIdx - 1);
    root->right = build(preorder, preStart + leftSize + 1, preEnd, inorder, rootIdx + 1, inEnd);
    return root;
}

void LRN(tree t) {
    if(t != NULL) {
        LRN(t->left);
        LRN(t->right);
        cout << t->data << " ";
    }
}

inline void solution() {
    int n;
    cin >> n;
    vector<int> inorder(n), preorder(n);
    mp.clear();

    for (int i = 0; i < n; i++) {
        cin >> inorder[i];
        mp[inorder[i]] = i;
    }

    for (int i = 0; i < n; i++) {
        cin >> preorder[i];
    }

    tree t = build(preorder, 0, n - 1, inorder, 0, n - 1);
    LRN(t);
    cout << '\n';
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