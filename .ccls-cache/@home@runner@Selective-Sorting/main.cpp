#include <iostream>
#include <vector>

using namespace std;

void selection_sort(vector<int>& arr) {
  int n = arr.size();

  for (int i = 0; i < n - 1; i++) {
    int small = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[small]) {
        small = j;
      }
    }

    swap(arr[i], arr[small]);
  }
}

int main() {
  vector<int> v = {4, 2, 6, 1, 9};

  selection_sort(v);

  for (int num : v) {
    cout << num << " ";
  }
  cout << endl;

  return 0;
}