#include <iostream>
#include <string.h>

using namespace std;

void inverse(char nome[]);

int main()
{
  int _vector[10];
  char _char[10];
  float _float[10];

  for (int i = 0; i < 10; i++)
  {
    _vector[i] = i * 12;
    _char[i] = 'e';
    cout << _vector[i] << endl;
    cout << _char[i] << endl;
  }
  cout << "sizeof :" << sizeof(_vector) << "and: " << sizeof(_char) << endl;

  char nome[] = {'p', 'a', 'u', 'l', 'o'};
  char nome1[] = {'p', 'a', 'u', 'l', 'o', '\0'};

  int i = 0;
  //  while (nome1[i] != '\0'){
  while (nome1[i] != '\0')
  {
    cout << nome1[i];
    i++;
  }

  cout << " ";
  int x = 0;
  char nome2[] = "Paulo";
  inverse(nome2);
  while (nome2[x])
  {
    cout << nome2[x++];
  }
  return 0;
}

void inverse(char nome[])
{
  //int size;
  int size = strlen(nome);
  //  for (size = 0; nome[size];size++);
  for (int i = size - 1; i >= 0; i--)
    cout << nome[i];
  cout << " ";
}
