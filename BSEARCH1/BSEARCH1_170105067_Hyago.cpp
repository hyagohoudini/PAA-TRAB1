#include <iostream>

using namespace std;

#define MAX 100000

// funcao que faz a busca binaria
int bsearch(int a[], int x, int n)
{
  int mid, esq = 0;
  int dir = n - 1;
  while (esq < dir)
  {
    mid = esq + ((dir - esq) >> 1);
    if (a[mid] >= x)
      dir = mid;
    else
      esq = mid + 1;
  }
  if (a[esq] == x)
    return esq;
  else
    return -1;
}

int main()
{
  int a[MAX], n, q, x;

  cin >> n;
  cin >> q;

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }

  while (q--)
  {
    scanf("%d", &x);
    printf("%d\n", bsearch(a, x, n));
  }
  return 0;
}