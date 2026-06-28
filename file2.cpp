#include <iostream>
#include <string>

using namespace std;

namespace Greeting {
    void sayHello(string name) {
        cout << "Hello, " << name << "!" << endl;
    }
}

int main() {
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    
    Greeting::sayHello(name);
    
    return 0;
}
