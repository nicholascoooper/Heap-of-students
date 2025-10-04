```mermaid
classDiagram

    class Address{
        #string street
        #string city
        #string state
        #string zip
        +Address()
        +void init(street, city, state, zip)
        +void printAddress()
    } 
    
    class Date{
        #string fullDate
        #int month
        #int day
        #int year
        +Date()
        +void init(fullDate)
        +void printDate()
        
    }

    class Student{
        #string fullStudent
        #string firstName
        #string lastName
        #Address* address
        #Date* birthDate
        #Date* gradDate
        #int credits
        +student()
        +~student()
        void init(fullStudent)
        void printStudent()
        string getFirstName()
        string getLastName()
        int getCreditHours()
    }

Student o-- Date
Student o-- Address

 ```
Date:
date.h
protected
month day year 
date date
date init
public
dat
init
printdate

date.cpp
includes
datedate(){
full
month 
day
year

datinit(){

dateprintdate(){

Address:
address.h
protctetd
street
city
state
zip

public
address()
init()
printAddress()

address.cpp
address adress(){
street 
city
state
zip

address init(){
strret = street
city = city
state = state
zip = zip

address printadress(){
cout street city state zip

Student:
student.h
protected
fullstudent
firstname
lastname
address
birthdate
graddate
credits

public
student()
~student()
init()
printstudent()
getfirstname()
getlastname()
getcredithours()

student.cpp
student student(){

student getfirstname(){

student getlastname(){

student getcredithours(){

studnet init(){

student printSTudent(){

~student(){

makefile
make 
address.o
date.o
student.o







0
