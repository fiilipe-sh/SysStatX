#pragma once
#include <iostream>
#include <string>


class Systeminfo {
public:

    static double getCpuLoad();
    static double  getMemoryUsage();
    static double  getUptime();


};
