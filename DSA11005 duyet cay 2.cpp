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

node *build(vector<int> &inOrder, vector<int> &levelOrder) {
    if(inOrder.empty())
        return NULL;

    int rootVal = levelOrder[0];
    node *root = new node(rootVal);

    auto it = find(inOrder.begin(), inOrder.end(), rootVal);
    int idx = it - inOrder.begin();

    unordered_set<int> leftSet(inOrder.begin(), inOrder.begin() + idx);
    unordered_set<int> rightSet(inOrder.begin() + idx + 1, inOrder.end());

    vector<int> leftLevel;
    vector<int> rightLevel;

    for (int i = 1; i < levelOrder.size(); i++) {
        if(leftSet.count(levelOrder[i]))
            leftLevel.push_back(levelOrder[i]);
        else if(rightSet.count(levelOrder[i]))
            rightLevel.push_back(levelOrder[i]);
    }

    vector<int> leftIn(inOrder.begin(), inOrder.begin() + idx);
    vector<int> rightIn(inOrder.begin() + idx + 1, inOrder.end());

    root->l = build(leftIn, leftLevel);
    root->r = build(rightIn, rightLevel);

    return root;
}

void inOrder(node *root) {
    if(!root)
        return;
    inOrder(root->l);
    inOrder(root->r);
    cout << root->val << ' ';
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
        vector<int> inOrder(n), levelOrder(n);
        for (int i = 0; i < n; i++)
            cin >> inOrder[i];
        for (int i = 0; i < n; i++)
            cin >> levelOrder[i];
        node *root = build(inOrder, levelOrder);
        inOrder(root);
        cout << '\n';
    }
}