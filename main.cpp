#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

    ofstream file;

    file.open("file.txt");

    file << "This is the first line\n";

    file << "This is the sec line\n";

    file << "This is the third line\n";

    file.close();

    ifstream new_file("file.txt");

    if (new_file.is_open())
    {
        string line;

        while (getline(new_file, line))
        {
            cout << line << endl;
        }

        new_file.close();
    }
    else
    {
        cout << "error with opening";
    }

    return 0;
}