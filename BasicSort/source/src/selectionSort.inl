#include "Sorting.hpp"

namespace Sorting {

template <typename T>
void selectionSort(T data[], size_t size) {
  for (int i = 0; i < size - 1; ++i) {
    T temp = data[i];
    size_t minIndex = i;
    for (size_t j = i + 1; j < size; j++) {
      if (data[minIndex] > data[j]) minIndex = j;
    }
    if (minIndex != i) {
      swap(data[i], data[minIndex]);
    }
  }
}

template <typename T>
void selectionSort(vector<T>& data) {
  for (int i = 0; i < data.size() - 1; ++i) {
    T temp = data[i];
    size_t minIndex = i;
    for (size_t j = i + 1; j < data.size(); j++) {
      if (data[minIndex] > data[j]) minIndex = j;
    }
    if (minIndex != i) {
      swap(data[i], data[minIndex]);
    }
  }
}
}  // namespace Sorting
