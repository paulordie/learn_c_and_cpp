#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> save = {1, 2, 3, 4, 5, 6, 7};
    int x = 10;
    char y = 'w';
    double z;

    cout << x << endl;
    cout << y << endl;
    cout << z << endl;

    for (int i = 0; i < save.size(); i++)
    {
        cout << "o valor do endereço é: " << i << " salva: " << save[i] << endl;
    }
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

    ///////lambda function

    // generic lambda, operator() is a template with two parameters
    // generic lambda, operator() is a template with two parameters
    auto glambda = [](auto a, auto &&b)
    { return a > b; };  // boolean < or >
    bool b = glambda(3, 3.14); // ok
    cout << "bool b: " << b << endl;

    // generic lambda, operator() is a template with one parameter
    auto vglambda = [](auto printer)
    {
        return [=](auto &&...ts) // generic lambda, ts is a parameter pack
        {
            printer(std::forward<decltype(ts)>(ts)...);
            return [=]
            { printer(ts...); }; // nullary lambda (takes no parameters)
        };
    };
    auto p = vglambda([](auto v1, auto v2, auto v3)
                      { cout <<" out: "<< v1 << v2 << v3 << endl; });
    auto q = p(1, 'a', 3.14); // outputs 1a3.14
    q();

}