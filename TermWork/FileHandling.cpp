// Abhinav Choudhary B.tech CST (49)
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    cout << "INPUT/OUTPUT\nAbhinav Choudhary\nB.tech CST 49\n";
    ofstream fout;
    string line;
    fout.open("sample.txt");
    cout << "Input String: ";
    getline(cin, line);
    fout << line << endl;
    fout.close();

    ifstream fin;
    string l;
    fin.open("sample.txt");
    getline(fin, l);
    cout << "String in File: " << l << endl;
    fin.close();
    return 0;
}
