#include <iostream>
#include <math.h>

using namespace std;
// Вариант 8.
// Написать программу, которая, используя минимальное количество оперативное памяти, найдет объем куба по известной стороне A (целое, 0<A<40).


int main() {
    short a;
    cout << "Input a value: "; cin >> a;
    cout << "The cube volume is " << pow(a, 3);
    return 1;
}