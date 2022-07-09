#include <iostream>

using namespace std;

int *apply_all(int const *const arr1, size_t size1, int const *const arr2, size_t size2)
{
  int *new_arr = new int[size1 * size2];

  size_t pos{0};
  for (size_t i{0}; i < size1; i++)
    for (size_t j{0}; j < size2; j++)
      new_arr[pos++] = arr1[i] * arr2[j];

  return new_arr;
}

void print(int const *const arr, size_t size)
{
  cout << "[ ";
  for (size_t i{0}; i < size; i++)
    cout << arr[i] << " ";
  cout << "]" << endl;
}

int main()
{
  const size_t array1_size{5};
  const size_t array2_size{3};

  int array1[]{1, 2, 3, 4, 5};
  int array2[]{10, 20, 30};

  cout << "Array 1: ";
  print(array1, array1_size);

  cout << "Array 2: ";
  print(array2, array2_size);

  int *result = apply_all(array1, array1_size, array2, array2_size);
  constexpr size_t result_size{array1_size * array2_size};

  cout << "Result: ";
  print(result, result_size);

  delete[] result;

  cout << endl;
  return 0;
}