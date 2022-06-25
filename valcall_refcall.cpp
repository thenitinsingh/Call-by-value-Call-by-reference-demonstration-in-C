#include <iostream>
using namespace std;
/*void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << a << " " << b;
    // return(a,b);
};
int main()
{
    int x, y;
    cout << "Enter two numbers\n";
    cin >> x >> y;
    swap(x, y);
}*/
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
};
int main()
{
    int x, y;
    cout << "Enter two numbers\n";
    cin >> x >> y;
    cout << "Values before swap " << x << " " << y << "\n";
    // swap(&x, &y) OR;
    swap(x, y);
    cout << "Values after swap " << x << " " << y;
}