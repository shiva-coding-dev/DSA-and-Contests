#include <iostream>
#include <climits>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    
    ListNode(int x) : val(x), next(nullptr) {}
};

// Function to merge three sorted linked lists into one sorted list
ListNode* mergeThreeLists(ListNode* first, ListNode* second, ListNode* third) {
    // Create a dummy head for easier manipulation
    ListNode dummy(0);
    ListNode* current = &dummy;
    
    // Keep merging until all lists are exhausted
    while (first || second || third) {
        // Find the minimum value among the current heads
        int minVal = INT_MAX;
        int minList = -1;
        
        // Check first list
        if (first && first->val <= minVal) {
            minVal = first->val;
            minList = 1;
        }
        
        // Check second list
        if (second && second->val <= minVal) {
            minVal = second->val;
            minList = 2;
        }
        
        // Check third list
        if (third && third->val <= minVal) {
            minVal = third->val;
            minList = 3;
        }
        
        // Add the minimum node to result and advance the corresponding list
        if (minList == 1) {
            current->next = first;
            first = first->next;
        } else if (minList == 2) {
            current->next = second;
            second = second->next;
        } else if (minList == 3) {
            current->next = third;
            third = third->next;
        }
        
        current = current->next;
        if (current) {
            current->next = nullptr; // Clean up the connection
        }
    }
    
    return dummy.next;
}

// Helper function to create a linked list from array
ListNode* createList(int arr[], int size) {
    if (size == 0) return nullptr;
    
    ListNode* head = new ListNode(arr[0]);
    ListNode* current = head;
    
    for (int i = 1; i < size; i++) {
        current->next = new ListNode(arr[i]);
        current = current->next;
    }
    
    return head;
}

// Helper function to display a linked list
void displayList(ListNode* head) {
    if (!head) {
        cout << "Empty list" << endl;
        return;
    }
    
    while (head) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

// Helper function to delete a linked list
void deleteList(ListNode* head) {
    while (head) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }
}

// Test function
int main() {
    cout << "=== Merge Three Sorted Linked Lists ===" << endl << endl;
    
    // Test case 1: Regular case
    cout << "Test Case 1: Regular merge" << endl;
    int arr1[] = {1, 4, 7, 10};
    int arr2[] = {2, 5, 8, 11};
    int arr3[] = {3, 6, 9, 12};
    
    ListNode* first = createList(arr1, 4);
    ListNode* second = createList(arr2, 4);
    ListNode* third = createList(arr3, 4);
    
    cout << "First list:  ";
    displayList(first);
    cout << "Second list: ";
    displayList(second);
    cout << "Third list:  ";
    displayList(third);
    
    ListNode* merged = mergeThreeLists(first, second, third);
    cout << "Merged list: ";
    displayList(merged);
    cout << endl;
    
    deleteList(merged);
    
    // Test case 2: One empty list
    cout << "Test Case 2: One empty list" << endl;
    int arr4[] = {1, 3, 5};
    int arr5[] = {2, 4, 6};
    
    ListNode* list1 = createList(arr4, 3);
    ListNode* list2 = createList(arr5, 3);
    ListNode* list3 = nullptr; // Empty list
    
    cout << "First list:  ";
    displayList(list1);
    cout << "Second list: ";
    displayList(list2);
    cout << "Third list:  ";
    displayList(list3);
    
    merged = mergeThreeLists(list1, list2, list3);
    cout << "Merged list: ";
    displayList(merged);
    cout << endl;
    
    deleteList(merged);
    
    // Test case 3: Different lengths
    cout << "Test Case 3: Different lengths" << endl;
    int arr6[] = {1, 8};
    int arr7[] = {2, 3, 4, 5};
    int arr8[] = {6, 7, 9, 10, 11, 12};
    
    ListNode* listA = createList(arr6, 2);
    ListNode* listB = createList(arr7, 4);
    ListNode* listC = createList(arr8, 6);
    
    cout << "First list:  ";
    displayList(listA);
    cout << "Second list: ";
    displayList(listB);
    cout << "Third list:  ";
    displayList(listC);
    
    merged = mergeThreeLists(listA, listB, listC);
    cout << "Merged list: ";
    displayList(merged);
    cout << endl;
    
    deleteList(merged);
    
    // Test case 4: All empty lists
    cout << "Test Case 4: All empty lists" << endl;
    merged = mergeThreeLists(nullptr, nullptr, nullptr);
    cout << "Merged list: ";
    displayList(merged);
    cout << endl;
    
    // Test case 5: Duplicate values
    cout << "Test Case 5: Duplicate values" << endl;
    int arr9[] = {1, 3, 5, 5};
    int arr10[] = {2, 3, 4};
    int arr11[] = {1, 4, 6};
    
    ListNode* listX = createList(arr9, 4);
    ListNode* listY = createList(arr10, 3);
    ListNode* listZ = createList(arr11, 3);
    
    cout << "First list:  ";
    displayList(listX);
    cout << "Second list: ";
    displayList(listY);
    cout << "Third list:  ";
    displayList(listZ);
    
    merged = mergeThreeLists(listX, listY, listZ);
    cout << "Merged list: ";
    displayList(merged);
    
    deleteList(merged);
    
    return 0;
}
ListNode* mergeThreeLists(ListNode* first, ListNode* second, ListNode* third) {
    // Create a dummy head for easier manipulation
    ListNode dummy(0);
    ListNode* current = &dummy;
    
    // Keep merging until all lists are exhausted
    while (first || second || third) {
        // Find the minimum value among the current heads
        int minVal = INT_MAX;
        int minList = -1;
        
        // Check first list
        if (first && first->val <= minVal) {
            minVal = first->val;
            minList = 1;
        }
        
        // Check second list
        if (second && second->val <= minVal) {
            minVal = second->val;
            minList = 2;
        }
        
        // Check third list
        if (third && third->val <= minVal) {
            minVal = third->val;
            minList = 3;
        }
        
        // Add the minimum node to result and advance the corresponding list
        if (minList == 1) {
            current->next = first;
            first = first->next;
        } else if (minList == 2) {
            current->next = second;
            second = second->next;
        } else if (minList == 3) {
            current->next = third;
            third = third->next;
        }
        
        current = current->next;
        if (current) {
            current->next = nullptr; // Clean up the connection
        }
    }
    
    return dummy.next;
}
