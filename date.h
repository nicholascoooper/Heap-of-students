#ifndef DATE_H_EXIST
#define DATE_H_EXIST

class Date{
	protected:
		string fullDate;
		int month;
		int day;
		int year;
	public:
		Date();
		void init(fullDate);
		void printDate();

};

#endif
