#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;
struct Room {
	int id;
	bool wifi;
	bool tv;
	bool status;
	int day;
	int month;
	int price;

};

#pragma once
class Hotel

{	
	int no_of_stars;
	bool gym;
	bool Pool;
	int rate;
public:
	string comments;
	Room room;
int no_of_rooms;
string name;
string location;
string country;
string free_meals;
//string time;
////

/////
	Hotel(void);
	string getName() const;
	string getCountry() const;
	string getLocation() const;
	string Free_meal() const;
	int no_Stars() const;
	bool Gym() const;
	bool Getpool() const;
	int GetRate() const;
 void setName(string) const;
	void setcontry(string)const;
	void setlocation(string)const;
	bool setNo_stars(int);
	bool setGym(bool);
	bool setPool(bool);
	void setFreeMeals(string)const;
	bool setRate(int);
	//bool setNo_Rooms(int);


};

