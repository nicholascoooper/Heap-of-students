#ifndef STUDENT_H_EXIST
#define STUDENT_H_EXIST

class Studet{
	protected:
		string fullStudent;
		string firstName;
		string lastName;
		Address* address;
		Date* birthDate;
		Date* gradDate;
		int credits;
	public:
		student();
		~student();
		void init(fullStudent);
		void printStudent();
		string getFirstName();
		string getLastName();
		int getCreditHours();
};

#endif
