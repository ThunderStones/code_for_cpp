#include "../1.h"
#include <iomanip>
using namespace std;
int main()
{
    // cout << showpoint << 3.3600 << ' ' << 6546.5 << endl;
    int a(3);
    cout << ((a >= 2 && a <= 6) && (a % 2 != 1)) << endl
        << ((a >= 2 && a <= 6) && !(a % 2)) << endl
        << ((a >= 2 && a <= 6) || (a != 3) || (a != 5)); 
    
    
}