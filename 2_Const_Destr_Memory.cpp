#include <iostream>
#include <cstring> // to use strcpy
#include <cstdlib> // to use malloc and free
using namespace std;

#define SIZE 255

class strtype{
    char *p;
    int len;
public:
    strtype();
    strtype(const char *str);
    ~strtype();
    void set(const char *str);
    void show();
};

strtype::strtype()
{
    p = (char*) malloc(SIZE);
    len = 0;
}

strtype::strtype(const char *str)
{
    p = (char*) malloc(SIZE);

    if(strlen(str)>= SIZE){
        cout << "String is too big";
        len = 0;
        return;
    }

    strcpy(p, str);
    len = strlen(str);
}

strtype::~strtype()
{
    free(p);
}

void strtype::set(const char *str)
{
    if(strlen(str)>= SIZE){
        cout << "String is too big";
        return;
    }
    strcpy(p, str);
    len = strlen(str);
}

void strtype::show()
{
    cout << p << " - length - " << len << endl;
    return;
}

int main()
{
    strtype s1, s2;
    
    s1.set("This is a test.");
    s2.set("I like C++.");

    s1.show();
    s2.show();

    s1.set("This is a test.");
    s1.show();

    return 0;
}
