//
//  main.cpp
//  helloworldXcode
//
//  Created by Francesco Stella on 27/09/22.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    
    cout << "Cambiamento al codice" << endl;
    cout << "Prova 1" << endl;
    cout << endl;
}
