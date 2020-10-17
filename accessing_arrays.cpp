#include <iostream>
using namespace std;
int main()
{
    int ar[5];
    cout << "Enter elements: ";
    for(int i = 0; i < 5; i++)
        cin>> ar[i];
    cout<< "You entered: ";
    for(int i = 0; i < 5; i++)
        cout<<"\n"<<*(ar + i);
    return 0;
}
