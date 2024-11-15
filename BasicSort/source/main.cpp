#include <iostream>

#include "Sorting.hpp"

using namespace std;
using namespace Sorting;

int main() {
  int nums[] = {2, 3, 1, 4, 5};
  size_t size = sizeof(nums) / sizeof(nums[0]);

  // simpleSort(nums, size);
  // bubbleSort(nums, size);
  // selectionSort(nums, size);
  // insertionSort(nums, size);
  // for (const auto& num : nums) {
  //   cout << num << " ";
  // }

  vector<int> data = {2, 3, 1, 4, 5};
  // bubbleSort(data);
  // simpleSort(data);
  // selectionSort(data);
  insertionSort(data);
  for (const auto& d : data) {
    cout << d << " ";
  }
  return 0;
}