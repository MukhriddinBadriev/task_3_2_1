#include <iostream>
using namespace std;
enum class Months {
    January=1,Febuary,March,April,May,June,July,August,September,October,November,December,
};

int main()
{
    setlocale(LC_ALL, "rus");
    Months month = Months::January;
    int value = static_cast<int>(month);
    do
    {
       
        cout << "Enter month number: ";
        cin >> value;
        
        switch (value)
        {
        case 0:cout << "Goodbye" << endl; continue;
        case 1: month = Months::January; break;
        case 2: month = Months::Febuary; break;
        case 3: month = Months::March ; break;
        case 4: month = Months::April; break;
        case 5: month = Months::May; break;
        case 6: month = Months::June; break;
        case 7: month = Months::July; break;
        case 8: month = Months::August; break;
        case 9: month = Months::September; break;
        case 10: month = Months::October; break;
        case 11: month = Months::November; break;
        case 12: month = Months::December; break;
        default: cout << "Wrong number!" << endl; continue;
        }

        switch (month) {
        case Months::January: cout << "January" << endl; break;
        case Months::Febuary:cout << "Febuary" << endl; break;
        case Months::March:cout << "March" << endl; break;
        case Months::April:cout << "April" << endl; break;
        case Months::May:cout << "May" << endl; break;
        case Months::June:cout << "June" << endl; break;
        case Months::July:cout << "July" << endl; break;
        case Months::August:cout << "August" << endl; break;
        case Months::September:cout << "September" << endl; break;
        case Months::October:cout << "October" << endl; break;
        case Months::November:cout << "November" << endl; break;
        case Months::December:cout << "December" << endl; break;
        }
  
    } while (value != 0);
    return 0;
}

