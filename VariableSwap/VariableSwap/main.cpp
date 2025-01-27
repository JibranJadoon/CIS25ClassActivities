// Jibran Jadoon
#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int x = 3;
    int y = 5;
    
    cout << "Before swap: x = " << x << " y = " << y << endl;
    
    int temp = x;
    x = y;
    y = temp;
    
    cout << "After swap: x = " << x << " y = " << y << endl;
    return 0;
}
