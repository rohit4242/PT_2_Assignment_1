// Q.3) Write a program of overloading the binary + operator for
// time class. ( make neccesarry asumption)

#include <iostream>
using namespace std;

class time
{
    int hour, minute, second;
    public:
        time()
        {
            hour = minute = second = 0;
        }
        time(int h, int m, int s)
        {
            hour = h;
            minute = m;
            second = s;
        }
        time operator+(time t)
        {
            time temp;
            temp.hour = hour + t.hour;
            temp.minute = minute + t.minute;
            temp.second = second + t.second;
            if (temp.second >= 60)
            {
                temp.second -= 60;
                temp.minute++;
            }
            if (temp.minute >= 60)
            {
                temp.minute -= 60;
                temp.hour++;
            }
            if (temp.hour >= 24)
            {
                temp.hour -= 24;
            }
            
            return temp;
        }
        void display()
        {
            cout << hour << ":" << minute << ":" << second << endl;
        }
};

int main()
{
    time t1(1, 2, 3), t2(4, 5, 6);
    time t3 = t1 + t2;
    t3.display();

    return 0;
}
