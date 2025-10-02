```mermaid
classDiagram

    class Address{
        +string street;
        +string city;
        +string state;
        +int zip;    
    } 
    
    class Date{
        +int month;
        +int day;
        +int year;
    }

    class Student{
    +string firstName;
    +string lastName;
    +string address;
    +string birthDate;
    +string gradDate;
    +int credits;
    }

Student o-- Date
Student o-- Address

 ```
