#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string file_name, my_string ="";
    char mychar = '\n';
    cin >> file_name;
    ifstream myfile (file_name.c_str());
    if (myfile.is_open()){
        while (myfile){
        //cout << my_string << endl;
        //myfile >> my_string; // читает по словестно, пробелы и символы переноса теряются
        
        //cout << mychar;
        //mychar = myfile.get(); // для посимволного чтения
        
        cout << my_string << endl;
        getline (myfile, my_string); // для построчног чтения
        
        }    
    }
    ofstream out (file_name.c_str()); // если надо закрыть, раньше, чем по завершению работы файла
    return 0;
}
