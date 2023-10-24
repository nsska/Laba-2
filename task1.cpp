#include<iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    int totalVisitors;
    cout << "Введите общее количество посетителей спортзала за день: ";
    cin >> totalVisitors;
    
    int age;
    int minAge = INT_MAX;
    int maxAge = INT_MIN;
    int sumAge = 0;
    
    for (int i = 0; i < totalVisitors; i++) {
        cout << "Введите возраст посетителя #" << (i + 1) << ": ";
        cin >> age;
        
        if (age > maxAge) {
            maxAge = age;
        }
       if (age < minAge) {
            minAge = age;
        }
        
        sumAge += age;
    }
    double averageAge = sumAge / totalVisitors;

    cout << "Возраст самого молодого: " << minAge << " лет\n";
    cout << "Возраст самого старшего: " << maxAge << " лет\n";
    cout << "Средний возраст посетителей: " << averageAge << " лет\n";
    
    return 0;
}
