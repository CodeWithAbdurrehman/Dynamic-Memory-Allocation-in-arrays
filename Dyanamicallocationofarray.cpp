#include <iostream>
using namespace std;
struct arr
{
    int a;
    int *arr1 = new int(a);
};
int main()
{
    int a;
    cout << "Enter how many arrays do you want: ";
    cin >> a;
    const int b = a;
    arr obj[b];
    cout << "Enter index";
    cin >> obj[b].a;
    cout << "Enter no in arrays" << endl;
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < obj[b].a; j++)
        {
            cin >> obj[i].arr1[j];
        }
    }
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < obj[b].a; j++)
        {
            cout << obj[i].arr1[j] << " ";
        }
    }
    delete []obj[b].arr1;
}