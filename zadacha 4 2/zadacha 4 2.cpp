#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "write number";
    cin >> N;

    switch (N) {
    case 1:
        cout << " Milka" << endl;
        break;
    case 2:
        cout << "Nescafe" << endl;
        break;
    case 3:
        cout << "Malboro" << endl;
        break;
    case 4:
        cout << "Coka Kola" << endl;
        break;
    case 5:
        cout << "Durex" << endl;
        break;
    default:
        cout << "Not found, try again" << endl;
    }

    return 0;
}