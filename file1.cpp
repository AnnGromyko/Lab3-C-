#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream fin("hello.txt");  // вывод данных из файл
    ofstream fout("hello.txt"); // ввод данных в файла
    string a;
    string b;

    cout << "txt: ";
    cin >> a;
    
    fout << a;
    fout.close();

    getline(fin, b);
    cout << b << endl;

    fin.close(); // закрываем файл
}