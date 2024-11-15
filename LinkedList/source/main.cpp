#include <iostream>

#include "LinkedList.hpp"
using namespace std;

int main() {
  try {
    LinkedList<int>* linkedList = new LinkedList(2);
    linkedList->append(4);
    linkedList->prepend(5);

    // linkedList->deleteFirst();
    // linkedList->deleteLast();

    linkedList->insert(0, 18);
    linkedList->insert(2, 8);
    linkedList->insert(5, 38);

    linkedList->set(0, 7);
    auto value = linkedList->get(2)->value;
    cout << "Value: " << value << endl;

    // linkedList->printList();

    // linkedList->remove(5);
    // linkedList->remove(3);
    // linkedList->remove(0);

    linkedList->printList();

    linkedList->reverse();

    linkedList->printList();

  } catch (const LinkedListException& e) {
    std::cerr << e.what() << '\n';
  }

  return 0;
}