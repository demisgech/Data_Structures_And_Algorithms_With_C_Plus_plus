#include "Sorting.hpp"

namespace Sorting {

template <typename T>
void bubbleSort(T data[], size_t size) {
  for (int i = size - 1; i > 0; --i) {
    for (size_t j = 0; j <= i; j++) {
      if (data[j + 1] < data[j]) {
        swap(data[j + 1], data[j]);
      }
    }
  }
}

template <typename T>
void bubbleSort(vector<T>& data) {
  for (int i = data.size() - 1; i >= 0; --i) {
    for (size_t j = 0; j < i; j++) {
      if (data[j + 1] < data[j]) {
        swap(data[j + 1], data[j]);
      }
    }
  }
}
}  // namespace Sorting
