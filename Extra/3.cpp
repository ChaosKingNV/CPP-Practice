#include <iostream>
using namespace std;

class area
{
private:
    int h, b, r, a;

public:
    int square()
    {
        cout << "Enter length of side\n";
        cin >> a;
        cout << "Area of square is" << a * a;
    }
    int Rect()
    {
        cout << "Enter length and breath\n";
        cin >> h >> b;
        cout << "Area of rectangle  is" << h * b;
    }
    float tri()
    {
        cout << "Enter height and base\n";
        cin >> h >> b;
        cout << "Area of triangle is" << h * b * 0.5;
    }
    float cir()
    {
        cout << "Enter radius of circle\n";
        cin >> r;
        cout << "Area of circle is" << 3.14 * r * r;
    }
} area1;
int main()
{
    int q;
    cout << "1.Square\n2.rectangle\n3.Triangle\n4.circle\n"
         << "choose any one";
    cin >> q;
    switch (q)
    {
    case 1:
        area1.square();
        break;
    case 2:
        area1.Rect();
        break;
    case 3:
        area1.tri();
        break;
    case 4:
        area1.cir();
        break;
    default:
        cout << "Error in input";
    }
}