#include <iostream>
#include <string>

using namespace std;

#define MAX 100000

// Merge sort
void merge(int *arr, int low, int high, int mid)
{
  int i, j, k, c[MAX];
  i = low;
  k = low;
  j = mid + 1;
  while (i <= mid && j <= high)
  {
    if (arr[i] < arr[j])
    {
      c[k] = arr[i];
      k++;
      i++;
    }
    else
    {
      c[k] = arr[j];
      k++;
      j++;
    }
  }
  while (i <= mid)
  {
    c[k] = arr[i];
    k++;
    i++;
  }
  while (j <= high)
  {
    c[k] = arr[j];
    k++;
    j++;
  }
  for (i = low; i < k; i++)
  {
    arr[i] = c[i];
  }
}

void merge_sort(int *arr, int low, int high)
{
  int mid;
  if (low < high)
  {
    // divide the array at mid and sort independently using merge sort
    mid = (low + high) / 2;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid + 1, high);
    // merge or conquer sorted arrays
    merge(arr, low, high, mid);
  }
}

// read input array and call mergesort
int main()
{
  int myarray[MAX];
  int num, index = 0;

  while (scanf("%d", &num) != EOF)
  {
    myarray[index++] = num;
  }

  num = index;

  merge_sort(myarray, 0, num - 1);
  for (int i = 0; i < num; i++)
  {
    cout << myarray[i];
    if (i < num - 1)
    {
      cout << " ";
    }
  }
}