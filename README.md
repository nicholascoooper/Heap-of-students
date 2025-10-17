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


PART 2

in main.cpp:
bool keepgoing
create student vector

loadStudent(){
    while keepgoing{
        create inFile with ifstream
        open infile with students.csv
        create new student on heap
        append new student to vector
        close infile
        keepgoning false

printStudent(){
    cout fullStudent

while keepgoing{
cout please choose an option
0 quit
1 print all student names
2 print all student data
3 find a student

if 0{
    clear heap
    close infile
    keepgoing false
    exit program

elseif 1{
    for each student
        printStudent firstname lastname    

elseif 2{
    for each student 
        print fullstduent data

elseif 3{
    cout please enter a last name
        searchlastname
            go through each student
              string.find(searchlastname)
        
delete stduent off heap       



0
