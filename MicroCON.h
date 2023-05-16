#pragma once

#include <iostream>
#include <Windows.h>

using namespace std;

void print(string args)
{
	cout << args;
}

void print(float args)
{
	cout << args;
}

void print(int args)
{
	cout << args;
}

void println(string args)
{
	cout << args;
	cout << "\n";
}

void println(float args)
{
	cout << args;
	cout << "\n";
}

void println(int args)
{
	cout << args;
	cout << "\n";
}

char toString(int args)
{
	char fr = args;
	return fr;
}

void delay(uint64_t time)
{
	Sleep(time);
}

void delay_s(uint32_t time)
{
	Sleep(time / 1000);
}