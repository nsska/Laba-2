#include<iostream>
#include<string>

using namespace std;

int main()
{
    setlocale(0, "");
    string schedule[7] = {
        "Понедельник: Утренняя зарядка, Работа, Английский",
        "Вторник: Практикум по программированию",
        "Среда: Фитнес, Работа, Встреча с друзьями",
        "Четверг: Утренняя пробежка, Работа, Кино",
        "Пятница: Работа, Обед с семьей",
        "Суббота: Занятия по рисованию",
        "Воскресенье: Выходной, Пикник"
    };
    
    int day;
    cout << "Введите порядковый номер дня недели (от 1 до 7): ";
    cin >> day;

    if (day >= 1 && day <= 7) {
        cout << schedule[day - 1] << endl;
    } else {
        cout << "Некорректный ввод. Введите число от 1 до 7.";
    }
    
    return 0;
}
