#include <iostream>
using namespace std;

void patients(int num);
main()
{

    int num;
    cout << "Enter Range: ";
    cin >> num;
    patients(num);
}

void patients(int num)
{

    int num_1;
    int untreaated = 0, treated = 0, doc;
    doc = 7;

    for (int i = num; i >= 1; i = i - 1)
    {
        cout << "Enter number of patients";
        cin >> num_1;
        if (num_1 <= doc)
        {
            treated = treated+ num_1;
        }
        if (num_1 > doc)
        {
            treated += doc;
            untreaated = untreaated + num_1 - doc;
        }
        if (i % 3 == 0 && untreaated > treated)
        {
            doc = doc + 1;
        }
    }
    cout << treated << " treated" << endl;
    cout << untreaated << "untreadted" << endl;
}