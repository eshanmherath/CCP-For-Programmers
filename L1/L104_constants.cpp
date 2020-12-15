#include <iostream>
using namespace std;

int main()
{
    const int wheels = 4;
    std::cout<< "Vehicle Wheels = "<< wheels << std::endl;

    // This is wrong. Will not compile. Constants can not be re-assigned
    wheels = 200;

    std::cout<< "Vehicle Wheels = "<< wheels << std::endl;
    return 0;
}