#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include "date.h"

Date::Date(){
	Date::fullDate = " ";
	Date::month = 0;
	Date::day = 0;
	Date::year = 0;
}

void Date::init(std::string fullDate){
	std::stringstream ss;
	std::string tmonth;
	std::string tday;
	std::string tyear;

	ss.clear();
	ss.str(fullDate);

	std::getline(ss, tmonth, '/');
	std::getline(ss, tday, '/');
	std::getline(ss, tyear);
	ss.clear();

	ss << tmonth << " " << tday << " " << tyear;
	ss >> Date::month >> Date::day>> Date::year;

}

void Date::printDate(){
	std::cout<<month<<day<<year<<std::endl;
}
