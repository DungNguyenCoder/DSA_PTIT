#include <bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

void insert(Node*& head, int val) {
    if (!head) {
        head = new Node(val);
        return;
    }
    Node* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = new Node(val);
}

void removeDuplicates(Node*& head) {
    if (!head) return;
    unordered_set<int> seen;
    Node* current = head;
    Node* prev = nullptr;
    
    while (current) {
        if (seen.find(current->data) != seen.end()) {
            prev->next = current->next;
            delete current;
            current = prev->next;
        } else {
            seen.insert(current->data);
            prev = current;
            current = current->next;
        }
    }
}

void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    int n, val;
    cin >> n;
    Node* First = nullptr;
    for (int i = 0; i < n; i++) {
        cin >> val;
        insert(First, val);
    }
    
    removeDuplicates(First);
    printList(First);
    return 0;
}