#include <iostream>
using namespace std;

int main()
{
    int i, x;
    cin >> i;
    while (i > 0) {
        x = i % 10; //получаем остаток от деления на 10
        i = i / 10; //делим на 10
        cout << x << endl; 
    }

system("pause");
return 0;

}