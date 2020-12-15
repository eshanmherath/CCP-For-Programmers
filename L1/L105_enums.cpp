
#include <iostream>

using namespace std;

int main()
{
    enum DAYS
    {
        Sun,
        Mon,
        Tue,
        Wed,
        Thu,
        Fri,
        Sat
    };

    DAYS today;

    today = Fri;

    if (today == Fri)
    {
        cout << "Weekend is coming !!";
    }
    return 0;
}