#include <iostream>
using namespace std;

enum class Months {
    January=1,Febuary,March,April,May,June,July,August,September,October,November,December,
};

int main()
{
    setlocale(LC_ALL, "rus");
 
    int value=0;
    
    do
    {
       
        cout << "Enter month number: ";
        cin >> value;

        switch (value) {
        case 0:cout << "Goodbye" << endl; continue;
        case static_cast<int>(Months::January): cout << "January" << endl; break;
        case static_cast<int>(Months::Febuary):cout << "Febuary" << endl; break;
        case static_cast<int>(Months::March):cout << "March" << endl; break;
        case static_cast<int>(Months::April):cout << "April" << endl; break;
        case static_cast<int>(Months::May):cout << "May" << endl; break;
        case static_cast<int>(Months::June):cout << "June" << endl; break;
        case static_cast<int>(Months::July):cout << "July" << endl; break;
        case static_cast<int>(Months::August):cout << "August" << endl; break;
        case static_cast<int>(Months::September):cout << "September" << endl; break;
        case static_cast<int>(Months::October):cout << "October" << endl; break;
        case static_cast<int>(Months::November):cout << "November" << endl; break;
        case static_cast<int>(Months::December):cout << "December" << endl; break;
        default: cout << "Wrong number!" << endl; continue;
        }
  
    } while (value != 0);

    
    return 0;
}

