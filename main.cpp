// COMSC210 | Lab 18 | Tanmayee Chalamalasetti
// IDE Used: VS Code

#include <iostream>
#include <string>
using namespace std;

const float min = 0.0;
const float max = 5.0;

// Struct with review attributes
struct ReviewNode {
  float rating;
  string comment;
  ReviewNode* next;
};

void displayReview(ReviewNode* head) {
  // Checks if the list is empty
  if (head == nullptr) {
    cout << "Empty. \n";
    return;
  }

  int count = 0;
  float total = 0.0;
  ReviewNode* current = head;

  while (current != nullptr) {
  }
}

int main() {
  int choice;
  cout << "Which linked list method should we use?\n";
  cout << "   [1] New nodes are added at the head of the linked list";
  cout << "   [2] New nodes are added at the tail of the linked list";
  cout << "   Choice: ";
  cin >> choice;

  while (choice != 1 && choice != 2) {
    cout << "ERROR: Please enter 1 or 2.\nChoice: ";
    cin >> choice;
  }

  bool addToHead = (choice == 1);
  return 0;
}