#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

int minNo(int arr[], int n) {
  int minValue = INT_MAX;
  for (int i = 0; i < n; i++) {
    if (arr[i] < minValue) {
      minValue = arr[i];
    }
  }
  return minValue;
}

int maxNo(int arr[], int n) {
  int maxValue = INT_MIN;
  for (int i = 0; i < n; i++) {
    if (arr[i] > maxValue) {
      maxValue = arr[i];
    }
  }
  return maxValue;
}
void reverseArray(int arr[], int n) {
  int low = 0;
  int high = n - 1;
  while (low < high) {
    swap(arr[low], arr[high]);
    low++;
    high--;
  }
}
void printExtreme(int arr[], int n) {
  int low = 0;
  int high = n - 1;
  while (low <= high) {
    // if (low == high) {
    //   cout << arr[low] << " ";
    // }
    if (low == high) {
      cout << arr[low] << " ";
    } else {
      cout << arr[low] << " " << arr[high] << " ";
    }
    low++;
    high--;
  }
}
int getUnique(int arr[], int n) {
  int res = 0;
  for (int i = 0; i < n; i++) {
    res = res ^ arr[i];
  }
  return res;
}

void printPair(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << "(" << arr[i] << "," << arr[j] << ")" << endl;
    }
    cout << endl;
  }
}
void sortZerosOnes(int arr[], int n) {
  int countZeros = 0;
  int countOnes = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] == 0) {
      countZeros++;
    }
    if (arr[i] == 1) {
      countOnes++;
    }
  }
  // for (int i = 0; i < countZeros; i++) {
  //   arr[i] = 0;
  // }
  // for (int i = countZeros; i < n; i++) {
  //   arr[i] = 1;
  // }

  // int index = 0;
  // while (countZeros--) {
  //   arr[index] = 0;
  //   index++;
  // }
  // while (countOnes--) {
  //   arr[index] = 1;
  //   index++;
  // }
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}
void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}
void shiftByOne(int arr[], int n) {
  int temp = arr[n - 1];
  for (int i = n; i >= 1; i--) {
    arr[i] = arr[i - 1];
  }
  arr[0] = temp;
  printArray(arr, n);
}
void shiftByOne1(int arr[], int n) {
  int temp = arr[0];
  for (int i = 0; i < n - 1; i++) {
    arr[i] = arr[i + 1];
  }
  arr[n - 1] = temp;
  printArray(arr, n);
}

void shiftByK(int arr[], int n, int k) {
  int temp[k];
  for (int i = 0; i < k; i++) {
    temp[i] = arr[i];
  }
  for (int i = 0; i < n; i++) {
    arr[i] = arr[i + k];
  }
  for (int i = 0; i < k; i++) {
    arr[n - k + i] = temp[i];
  }
  printArray(arr, n);
}
void shiftByK1(int arr[], int n, int k) {
  int temp[k];
  for (int i = 0; i < k; i++) {
    temp[i] = arr[i + k - 1];
  }
  for (int i = 0; i < n; i++) {
    arr[k + i] = arr[i];
  }
  for (int i = 0; i < k; i++) {
    arr[i] = temp[i];
  }
  printArray(arr, n);
}

int main() {
  int arr[] = {10, 20, 30, 40, 50};
  int n = 5;
  int k = 3;
  shiftByK1(arr, n, k);

  return 0;
}
