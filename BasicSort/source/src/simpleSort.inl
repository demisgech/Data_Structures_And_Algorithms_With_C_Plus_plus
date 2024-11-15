#include "Sorting.hpp"

namespace Sorting {

template <typename T>
void simpleSort(T data[], size_t size) {
  for (int i = 0; i < size - 1; ++i) {
    for (size_t j = i + 1; j < size; j++) {
      if (data[i] > data[j]) {
        swap(data[i], data[j]);
      }
    }
  }
}

template <typename T>
void simpleSort(vector<T>& data) {
  for (int i = 0; i < data.size() - 1; ++i) {
    for (size_t j = i + 1; j < data.size(); j++) {
      if (data[i] > data[j]) {
        swap(data[i], data[j]);
      }
    }
  }
}
}  // namespace Sorting
