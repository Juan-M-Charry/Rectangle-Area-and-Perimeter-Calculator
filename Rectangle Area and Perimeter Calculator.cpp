#include <iostream>
using namespace std;

struct car
{

    string manufacter = " ";
    string model = " ";
    float fuel = 0.0;
    float miles = 0.0;
    bool registered = true;
    bool insured = true;
};

struct rectangle
{
    int length;
    int width;
};

int area(rectangle);
int perimeter(rectangle);

int main()
{

    rectangle r;
    do
    {
        if (!cin)
        {
            cout << "invalid number!\n";
            cin.clear();
            cin.ignore(256, '\n');
        }
        else if (r.length < 0)
        {
            cout << "Length must be positive\n";
        }

        cout << "ENTER LENGTH: " << endl;
        cin >> r.length;

    } while (!cin || r.length < 0);

    do
    {
        if (cin.fail())
        {

            cout << "Invalid number\n";
            cin.clear();
            cin.ignore(256, '\n');
        }

        else if (r.width < 0)
        {
            cout << "Width must be postive\n";
        }

        cout << "ENTER WIDTH: " << endl;
        cin >> r.width;

    } while (!cin || r.width < 0);

    area(r);
    perimeter(r);

    cout << "Perimeter: " << perimeter(r) << endl;
    cout << "Area: " << area(r) << endl;
}

int area(rectangle r)
{

    return r.length * r.width;
}

int perimeter(rectangle r)
{

    return 2 * r.length + 2 * r.width;
}
