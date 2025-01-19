#include <iostream>
#include <ctime>
using namespace std;

class timer{
    clock_t start;
public:
    timer();
    ~timer();
};

timer::timer()
{
    start = clock();
}

timer::~timer()
{
    clock_t end;
    end = clock();

    cout << "Elapsed Time: " << (end-start) / CLOCKS_PER_SEC;
}

int main()
{
    timer obj;
    
    char ch;
    cout << "Enter a character to waste some time: ";
    cin >> ch;

    return 0;
}