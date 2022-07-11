﻿#include <iostream>
using namespace std;

enum class Months {
    January=1,Febuary,March,April,May,June,July,August,September,October,November,December,
};

int main()
{
    setlocale(LC_ALL, "rus");
    Months month = Months::January;
    
    int value=0;
    do
    {

        cout << "Enter month number: ";
        cin >> value;
        month = static_cast<Months>(value);
        switch (month) {
        case static_cast < Months>(0):cout << "Goodbye" << endl; continue;
        case (Months::January): cout << "January" << endl; break;
        case (Months::Febuary):cout << "Febuary" << endl; break;
        case (Months::March):cout << "March" << endl; break;
        case (Months::April):cout << "April" << endl; break;
        case (Months::May):cout << "May" << endl; break;
        case (Months::June):cout << "June" << endl; break;
        case (Months::July):cout << "July" << endl; break;
        case (Months::August):cout << "August" << endl; break;
        case (Months::September):cout << "September" << endl; break;
        case (Months::October):cout << "October" << endl; break;
        case (Months::November):cout << "November" << endl; break;
        case (Months::December):cout << "December" << endl; break;
        default: cout << "Wrong number!" << endl; continue;
        }

    } while (value != 0);
    

    return 0;
}

