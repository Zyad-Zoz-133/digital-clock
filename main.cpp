#include <iostream>
#include <windows.h>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;
int main()
{
    int sec, min, hou;
    string status;
    sec = min = hou = 0;
    cout << "Hours:";
    cin >> hou;
    cout << "Min:";
    cin >> min;
    cout << "Sec:";
    cin >> sec;
    cout << "PM/AM:";
    cin >> status;
    transform(status.begin(), status.end(), status.begin(), ::toupper);

    while (true)
    {
        if (sec > 58)
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
            hou = 0;
            if (status == "PM")
                status = "AM";
            else
                status = "PM";
        }
        sec++;
        system("cls");
        cout << hou << ":" << min << ":" << sec << " " << status;
        Sleep(1000);
    }

    // TODO Add the day,the month And the year
}
