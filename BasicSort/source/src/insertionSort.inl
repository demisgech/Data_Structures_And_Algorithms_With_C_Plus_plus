#include <cstdlib>

#include "Sorting.hpp"

using namespace std;

namespace Sorting {

template <typename T>
void insertionSort(T data[], size_t size) {
  for (int i = 1; i < size; ++i) {
    T key = data[i];
    size_t j = i - 1;
    while (j >= 0 && key < data[j]) {
      data[j + 1] = data[j];
      --j;
    }
    if (j != i - 1)  // assign only if there was a move
      data[j + 1] = key;
  }
}
template <typename T>
void insertionSort(vector<T>& data) {
  for (int i = 1; i < data.size(); ++i) {
    T key = data[i];
    size_t j = i - 1;
    while (j >= 0 && key < data[j]) {
      data[j + 1] = data[j];
      --j;
    }
    if (j != i - 1)  // assign only if there was a move
      data[j + 1] = key;
  }
}
}  // namespace Sorting
