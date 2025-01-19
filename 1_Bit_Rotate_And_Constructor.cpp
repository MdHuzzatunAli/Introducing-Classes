#include <bits/stdc++.h>
using namespace std;

#define INT_BITS 32
#define LONG_LONG_BITS 64

class rotationClass{
public:
    rotationClass(){
        cout << "In constructor" << endl;
    }
    int leftRotate(int num, unsigned int d);
    long long leftRotate(long long num, unsigned int d);
    int rightRotate(int num, unsigned int d);
    long long rightRotate(long long num, unsigned int d);
};

int rotationClass::leftRotate(int num, unsigned int d)
{
    return ( num << d | num >> (INT_BITS - d) );
}

long long rotationClass::leftRotate(long long num, unsigned int d)
{
    return ( num << d | num >> (LONG_LONG_BITS - d) );
}

int rotationClass::rightRotate(int num, unsigned int d)
{
    return ( num >> d | num << (INT_BITS - d) );
}

long long rotationClass::rightRotate(long long num, unsigned int d)
{
    return ( num >> d | num << (LONG_LONG_BITS - d) );
}

int main(){
    rotationClass rotation; 
    int n = 16; 
    int d = 2; 
    cout << "Left Rotation of " << n << " by " << d 
            << " is "; 
    cout << rotation.leftRotate(n, d);

    long long num = 61;
    cout << "\nLeft Rotation of " << num << " by " << d 
            << " is "; 
    cout << rotation.leftRotate(num, d);
    
    cout << "\nRight Rotation of " << n << " by " << d 
         << " is "; 
    cout << rotation.rightRotate(n, d); 

    cout << "\nRight Rotation of " << num << " by " << d 
            << " is "; 
    cout << rotation.rightRotate(num, d);

    return 0;
}
