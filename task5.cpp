#include<iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    int fingerNumber;
    cout << "Введите порядковый номер пальца руки: ";
    cin >> fingerNumber;
    
    string fingerName;
    
    switch (fingerNumber) {
        case 1:
            fingerName = "Большой палец";
            break;
        case 2:
            fingerName = "Указательный палец";
            break;
        case 3:
            fingerName = "Средний палец";
            break;
        case 4:
            fingerName = "Безымянный палец";
            break;
        case 5:
            fingerName = "Мизинец";
            break;
        default:
            fingerName = "Некорректный номер пальца";
            break;
    }
    
    cout << fingerNumber << " - " << fingerName << endl;
    
    return 0;
}
