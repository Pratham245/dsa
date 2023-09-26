#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void printEvenNumbers(int N)
{

    cout << "Even: ";
    for (int i = 1; i <= 2 * N; i++)
    {

        // Numbers that are divisible by 2
        if (i % 2 == 0)
            cout << i << " ";
    }
}
void printOddNumbers(int N)
{

    cout << "Odd: ";
    for (int i = 1; i <= 2 * N; i++)
    {

        // Numbers that are mot divisible by 2
        if (i % 2 !=0)
            cout << i << " ";
    }
}

int main()
{

    int N = 5;

    printEvenNumbers(N);
    printOddNumbers(N);

    return 0;
}
