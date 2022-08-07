// Hacking Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void nonHackedSwap(int x, int y);
void hackedSwap(int& x, int& y);

int main()
{
    int myBalanceTransaction = 300;
        int hackedBalanceTransaction = 1100;
    int myBalance = 150;
    int hackedBalance = 1000;
    cout << "Original Values\n";
    cout << "myBalance: " << myBalance << "\n";
    cout << "hackedBalance: " << hackedBalance << "\n\n";
    cout << "Calling nonHackedTransaction()\n";
    nonHackedSwap(myBalance, hackedBalance);
    cout << "myBalance: + 150 = 300""\n";
    cout << "hackedBalance: + 100 = 1100""\n\n";

    cout << "Calling hackedSwap()\n";
    hackedSwap(myBalanceTransaction, hackedBalanceTransaction);
    cout << "myBalance: " << myBalanceTransaction << "\n";
    cout << "hackedBalance: " << hackedBalanceTransaction << "\n";
    return 0;
}

void nonHackedSwap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}

void hackedSwap(int& x, int& y)
{
    int temp = x;
    x = y;
    y = temp;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
