#include<iostream>
#include <cstring>
using namespace std;
int main()
{
    char a[20];
    char b[] = "Ali";
    strcpy(a, b);

    cout << a;

    return 0;
}
