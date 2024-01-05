#include <iostream>
//the above is what lets us print on screen and get an input from keyboard

int main(){
    int num1 = 3;
    int num2 = 1;

    std::cout << "num1 before swap " <<num1 <<"\n";
    std::cout << "num2 before swap " <<num2<<"\n";

    int temp = num1;
    num1 = num2;
    num2 = temp;

    std::cout << "num1 after swap " << num1<<"\n";
    std::cout << "num2 after swap " <<num2<<"\n";

    return 0;
}