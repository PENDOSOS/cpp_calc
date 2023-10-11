#pragma once

#include <iostream>
#include <string>
#include <Windows.h>
#include <stack>
#include <unordered_map>
#include "number.h"
#include "plugin_manager.h"

class Calculator
{
public:
	Calculator(Calculator const&) = delete;
	Calculator& operator = (Calculator const&) = delete;
	Calculator(Calculator&&) = delete;
	Calculator& operator = (Calculator&&) = delete;

	static Calculator& getInstance();

	std::string makeString(char* entry_arg);
	void makeEntryString(std::string const& str);

	void printResult();

	~Calculator();

private:
	Calculator();

	void initPriorityTable();
	void preprocess();
	void polishNotation();
	void calculate();

	PluginManager plugin_manager;

	std::vector<std::string> entry_string;
	std::unordered_map<std::string, int> priority_table;
	std::vector<std::string> output_string;

	typedef double (*pDeg) (double left, double right);
	HMODULE degDll;
};