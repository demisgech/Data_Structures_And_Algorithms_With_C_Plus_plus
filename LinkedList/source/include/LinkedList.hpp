#ifndef LINKEDLIST__HPP__
#define LINKEDLIST__HPP__

#include <cstdlib>

using namespace std;

template <typename T>
class LinkedList {
 private:
  class Node {
   public:
    T value;
    Node* next;
    Node(const T& value);
  };

  Node* head;
  Node* tail;
  size_t length;

 public:
  LinkedList(const T& value);
  ~LinkedList();

  void printList();
  T getHead() const;
  T getTail() const;
  size_t gitSize() const;

  void append(const T& value);
  void prepend(const T& value);

  void deleteLast();
  void deleteFirst();

  Node* get(size_t index) const;
  void set(size_t index, const T& value);

  void insert(size_t index, const T& value);
  void remove(size_t index);

  void reverse();
};

#include "../src/LinkedList.inl"

#endif  // LINKEDLIST__HPP__
