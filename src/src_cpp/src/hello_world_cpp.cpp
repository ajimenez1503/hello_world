#include <iostream>
using namespace std;

bool is_even(int n)
{
    if (n % 2 == 0) {
        std::cout << "even" << std::endl;
        return true;
    } else {
         std::cout << "odd" << std::endl;
        return false;
    }
}

int main()
{
    std::cout << "Hello World CPP" << std::endl;
    is_even(5);
    is_even(6);
    return 0;
}