#include <windows.h>
#include <string>
#include <iostream>
#include "CommandHandler.h"

using namespace std;

bool running = true;


typedef std::string str;

int main() {
    while (running) {
        str title = "QConsole";
        SetConsoleTitle(title.c_str());

        string cmd;
        getline(cin, cmd);

        int i = 0;

        if (cmd.length() != 0) {
            char charArray[cmd.length() + 1];
            strcpy(charArray, cmd.c_str());

            for (char c : charArray)
                if (c == ' ') {
                    i++;
                }
            string commandArgs[i + 1];
            i = 0;
            string word = " ";
            cmd += " ";

            for (char c : charArray) {
                if (c != ' ')
                    word += c;
                else {
                    commandArgs[i] = word;
                    word = "";
                    i++;
                }
            }
            if (i == 0) {
                commandArgs[0] = word;
            }

            CommandHandler::handleCommand(commandArgs);
        } else {
            cout << "Empty command! please enter something";
        }
    }
}