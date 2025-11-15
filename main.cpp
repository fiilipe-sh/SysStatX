#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include "SystemInfo.h"
using namespace std;



int main() {
    while (true) {

        cout << "=== System Info (C++) ===\n\n";
        cout << "CPU Load:   " << SystemInfo::getCpuLoad() << "\n";
        cout << "RAM Usage:  " << SystemInfo::getMemoryUsage() << "%\n";
        cout << "Uptime:     " << SystemInfo::getUptime() << "s\n";

        cout << "\nAtualizando em 1s...\n";

        this_thread::sleep_for(chrono::seconds(1));





    }
    return 0;
}
