/**
 * @file main.cpp
 * @author Adia Hite
 * @brief 
 * @version 0.1
 * @date 2025-10-27
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <iostream>
using namespace std;

int add(int a, int b);

int main()
{
    cout << "Greeting.\n";
    cout << "Hello world!" << endl;
    cout << " 3 + 5 = " << add(3,5) << endl;

    return 0;
}

int add(int a, int b)
{
    return a + b;
}
