#include <iostream>
using namespace std;
enum Months {
    Январь=1,
    Февраль,
    Март,
    Апрель,
    Май,
    Июнь,
    Июль,
    Августь,
    Сентябрь,
    Октябрь,
    Ноябрь,
    Декабрь,
};

int main()
{
    setlocale(LC_ALL, "rus");
    int num_month = 0;
    do
    {
       
        cout << "Введите номер месяца: ";
        cin >> num_month;
        switch (num_month)
        {
        case 0: cout << "До свидания" << endl; continue;
        case 1: cout << "Январь"<<endl; break;
        case 2: cout << "Февраль" << endl; break;
        case 3: cout << "Март" << endl; break;
        case 4: cout << "Апрель" << endl; break;
        case 5: cout << "Май" << endl; break;
        case 6: cout << "Июнь" << endl; break;
        case 7: cout << "Июль" << endl; break;
        case 8: cout << "Августь" << endl; break;
        case 9: cout << "Сентябрь" << endl; break;
        case 10: cout << "Октябрь" << endl; break;
        case 11: cout << "Ноябрь" << endl; break;
        case 12: cout << "Декабрь" << endl; break;
        default: cout << "Неправильный номер!" << endl;
            break;
        }
    } while (num_month != 0);
    return 0;
}

