#include <iostream>

using namespace std;

int main()
{

    int vetor[] = {1, 23, 33, 43, 53, 6, 73, 83, 93, 103, 113, 123};
    int *pvetor = &vetor[0];

    cout << "valor do vetor[0] em pvetor: " << *pvetor << endl;
    int i = 0;
    while (i < 5)
    {
        cout << " while valor do vetor[0] em pvetor: " << *pvetor << endl;
        pvetor++;
        i++;
    }

    /////
    int vetor1[] = {1, 223, 33, 43, 53, 6, 73, 83, 93, 103, 113, 12333};
    int *pvetor1 = &vetor1[5];

    i = 5;
    while (i >= 0)
    {
        cout << " while valor do vetor[0] em pvetor --: " << *pvetor1 << endl;
        pvetor1--;
        i--;
    }
    int **ppvetor = &pvetor1; 
    int ***pppvetor = &ppvetor;
    cout << "**ppvetor: " << **ppvetor << endl;
    cout << "***pppvetor: " << ***pppvetor << endl;

    return 0;
}