#include <iostream>

using namespace std;

int my_len(char *str)
{
    int size = 0;
    while (*str != '\0')
    {
        size++;
        str++; //incremento do ponteiro caso contrario ele nunca vai encontrar o '\0' indicando o final
    }
    return size;
}

char *my_string_cat(char *dest, char *orig)
{
    char *res;
    int size_dest = my_len(dest);
    int size_orig = my_len(orig);
    res = new char[size_dest + size_orig];

    char *p_res = res;//ops essa atribuição estarao apontando para o mesmo endereço

    while (*dest != '\0')
    {
        *p_res = *dest;//o que chegou é apontado para o *p_res
        p_res++;//incremento do ponteiro para o proximo endereço alocado
        dest++;//incremento do ponteiro para o proximo endereço da variável dest
    }
    while (*orig != '\0')
    {
        *p_res = *orig;
        p_res++;
        orig++;
    }
    *p_res = '\0';
    return res;
}

int main(int argc, char const *argv[])
{
    char *nome1 = new char[100];
    char *nome2 = new char[100];

    cout << "type first: ";
    cin >> nome1;
    cout << "type last: ";
    cin >> nome2;

    char *res = my_string_cat(nome1, nome2);
    cout << res << endl;
    cout << my_string_cat(nome1, nome2) << endl;

    delete[] nome1;
    delete[] nome2;
    nome1 = NULL;
    nome2 = NULL;

    res = NULL;

    return 0;
}
