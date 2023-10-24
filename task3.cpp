#include<iostream>
#include<cctype>

using namespace std;

int main()
{
    setlocale(0, "");
    char station;
    cout << "Введите букву станции: ";
    cin >> station;
    station = tolower(station);
    
    switch (station) {
        case 'a':
            cout << "Время в пути до станции A: ..." << endl;
            break;
        case 'b':
            cout << "Время в пути до станции B: ..." << endl;
            break;
        case 'c':
            cout << "Время в пути до станции C: ..." << endl;
            break;
        case 'd':
            cout << "Время в пути до станции D: ..." << endl;
            break;
        case 'e':
            cout << "Время в пути до станции E: ..." << endl;
            break;
        default:
            cout << "Некорректный ввод." << endl;
            break;
    }
    
    return 0;
}
