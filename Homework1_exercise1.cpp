#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x, y, r;

    cout << "Enter x and y:" << endl;
    cin >> x >> y;

    bool p=true;

    r=(x+1)*(x+1)+y*y;

    if (r==1)
        cout << p << endl;
    else if ((x>=0 && x<=2 && y>=-1 && y<=0.5) || (x>=0 && x<=1 && y>=0.5 && y<=1))
        cout << p << endl;
    else if (r>=1 && (x>=-1 && x<=0 && y>=-1 && y<=1)){
        cout << p << endl;
    }
    else
        cout << !p << endl;

    return 0;
}
