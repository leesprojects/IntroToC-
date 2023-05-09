#include <iostream>
using namespace std;

class A {
public: 
	void methodA() {
        int input_var = 0;
        do {
            cout << "Enter a number (-1 = quit): ";
            if (!(cin >> input_var)) {
                cout << "You entered a non-numeric. Exiting..." << endl;
                break;
            }
            if (input_var != -1) {
                cout << "You entered " << input_var << endl;
            }
        } while (input_var != -1);
        cout << "All done." << endl;
        return;
	}
};