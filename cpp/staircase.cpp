#include <iostream>
#include<windows.h>

using namespace std;

void staircase(string message, int delay) {
    string staircase = "";

    for(int i = 0; i < message.length(); i++) {
        staircase += message[i];
        cout << staircase << endl;
        Sleep(delay);
    }

    while(staircase.length() != 0) {
        staircase.erase(staircase.length() - 1);
        cout << staircase << endl;
        Sleep(delay);
    }
}

int main() {
    string message = "";
    cout << "Message: ";
    getline(cin, message);

    string delayString = "";
    double delay = 0;
    cout << "Delay: ";
    getline(cin, delayString);

    if(!delayString.empty())
        delay = stod(delayString);
    else
        delay = 0;

    staircase(message, delay * 1000);
}
