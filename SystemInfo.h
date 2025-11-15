#pragma once
#include <iostream>
#include <string>


class SystemInfo {
public:

    static double getCpuLoad();
    static double  getMemoryUsage();
    static double  getUptime();


};
