//using endl makes it into a new line
#include <iostream>
//to simplify the code to remove the std:: multiple usage we can do:
using namespace std;

int main(){
    //if we want to print next to each other we can do it without using two cout like this:
    // std::cout << "testing" << std::endl
    //     << "program";

    //and then:
    // cout << "testing" << endl
    //     << "program";

    //exercise show the tax return of different rates
    //total sales, state tax, county tax, total tax

    int sales = 95000;
    double stateTax = .04;
    double countyTax = .02;

    double salesStateTax = sales * stateTax;
    double salesCountyTax = sales * countyTax;
    double totalSales = sales - salesCountyTax - salesStateTax;

    cout << "total state tax: " << salesStateTax << endl
        << "total county tax: " << salesCountyTax << endl
        << "total sales: " << totalSales;


return 0;
}