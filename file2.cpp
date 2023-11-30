#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    ifstream fin("file2.txt");  // вывод данных из файл
    ofstream fout("file2.txt"); // ввод данных в файла
    int b;
    float x, y;

    for (int x = -9; x < 5; x++)
    {

        if (x >= -7 && x <= -3)
        {
            y = x + 7;
        }
        else if (x < -2)
        {
            y = 4;
        }
        else if (x <= 2)
        {
            y = x * x;
        }
        else if (x <= 4)
        {
            y = -2 * x + 8;
        }
        else if (x > -9 && x < -7 || x > 4 && x < 7)
        {
            y = 0;
        }
        fout << y << endl;        // cout << y << endl;
    }
    fout.close();
   
    vector<int> arr;
    while (fin >> b)
    {
        arr.push_back(b);
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    fin.close(); // закрываем файл
}