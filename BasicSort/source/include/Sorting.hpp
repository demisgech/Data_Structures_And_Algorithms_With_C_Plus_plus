#ifndef SORTING__HPP
#define SORTING__HPP

#include <cstdlib>
#include <vector>

using namespace std;

namespace Sorting {
template <typename T>
void swap(T& a, T& b);

template <typename T>
void simpleSort(T data[], size_t size);

template <typename T>
void simpleSort(vector<T>& data);

template <typename T>
void bubbleSort(T data[], size_t size);
template <typename T>
void bubbleSort(vector<T>& data);

template <typename T>
void selectionSort(T data[], size_t size);

template <typename T>
void selectionSort(vector<T>& data);

template <typename T>
void insertionSort(T data[], size_t size);

template <typename T>
void insertionSort(vector<T>& data);
}  // namespace Sorting

#include "../src/bubbleSort.inl"
#include "../src/insertionSort.inl"
#include "../src/selectionSort.inl"
#include "../src/simpleSort.inl"
#include "../src/swap.inl"

#endif