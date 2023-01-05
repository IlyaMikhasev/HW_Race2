#include "Car.h"

Car::Car() :_speed(0), _acceliration(15), _cornering_speed(90), _odometr(0) {}

int Car::Get_Speed() const {
	return _speed;
}

void Car::Acceleration_speed(const char road_section) {
	if (road_section == '+' || road_section == '-')
		_speed = _cornering_speed;
	else
		_speed += _acceliration;
	Distance_traveled();
	TimeSection();
}

double Car::Get_odometr() const {
	return _odometr;
}

void Car::Set_Acceliration(int angle){
	_acceliration -= angle *0.5;
}

void Car::Set_cornering_speed(std::string& weather){	
		if (weather == "rain")
			_cornering_speed = 80;
		else
			if (weather == "snow")
				_cornering_speed = 60;
			else
				_cornering_speed = 90;				
}

double Car::Get_timeSection() const{
	return _time_section;
}

void Car::ResetParam(){
	_speed = 0;
	_acceliration = 15;
	_cornering_speed = 90;
	_time_section = 0;
}

void Car::TimeSection(){
	_time_section = 200.0 / _speed;
}

void Car::Distance_traveled() {
	_odometr += _speed / 1000.0;
}