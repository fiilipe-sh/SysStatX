#include "SystemInfo.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;


double SystemInfo::getCpuLoad() {
    ifstrem file("/proc/loadavg");
     double load = 0;
     file >> load;

     return load;
}

double SystemInfo::getMemoryUsage() {
    ifstrem file("/proc/meminfo");
    string label;
    long total = 0, free = 0;
    file >> label >> total;
    file >> label >> free;

    return 100.0 - (free * 100.0 / total);
}


double SystemInfo::getUptime() {
    ifstream file("/proc/uptime");
    long uptime;
    file >> uptime;
    return uptime;

}
