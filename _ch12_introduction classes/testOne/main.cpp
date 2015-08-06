#include <iostream>

using namespace std;

class TestSomething{
    public:
        void coolSaying(){
            cout << "preachin to the choir" << endl;
        }
};

int main()
{
    TestSomething HayaObject; //Create link class from 'TestSomething' to 'HayaObject'
    HayaObject.coolSaying(); // dot to access inside class


    return 0;
}
