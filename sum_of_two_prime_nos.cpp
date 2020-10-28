#include <iostream>

using namespace std;
bool func(int x)
{
    int i;
    bool prime = true;
    for (i=2;i<=x/2;i++){
        if (x % i == 0){
            prime = false;
            break;
        }
    }
}
int main()
{
    int x,i;
    cout<<"enter a positive integer";
    cin>>x;

    if ( func(x))
        cout<<"can't be expressed";
    else
        for(i = 2; i <= x/2; ++i) {
            if (func(i)) {
                if(func(x-i)){
                    cout << x << " = " << i << " + " << x-i << endl;
                }
            }
        }
}
