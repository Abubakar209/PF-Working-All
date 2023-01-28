#include <iostream>
using namespace std;
void printPer(float num);
main()

{
    float num;
    cout << "Enter a Range";
    cin >> num;
    printPer(num);
}

void printPer(float num)
{
    int num_2 = 0;
    int num_1;
    int sum = 0;
    float x1, x2, x3;
    for (float i = num; i >= 1; i = i - 1)
    {
        cout << "Enter number";
        cin >> num_1;

        sum = sum + num_1;
        if (num_1 > 3 && num_1 <= 11)
        {
            x1 = num_1;
        }

        if (num_1 <= 3)
        {

            num_2 = num_2 + num_1;

            x2 = num_2;
        }

        if (num_1 > 11)
        {
            x3 = num_1;
        }
    }

    float per_1 = (x1 / sum) * 100;
    float per_2 = (x2 / sum) * 100;
    float per_3 = (x3 / sum) * 100;
    double average=(x2*200+x1*175+x3*120)/sum;
    cout<<average<<endl;
    cout << "sum is " << sum << endl;
    cout << per_1 << endl;
    cout << per_2 << endl;
    cout << per_3 << endl;
    cout << num_2;
}
