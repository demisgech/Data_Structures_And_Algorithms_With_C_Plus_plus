#include "Sorting.hpp"

namespace Sorting {
template <typename T>
void swap(T& a, T& b) {
  T temp = a;
  a = b;
  b = temp;
}
}  // namespace Sorting
