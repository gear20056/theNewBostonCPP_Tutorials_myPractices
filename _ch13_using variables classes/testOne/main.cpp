#include <iostream>
#include <string> //add this header file

using namespace std;

class TestSomething{
/*
public:
    string name;
*/

// Access to private class
public:
    void setName(string x){     //Change Name
        name = x;
    }
    string getName(){       //Get name
        return name;
    }

private:
    string name;


};

int main()
{
    /*
    TestSomething ha;
    ha.name = "Haya Aki";
    cout << ha.name;
    */
    TestSomething ha;
    ha.setName("Akikun");
    cout << ha.getName();
    return 0;
}
