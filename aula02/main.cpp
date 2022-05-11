#include <iostream>
#include <vector>

using namespace std;

int lengthVecInt(vector<int> vector){

    try
    {
        return sizeof(vector)/sizeof(int);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

int lengthVecIntPoint(vector<int> *vector){

    try
    {
        int value = sizeof(vector)/sizeof(int);
        value++;
        cout << "Lenght: " << value << endl;
        return value;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

int main()
{
    vector<int> save = {1, 2, 3, 4, 5, 6, 7};
    
    vector<int> vector_p = {1,2,3};
    vector<int> *vector_pp = &vector_p;

    cout << "address vector_app pointer: " << vector_pp << endl;
    cout << "value vector_app pointer: " << &vector_pp << endl;
    

    int x = 10;
    char y = 'w';
    char yy = 'y';
    double z;

    cout << "value x: " << x << endl;
    cout << "value y: " << y << endl;
    cout << "value int by yy: " << (int)yy << endl;
    cout << "value z: " << z << endl;

    for (int i = 0; i < save.size(); i++)
    {
        cout << "o valor do endereço é: " << i << " salva: " << save[i] << endl;
    }

    cout << "Size: " << sizeof(save)/sizeof(int) << endl;
    cout << "Size: " << lengthVecInt(save) << endl;
    int value = lengthVecIntPoint(vector_pp);
    cout << "Size: " << value << endl;

    int n1, n2;
    float res;
    int res2;

    n1 = 20, n2 = 15;

    res = (float)n1 / n2;

    res2 = n1 % n2;

    cout << res << endl;
    cout << res2 << endl;
    
    res2++;
    res2++;
    
    cout << res2 << endl;
    
    res2--;
    
    cout << res2 << endl;

    return 0;
}
