//Lab7-3.cpp - calculates the average number of text
//messages sent each day for 7 days
//Created/revised by Hannah Haynes on 24 July 2024

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{	int day = 1;
    int dailyTexts = 0;
    int totalTexts = 0;
    double average = 0.0;

    while (day < 8)
    {
        cout << "How many text messages did you send on day " << day << "? ";
        cin >> dailyTexts;
        totalTexts += dailyTexts;
        day +=1;
    }   //end for

    average = static_cast<double>(totalTexts) / (day - 1);
    cout <<  fixed << setprecision(0);
    cout << "You sent an average of " << average << " text messages per day." << endl;

    return 0;
}   //end of main function
