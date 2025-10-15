#ifndef DATE_H_EXIST
#define DATE_H_EXIST

class Date{
	protected:
		std::string fullDate;
		int month;
		int day;
		int year;
	public:
		Date();
		void init(std::string fullDate);
		void printDate();

};

#endif
