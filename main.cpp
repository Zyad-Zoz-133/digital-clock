#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <windows.h>

using namespace std;

int main()
{
    int sec, min, hou;
    int day, month, year;
    string status;
    int daysInMonths[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    cout << "Hours:";
    cin >> hou;
    cout << "Min:";
    cin >> min;
    cout << "Sec:";
    cin >> sec;
    cout << "PM/AM:";
    cin >> status;
    cout << "Day:";
    cin >> day;
    cout << "Month:";
    cin >> month;
    cout << "Year:";
    cin >> year;

    transform(status.begin(), status.end(), status.begin(), ::toupper);

    system("cls");

    while (true)
    {
        sec++;

        if (sec > 59)
        {
            sec = 0;
            min++;
        }
        if (min > 59)
        {
            min = 0;
            hou++;
        }
        if (hou > 12)
        {
            hou = 1;
        }
        if (hou == 12 && min == 0 && sec == 0)
        {
            if (status == "PM")
            {
                status = "AM";
                day++;
            }
            else
            {
                status = "PM";
            }
        }

        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            daysInMonths[2] = 29; 
        }
        else
        {
            daysInMonths[2] = 28;
        }

        if (day > daysInMonths[month])
        {
            day = 1;
            month++;
        }
        if (month > 12)
        {
            month = 1;
            year++;
        }

        cout << "\033[H";

        cout << hou << ":" << min << ":" << sec << " " << status
             << "\n   " << day << "/" << month << "/" << year << "   ";

        Sleep(1000);
    }

    return 0;
}