#pragma once
#include "Hotel.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

const int size=200;

Hotel::Hotel(void){

}
int Hotel::no_Stars() const{
	return no_of_stars;
}
bool Hotel::Gym() const{

	if (gym == 1) {
		return true ;
	}
	else {
		return false;
	}
}
bool Hotel::Getpool() const{
	if (Pool == 1) {
		
		return  true;
	}
	else {
		return false;
	}
}
string Hotel::Free_meal() const{
	return free_meals;
}
string Hotel::getLocation() const{
	return location;
}
string Hotel::getCountry() const{
	
	return country;
}
string Hotel::getName() const{
	cout << name;
	return name;
}
int Hotel::GetRate() const{
	return rate;
}

void Hotel::setName(string na) const
{
	na = name;
}

void Hotel::setcontry(string con)const
{
	con = country;

}

void Hotel::setlocation(string loc)const
{
	loc = location;

}

bool Hotel::setNo_stars(int star)
{
	if ((star < 0) || (star > 5)) {
		return false;
	}
	else {
		no_of_stars = star;
		return true;
	}
}

bool Hotel::setGym(bool g)
{
	if ((g < 0) || (g >1)) {
		return false;
	}
	else {
		gym=g;
		return true;
	}
}

bool Hotel::setPool(bool P)
{
	if ((P<0) || (P>1)) {
		return false;
	}
	else {
		Pool = P;
		return true;
	}
}
void Hotel::setFreeMeals(string fm)const
{
	fm = free_meals;
}
bool Hotel::setRate(int rate1)
{
	if ((rate1 < 0) || (rate1 > 10)) {
		return false;
	}
	else {
		rate = rate1;
		return true;
	}
}
/*bool Hotel::setName(string name)
{

	return false;
}*/
