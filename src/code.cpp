#include "assignment/code.hpp"

#include <iostream>   // cout, printf
#include <algorithm>  // fill, copy

namespace assignment {

  // Task 1
  int squared_diff(int left, int right) {

    return (left - right) * (left - right);
  }

  // Task 2
  bool check_bit(int mask, int bit_pos) {
    if(mask >= 0 and bit_pos >= 0){
      if((mask & (1 << bit_pos )) == 0){
        return false;
      }else{
        return true;
      }
    }else {
      return false;
    }
  }

  // Task 3
  int max3(int left, int middle, int right) {

    int max = left;
    if(middle > max){
      max = middle;
    }
    if(right > max){
      max = right;
    }

    return max;
  }

  // Task 4
  void swap_args(int *left, int *right) {
    if(left != nullptr && right != nullptr) {
      int var = *right;
      *right = *left;
      *left = var;
    }
  }

  // Task 5
  int arr_sum(int *arr, int length) {

    int sum = 0;
    if(arr != nullptr) {
      for (int i = 0; i < length; i++) {
        sum += *(arr + i);
      }
    }

    return sum;
  }

  // Task 6
  int *find_max_elem(int *arr, int length) {

    int *maxelemptr = nullptr;
    if(arr != nullptr && length > 0){
      maxelemptr = &arr[0];
      int max = arr[0];
      for(int i = 1; i < length; i++) {
        if (arr[i] > max){
          max = arr[i];
          maxelemptr = &arr[i];
        }
      }
    }

    return maxelemptr;
  }

  // Task 7
  int *allocate_arr(int length, int init_value) {

    if(length > 0){
      int* arr = new int [length];
      std::fill(arr, arr + length, init_value);
      return arr;
    }

    return nullptr;
  }

  // Task 8
  int *clone_arr(int *arr_in, int length) {

    if(arr_in != nullptr && length > 0){
      int *clone_array = new int[length];
      for(int i = 0; i < length; i++){
        *(clone_array + i) = *(arr_in + i);
      }
      return clone_array;
    }

    return nullptr;
  }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {

    if(arr == nullptr){
      os << "Invalid argument: arr\n";
      return;
    }
    if(k <= 0) {
      os << "Invalid argument: k\n";
      return;
    }
    if(length <= 0){
      os << "Invalid argument: length\n";
    }
    for(int i = 0; i < length; i++){
      if(i % k == 0){
        os << arr[i] << "\t";
      }
    }
  }

}  // namespace assignment