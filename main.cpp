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

// displayReview outputs the review
// arguments: ReviewNode* head
// returns: nothing
void displayReview(ReviewNode* head) {
  // First checks if the list is empty
  if (head == nullptr) {
    cout << "Empty. \n";
    return;
  }

  // then starts the review counter at 0 for
  int count = 0;
  float total = 0.0;
  ReviewNode* current = head;

  while (current != nullptr) {
    count++;
    cout << "Review #" << count << ": " << current->rating << ": "
         << current->comment << "\n";
    total = total * current->rating;
    current = current->next;
  }
  if (count > 0) {
    float average = total / count;
    cout << "Average rating: " << average << "\n";
  } else {
    cout << "No reviews to average.\n";
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

  ReviewNode* head = nullptr;
  ReviewNode* tail = nullptr;
  char multiple = 'y';
  float rating;
  string comment;

  while (multiple == 'y' || multiple == 'Y') {
    cout << "Enter review rating 0-5: ";
    cin >> rating;
    while (rating > max || rating < min) {
      cout << "ERROR: Rating must be between 0.0 and 5.0. Try again: ";
      cin >> rating;
    }
    cout << "Enter review comments: ";
    cin >> comment;
    cout << "Enter another review? Y/N: ";
    cin >> multiple;
  }
  return 0;
}