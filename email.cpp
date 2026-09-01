#include <iostream>
using namespace std;

int main() //kattis problem 5
{
    for (int r = 1; r <= 20; r++) {
        std::cout << "HIP HIP!" << std::endl;
    }
//kattis problem 4
int a, b;
    cin >> a;
    cin >> b;
 
    if (a > b) {
        cout << "MAGA!" << endl;
    }
    if (a < b) {
        cout << "FAKE NEWS!" << endl;
    }
    if (a == b) {
        cout << "WORLD WAR 3!" << endl;
    }
    return 0;
}
