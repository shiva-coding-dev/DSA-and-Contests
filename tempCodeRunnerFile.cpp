#include <iostream>
using namespace std;

// Linked list node
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Function to print linked list
void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Function to find length of the linked list
int getLength(Node* head) {
    int len = 0;
    while (head) {
        len++;
        head = head->next;
    }
    return len;
}

// Function to split list into 3 parts
void splitIntoThree(Node* head, Node** first, Node** second, Node** third) {
    int len = getLength(head);
    int oneThird = len / 3;
    int twoThird = 2 * len / 3;

    *first = head;
    Node* prev = nullptr;

    for (int i = 0; i < oneThird && head; i++) {
        prev = head;
        head = head->next;
    }
    if (prev) prev->next = nullptr;

    *second = head;
    prev = nullptr;

    for (int i = oneThird; i < twoThird && head; i++) {
        prev = head;
        head = head->next;
    }
    if (prev) prev->next = nullptr;

    *third = head;
}

// Merge two sorted linked lists
Node* mergeTwoLists(Node* a, Node* b) {
    if (!a) return b;
    if (!b) return a;

    if (a->data < b->data) {
        a->next = mergeTwoLists(a->next, b);
        return a;
    } else {
        b->next = mergeTwoLists(a, b->next);
        return b;
    }
}

// Merge three sorted lists
Node* mergeThreeLists(Node* a, Node* b, Node* c) {
    Node* temp = mergeTwoLists(a, b);
    return mergeTwoLists(temp, c);
}

// 3-way merge sort
Node* threeWayMergeSort(Node* head) {
    if (!head || !head->next) return head;

    Node *first = nullptr, *second = nullptr, *third = nullptr;
    splitIntoThree(head, &first, &second, &third);

    first = threeWayMergeSort(first);
    second = threeWayMergeSort(second);
    third = threeWayMergeSort(third);

    return mergeThreeLists(first, second, third);
}

// Helper function to insert at end
void insertAtEnd(Node** head, int val) {
    Node* newNode = new Node(val);
    if (!*head) {
        *head = newNode;
        return;
    }
    Node* temp = *head;
    while (temp->next)
        temp = temp->next;
    temp->next = newNode;
}

// Main function
int main() {
    Node* head = nullptr;
    int n, val;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> val;
        insertAtEnd(&head, val);
    }

    head = threeWayMergeSort(head);

    cout << "Sorted list:\n";
    printList(head);
    return 0;
}
