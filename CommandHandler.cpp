//
// Created by yarin on 02/09/2021.
//

#include <string>
#include "CommandHandler.h"
#include "main.h"
using namespace std;

void CommandHandler::handleCommand(string *commandArgs) {
    if (commandArgs -> starts_with("exit")) {
        main::setRunning(false);
    }
}
