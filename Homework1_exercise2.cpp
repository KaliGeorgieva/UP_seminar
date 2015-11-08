#include <iostream>

using namespace std;

int main()
{
    int start, last, step, sum=0;

    cout << "Enter start, end and step:" << endl;
    cin >> start >> last >> step;

    for(int i=start; i<=last; i=i+step){
        sum+=i;
        }

    cout << sum;

    return 0;
}
