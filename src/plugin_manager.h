#pragma once

#include <iostream>
#include <unordered_map>
#include <string>
#include <Windows.h>
#include <direct.h>
#include <vector>

using func_type = double(*)(double);

class PluginManager {
    std::string path;
    std::unordered_map<std::string, func_type> func_table;
    void addFunc(std::string const& name);
    std::string getPath();
public:
    PluginManager();
    double function(std::string const& name, double const& values);
    bool contains(std::string const& name);
};