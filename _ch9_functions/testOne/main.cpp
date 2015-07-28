#include <iostream>

using namespace std;

/*
//U need to order function to recognize first

void printSomething(){
    cout << "ooo Text in Other Functions." << endl;
}

int main()
{
    printSomething();
    return 0;
}
*/


//need to declare function first to recognize

void printSomething();

int main()
{
    printSomething();
    return 0;
}

void printSomething(){
    cout << "ooo Text in Other Functions." << endl;
}
