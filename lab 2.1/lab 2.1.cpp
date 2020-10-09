#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double z1, z2, a, b, c;
    double pi = 4 * atan(1.);

    cout << "Введіть значення змінної 'a' : ";
    cin >> a;
    b = cos((3. / 8) * pi - (a / 4.)) * cos((3. / 8) * pi - (a / 4.));
    c = cos((11. / 8) * pi + (a / 4.)) * cos((11. / 8) * pi + (a / 4.));
    z1 = b - c;
    cout << "\n" << "Розв'язок першого рівняння: " << z1 << endl;
    //z2 = (sqrt(2)/2)*sin(a/2.);
    //cout << "Розв'язок другого рівняння: " << z2 << endl;
}