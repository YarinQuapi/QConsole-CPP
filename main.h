//
// Created by yarin on 03/09/2021.
//

#ifndef QCONSOLE_C___MAIN_H
#define QCONSOLE_C___MAIN_H

class main {

public:
    static bool running;
    static bool getRunning() {
        return running;
    }
    static bool setRunning(bool set) {
        running = set;
    }
};

#endif //QCONSOLE_C___MAIN_H
