#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int var = 999;
    int *p1;
    int *p2;
    p1 = &var;
    p2 = &var;

    cout << "var address: " << &var << endl;
    cout << "p1 address: " << p1 << endl;
    cout << "p1 address: " << p2 << endl;
    cout << "value p1: " << *p1 << endl;
    cout << "value p2: " << *p2 << endl;
    cout << "/***********************/" << endl;

    *p1 = 14;
    *p2 = 21;
    cout << "value *p1: " << *p1 << endl;
    cout << "value *p2: " << *p2 << endl;
    cout << "/***********************/" << endl;

    int vetor[] = {12, 34, 54};

    int *p3 = &vetor[0];
    int *p4 = &vetor[1];
    cout << "value *p3: " << *p3 << " address p3: " << p3 << endl;
    cout << "value *p4: " << *p4 << " address p4: " << p4 << endl;
    if (p3 < p4)
        cout << "p3 go before your address: " << p3 << endl;
    else
        cout << "p4 go before your address: " << p4 << endl;
    p3 = &vetor[2];
    cout << "/********** now p3 = &vetor[2] *************/" << endl;
    if (p3 < p4)
        cout << "p3 go before your address: " << p3 << endl;
    else
        cout << "p4 go before your address: " << p4 << endl;

    return 0;
}
