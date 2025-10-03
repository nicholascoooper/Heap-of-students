#ifndef ADDRESS_H_EXIST
#define ADDRESS_H_EXIST

class Address{
	protected:
		std::string street;
		std::string city;
		std::string state;
		std::string zip;
	public:
		Address();
		void init(std::string string, std::string city, std::string state, std::string zip);
		void printAddress();
};

#endif
