#include <iostream>
using namespace std;

double cubeRoot(double arg) {
    double epsilon = 1.0 / pow(10, 7);
    double xi = arg;
    double xiPrev;

    do {
        xiPrev = xi;
        xi = (1 / 3.0) * ((arg / (xiPrev * xiPrev)) + 2 * xiPrev);
    } while (abs(xi - xiPrev) >= epsilon);

    return xi;
}

int main()
{
    double num;

    cout << "Enter number: ";
    cin >> num;
    cout << "Standart formula: " << pow(num, 1.0 / 3) << endl;
    cout << "Custom iterative formula: " << cubeRoot(num) << endl;

    return 0;
}
