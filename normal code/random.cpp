#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int no_of_numbers = 6;
    int first_number  = 1;

    // Once per programme, before the first call to rand()
    std::srand((unsigned int) std::time(0));

    int random = rand() % no_of_numbers + first_number;
    cout<<rand;

    return 0;
}
