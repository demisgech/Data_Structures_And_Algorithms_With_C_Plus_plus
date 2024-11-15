
#include "LinkedList.hpp"
#include "LinkedListException.hpp"
using namespace std;

template <typename T>
LinkedList<T>::Node::Node(const T& value) {
  this->value = value;
  this->next = nullptr;
}

template <typename T>
LinkedList<T>::LinkedList(const T& value) {
  Node* newNode = new Node(value);
  this->head = newNode;
  this->tail = newNode;
  this->length = 1;
}

template <typename T>
LinkedList<T>::~LinkedList() {}

template <typename T>
void LinkedList<T>::printList() {
  Node* temp = this->head;
  while (temp != nullptr) {
    cout << temp->value << " ";
    temp = temp->next;
  }
  cout << endl;
}

template <typename T>
T LinkedList<T>::getHead() const {
  if (head == nullptr) throw LinkedListException{"List is empty!"};
  return this->head->value;
}

template <typename T>
T LinkedList<T>::getTail() const {
  if (tail == nullptr) throw LinkedListException{"List is empty!"};
  return tail->value;
}

template <typename T>
size_t LinkedList<T>::gitSize() const {
  return length;
}

template <typename T>
void LinkedList<T>::append(const T& value) {
  Node* newNode = new Node(value);
  if (this->head == nullptr) {
    this->head = newNode;
    this->tail = newNode;
  } else {
    this->tail->next = newNode;
    this->tail = newNode;
  }
  this->length++;
}

template <typename T>
void LinkedList<T>::prepend(const T& value) {
  Node* newNode = new Node(value);
  if (this->head == nullptr) {
    this->head = newNode;
    this->head = newNode;
  } else {
    newNode->next = this->head;
    this->head = newNode;
  }
  this->length++;
}

template <typename T>
void LinkedList<T>::deleteFirst() {
  if (this->head == nullptr) {
    throw LinkedListException{"The list is empty!"};
  }

  Node* current = this->head;
  this->head = this->head->next;
  this->length--;
  delete current;
}

template <typename T>
void LinkedList<T>::deleteLast() {
  if (this->head == nullptr) {
    throw LinkedListException{"The list is empty!"};
  }
  Node* current = this->head;
  Node* pre = this->head;
  while (current->next != nullptr) {
    pre = current;
    current = current->next;
  }
  this->length--;
  this->tail = pre;
  this->tail->next = nullptr;
  if (this->length == 0) {
    this->head = nullptr;
    this->tail = nullptr;
  }
  delete current;
}

template <typename T>
typename LinkedList<T>::Node* LinkedList<T>::get(size_t index) const {
  if (index < 0 || index >= length) {
    throw LinkedListException{"Index out of range!"};
  }
  Node* current = this->head;
  for (int i = 0; i < index; i++) {
    current = current->next;
  }
  return current;
}

template <typename T>
void LinkedList<T>::set(size_t index, const T& value) {
  Node* current = get(index);
  current->value = value;
}

template <typename T>
void LinkedList<T>::insert(size_t index, const T& value) {
  if (index < 0 || index > length) {
    throw LinkedListException{"Index out of range!"};
  }
  if (index == 0) {
    prepend(value);
    return;
  }
  if (index == length) {
    append(value);
    return;
  }
  Node* newNode = new Node(value);
  Node* current = get(index - 1);
  newNode->next = current->next;
  current->next = newNode;
  length++;
}

template <typename T>
void LinkedList<T>::remove(size_t index) {
  if (index == 0) {
    deleteFirst();
    return;
  }
  if (index == length - 1) {
    deleteLast();
    return;
  }
  if (index < 0 || index >= length) {
    throw LinkedListException{"Index out of range!"};
  }
  Node* prev = get(index - 1);
  Node* current = prev->next;
  Node* next = current->next;
  prev->next = next;
  length--;
  delete current;
}

template <typename T>
void LinkedList<T>::reverse() {
  Node* current = this->head;
  this->head = this->tail;
  this->tail = current;
  Node* prev = nullptr;
  Node* next = current->next;

  for (size_t i = 0; i < length; ++i) {
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
  }
}
