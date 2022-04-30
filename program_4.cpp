// Q.4) Implement the multi level inheritance.


#include <iostream>
using namespace std;

class A
{
    public:
        void display_1()
        {
            cout << "A" << endl;
        }
};

class B : public A
{
    public:
        void display_2()
        {
            cout << "B" << endl;
        }
};

class C : public B
{
    public:
        void display_3()
        {
            cout << "C" << endl;
        }
};

int main()
{
    C c;
    c.display_1();
    c.display_2();
    c.display_3();
    
    return 0;
}
