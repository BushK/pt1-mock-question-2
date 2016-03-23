#include <iostream>
#include <ctime>

#ifndef Time_H
#define Time_H

using namespace std;
class Time
{
	friend ostream &operator<<(ostream &, Time);
public:
	Time(int , int);// default constructor
	void get(int & ,int &); //accessor
	void set(int , int); //mutator
	Time operator ++(int);
	~Time(); //deconstructor
	private:
		int nHours = 0;
		int nMinutes = 0;
};
#endif
