// Q.2) Demonstrate the use of static variables in a class by using it 
// to count the number of objects created in the program.

#include <iostream>
using namespace std;

class Counter
{

    static int count;

    public:
        Counter()
        {
            count++;
        }
        static int getCount()
        {
            return count;
        }
};

int Counter::count = 0;

int main()
{
    Counter c1, c2, c3, d1, d2, d3;
   
    cout << "Counter::count = " << Counter::getCount() << endl;
    return 0;
}