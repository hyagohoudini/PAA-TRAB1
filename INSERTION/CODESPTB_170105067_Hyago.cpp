#include <iostream>

using namespace std;

#define MAX_POS 100000
#define MAX_TESTS 5
#define MAX_NUM 1000000

int insertion(int vetor[], int n)
{
  int i, aux, pos, swaps = 0;

  for (i = 1; i < n; i++)
  {
    aux = vetor[i];

    pos = i - 1;

    while (pos >= 0 && (vetor[pos] > aux))
    {
      vetor[pos + 1] = vetor[pos];
      pos = pos - 1;
      swaps++;
    }
    vetor[pos + 1] = aux;
  }
  return swaps;
}

int main()
{
  int qtde_sort, qtde_pos, myarray[MAX_POS];

  cin >> qtde_sort;
  for (int i = 0; i < qtde_sort; i++)
  {
    cin >> qtde_pos;
    for (int j = 0; j < qtde_pos; j++)
    {
      cin >> myarray[j];
    }

    cout << insertion(myarray, qtde_pos) << endl;
  }
}