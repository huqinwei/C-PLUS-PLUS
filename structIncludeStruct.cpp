#include<iostream>
using namespace std;
struct ss1{
        int a;
        double b;
        struct aa{
                int aa;
                double cc;
        }aa;
        int c;
}ss1;
struct ss2{
        int a;
        double b;
        struct aa{
                int aa;
                double cc;
        };
        int c;
}ss2;
int main()
{
        cout << sizeof(ss1) << endl;
        cout << sizeof(ss2) << endl;

}
