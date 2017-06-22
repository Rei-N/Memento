#pragma once
#include <iostream>
#include <string>
using namespace std;

class Sorts {
public:
	int *arr;
	int n;
	bool asc;
	Sorts(int arrr[], bool asc, int n) : asc(asc), arr(arrr), n(n) {};
	void printSort();
	virtual void sortArr() = 0;
};

class Bubble : public Sorts 
{
public:
	Bubble(int aa[], bool asc, int n) : Sorts(aa, asc, n) {};
	void sortArr();
};

class Quick : public Sorts
{
private:
	int left, right;
public:
	Quick(int aa[], bool asc, int n) : Sorts(aa, asc, n) {};
	void sortArr();
};