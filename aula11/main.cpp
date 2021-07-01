#include <iostream>

using namespace std;
//sem mudar o valor
void fooVar(int num)
{
    num = 20;
}

//mudar o valor
void fooVarMuda(int *num)
{
    *num = 20;
}

//mudar o valor
void fooVarMuda1(int &num)
{
    num = 30;
}

void fooVetor(int num[])
{
    num[0] = 400;
}

int main(int argc, char const *argv[])
{
    int var = 10;
    int *pvar;
    pvar = &var;
    cout << "Endereço &var: " << &var << " valor de var: " << var << endl;
    fooVar(var);
    cout << "valor de var: " << var << endl;

    fooVarMuda(pvar);
    cout << "Mudou o valor de var em pvar: " << var << endl;

    fooVarMuda1(var);
    cout << "Mudou o valor de var pelo endereço: " << var << endl;

    fooVarMuda(&var);
    cout << "Mudou o valor de var em &var: " << var << endl;

    /*
    //*pvar = 0;
    cout << "Antes da atribuição" << endl;
    cout << "valor de var: " << var << endl;
    cout << "valor de &var: " << &var << endl;
    cout << "valor de *pvar: " << *pvar << endl;
    cout << "valor de pvar: " << pvar << endl;

    pvar = &var; // vai salvar o endereço da var em pvar
    cout << "Depois da atribuição" << endl;
    cout << "valor de var: " << var << endl;
    cout << "valor de &var: " << &var << endl;
    cout << "valor de *pvar: " << *pvar << endl;
    cout << "valor de pvar: " << pvar << endl;

    *pvar = 33;
    cout << "valor mudou de *pvar: " << *pvar << endl;
    cout << "valor de var agora: " << var << endl;
    */
    //////

    int *vetor1 = new int[12];

    int vetor2[10];
    vetor2[0] = 13;
    vetor2[1] = 132;
    vetor2[2] = 213;

    for (int i = 0; i < sizeof(vetor2) / sizeof(int); i++) //nao precisa mudar
        cout << "vetor2[i]:" << vetor2[i] << endl;
    cout << "*(vetor2) para o '[0]'" << *(vetor2) << endl;
    cout << "*(vetor2 + 2)" << *(vetor2 + 2) << endl;
    cout << "Valor de vetor2[0]: " << vetor2[0] << endl;
    fooVetor(vetor2);
    cout << "Valor de mudado de vetor2[0]:" << vetor2[0] << endl;

    *(vetor1 + 0) = 101;
    *(vetor1 + 1) = 14;
    *(vetor1 + 2) = 122;

    cout << "valor de vetor1 0: " << *(vetor1 + 0) << endl;
    cout << "valor de vetor1 1: " << *(vetor1 + 1) << endl;
    cout << "valor de vetor1 2: " << *(vetor1 + 2) << endl;

    delete[] vetor1;

    ////////

    int *vetor = new int[10];

    vetor[0] = 10;

    cout << "valor de vetor: " << vetor[0] << endl;

    delete[] vetor;
    cout << "delete[] vetor: " << vetor << endl;
    vetor = NULL;
    cout << "vetor = NULL " << vetor << endl;

    return 0;
}
