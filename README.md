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

Address:
    
    





0
