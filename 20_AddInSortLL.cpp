#include <iostream>

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class Solution {
public:
    Node* sortedInsert(Node* head, int data) {
        Node* newNode = new Node(data);
        if (head == nullptr || data < head->data) {
            newNode->next = head;
            return newNode; // The new node becomes the new head.
        }

        Node* current = head;
        while (current->next != nullptr && current->next->data < data) {
            current = current->next;
        }

        newNode->next = current->next;
        current->next = newNode;

        return head; // Return the original head.
    }
};

// Function to print the linked list
void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main() {
    Node* head = new Node(25);
    head->next = new Node(36);
    head->next->next = new Node(47);
    head->next->next->next = new Node(58);
    head->next->next->next->next = new Node(69);
    head->next->next->next->next->next = new Node(80);

    Solution solution;
    int dataToInsert = 70;
    head = solution.sortedInsert(head, dataToInsert);

    printList(head);

    return 0;
}
