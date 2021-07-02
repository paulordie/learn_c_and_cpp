#include <iostream>
#include <string.h>

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
    int *pvetor1 = &vetor1[5]; //colocar indice 0 e print *(pvetor+1)

    i = 5;
    while (i >= 0)
    {
        cout << " while valor do vetor[0] em pvetor --: " << *pvetor1 << endl;
        pvetor1--;
        i--;
    }

    *pvetor1 = vetor1[0];
    cout << "valor incremento: " << *(pvetor1) << endl;

    cout << "valor incremento: " << *(pvetor1 + 1) << endl;

    cout << "valor incremento: " << *(pvetor1 + 2) << endl;
    //  int **ppvetor = &pvetor1;
    // int ***pppvetor = &ppvetor;
    // cout << "**ppvetor: " << **ppvetor << endl;
    //cout << "***pppvetor: " << ***pppvetor << endl;
    ////////////////////////
    // char word[100];
    // cin << word;

    char word[] = "Paulo";
    int size = strlen(word);
    char *pEndWord = &word[size - 1];
    char *pInitWord = &word[0];

    while (pEndWord != pInitWord || pEndWord == pInitWord) //pode ser true para facilitar
    {
        cout << *pEndWord << endl;
        if (pEndWord == pInitWord) //if(pEndWord-- == pInitWord)
            break;
        pEndWord--; //pode ser comentado
    }
    cout << endl;

    return 0;
}
