//
// Created by lenovo on 2023/7/5.
// recur.cpp -- using recursion
#include <iostream>
void countdown(int n);

int main()
{
    countdown(10);   //call the recursive function
    return 0;
}

void  countdown(int n)
{
    using namespace std;
    cout << "Counting down .... " << n << endl;
    if (n > 0)
        countdown(n-1);
    cout << n << ": Kaboom!\n";
}