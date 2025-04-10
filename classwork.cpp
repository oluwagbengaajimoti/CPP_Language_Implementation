#include <iostream>
using namespace std;

int main() {
    int singleInt = 52;
    int arrayInt[5] = {12, 36};  // The rest of the array elements will be initialized to 0

    cout << singleInt << endl;
    cout << arrayInt[0] << endl;

    ++singleInt;
    ++arrayInt[0];

    cout << singleInt << endl;
    cout << arrayInt[0] << endl;

    singleInt = singleInt * 2;
    arrayInt[0] = arrayInt[0] * 2;

    cout << singleInt << endl;
    cout << arrayInt[0] << endl;

    return 0;
}
