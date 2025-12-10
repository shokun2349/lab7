#include<iostream>
using namespace std;

int main(){
    int num_input ;
    int odd = 0;
    int even = 0;
    while (num_input != 0)
    {
        cout << "Enter an integer: ";
        cin >> num_input;
        if (num_input == 0)
        {
            break;
        }
        if (num_input % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    
    
    cout << "#Even numbers = " << even << "\n";
    cout << "#Odd numbers = " << odd << "\n";
    return 0;
}
