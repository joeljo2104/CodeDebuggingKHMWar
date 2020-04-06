#include <iostream>
#include <math.h> //Imported math.h
using namespace std;
int main() {
    int num, d = 0, n, r, p = 0, a = 0; //Value of a changed to 0
    char choice;
    cin >> num; //cin << to cin >>
    cin >> choice; //cin << to cin >>
    switch (choice) //switch spelling
    {
    case 'a': //quotes & colon
        n = num;
        while (n != 0) //not equal to
        {
            n = n / 10;
            d++;
        }
        n = num;
        while (n != 0)
        {
            r = n % 10;
            a = a + pow(r, d); //Removed equal, * to +, sqr to pow
            n = n / 10;
        }
        cout << a << "\n";
        break; // added break
    case 'p': //quotes & colon
        n = num; 
        while (n != 0)
        {
            r = n % 10;
            p = p * 10 + r; // first + to *
            n = n / 10;
        }
        cout << p << "\n";
        break; // continue to break
    }
}


