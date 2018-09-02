#include <iostream>

using namespace std;

int main()
{
    int x= 100;

    cout << "Enter the score" <<endl;
    cin >> x;

    if ( (x >= 80) && (x<= 100) )
    {
        cout << "Your grade is:" << "   A";
    }
    else if ( (x>= 75) && (x< 80) ) {
        cout << "Your grade is:" << "   B+";
    }
    else if ( (x>= 70) && (x< 75) ) {
        cout << "Your grade is:" << "   B";
    }
    else if ( (x>= 65) && (x< 70) ) {
        cout << "Your grade is:" << "   C+";
    }
    else if ( (x>= 60) && (x< 65) ) {
        cout << "Your grade is:" << "   C";
    }
    else if ( (x>= 55) && (x< 60) ) {
        cout << "Your grade is:" << "   D+";
    }
    else if ( (x>= 50) && (x< 55) ) {
        cout << "Your grade is:" << "   D";
    }
    else if ( (x>= 45) && (x< 50) ) {
        cout << "Your grade is:" << "   E";
    }
    else {
        cout << "Your grade is:" << "   F";
    }
    return 0;
}
