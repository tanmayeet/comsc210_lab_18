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

class ReviewList {
 private:
  ReviewNode* head;
  ReviewNode* tail;
  bool addToHead;
  ////

 public:
  ReviewList(bool mode) {
    head = nullptr;
    tail = nullptr;
  }
};

int main() { return 0; }