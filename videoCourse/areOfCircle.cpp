#define _USE_MATH_DEFINES
//the above needs to be added when using pi beacuse they arent defined as a constant
 
#include <cmath>
#include <iostream>

using namespace std;

int main(){
    //calculate area of circle
    double a;
    int r;

    cout << "Insert radius of circle: " << endl;
    cin >> r;

    a = M_PI * pow(r, 2);
    cout << "This is the area of the circle: " << a;


    return 0;
}