#include <iostream>
using namespace std;

int main() 
{
    bool A, B;
    cout << "Input two boolean values (0 or 1): ";
    cin >> A >> B;
    
    bool result = (!A && B) || !A;
    cout << "Result: " << result << endl;
    
    return 0;
}