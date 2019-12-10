#include <bits/stdc++.h>
using namespace std;

void Swap (int *a, int *b)
{
  int temp = *a;
  *a = *b; 
  *b = temp;
}

int main ()
{

  int n;
  cout << "Enter the number of elements in the array: " << endl;
  cin >> n;
  int arr[n];
  cout << "Enter array elements: " << endl;
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  for (int i = 0; i < n - 1; ++i) {
    int k = 0;
    for (int j = 1; j <= n - 1; ++j) {
      if (arr[j] < arr[j-1]) Swap (&arr[j], &arr[j-1]);
    }
    k++;
  }

  cout << "The sorted array is: " << endl;
  for (int i = 0; i < n; ++i) {
    cout << arr[i] << " ";
  }


  return 0;
}