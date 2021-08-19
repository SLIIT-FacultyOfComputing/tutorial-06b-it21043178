![logo](/resources/tutelogo.png)

## <div align="center">Tutorial 06</div>

## Objectives : Learn to create Classes and use Setters and Getters in C++

This week we will implement a class in C++.  Use your Repl.IT account and use the Instructions provided by your Instructors to complete the Tutorial.  All instructions are in the Repl.IT and GitHub Classrooms for the Tutorial Questions for Week 07. Please submit your solutions using Repl.IT itself.

## Exercise 1 - Student Class
![Exercise 1](/resources/Picture1.png)

Using the Student.h and Student.cpp Implement the ```Student``` class
### In Student.h
1.	Add the private properties ```studentId``` and ```name``` in the private section.
2.	Add a method called ```assignDetails()``` to assign the ```studentid``` and ```name```
3.	Add a method called ```display()``` to display the ```studentid``` and ```name```

```c++
class Student {
  // private section
  //    int studentId
  //    name <- 20 charcters
  
  // public section
  //    assignDetails() method declaration
  void assigndetails(int pstudentid, char pname[]);
  //    display() method declaration
}

```
### In Student.cpp
1.	Implement the Methods ```assignDetails()``` and ```display()```
```c++
#include "Student.h"
#include <iostream>

// Assign studentId and name
Student::assignDetails(int pstudentid, char pname[]) {
studentid = pstudentid;
strcpy(name, pname);
 }

// Display StudentId and Name
void Student::display() {
cout << "student id "<< studentid << endl;
cout << "name << endl;   
  
}
```
### In Excercise01.cpp
#include<iostream>
  #include"stduent .h"
  using namespace std;
  int main(){
1.	Do not change anything
   student mystd;
   mystd. assigndetails(1212, "amalinga:);
   mystd.display();
 //====================================
 
 return 0;
 }
  
  
## Exercise 2 - Rectangle Class
![Exercise 1](/resources/Picture2.png)

Using the Box.h and Box.cpp Implement the Box class
### In Box.h
1.	Write the prototypes for the **setters** for ```length```, ```width``` and ```height```
2.	Write the prototypes **getters** for ```length```, ```width``` and ```height```
```c++

    private:
       int length;
       int width;
       int height;
    public:
       // write prototypes of setters for length, width and height
       void setlength(int nlength);
        void set width(int nwidth;);
        void setheight(int nheight);  
       // write prototypes of getters for length, width and height 
       int getlength();
       int getwidth();
       int getheight();
       
    int calcVolume();
};
```
### In Box.cpp
1.	Implement the **setters** for ```length```, ```width``` and ```height```
2.	Implement the **getters** for ```length```, ```width``` and ```height```
3.	Implement the ```calcVolume()``` method
```c++
#include "Box.h"

// Implement setters and getters
void box::setlength(int nlength){
length = nlength;
}
void box::setwidth(int nwidth){
width = nwidth;
}
void box::setheight(int nheight){
height = nheight;
}
int box::getwidth(){
return width;
}
int box::getheight(){
return height;
}
int box::getlength(){
return length;
}

// Implmenet the calcVolume() unction
int Box::calcVolume() {
return height * length * width;
}
```

### In Exercise02.cpp
1.	Create a ```Box``` type object called box1
3.	Assign the keyboard input of ```length```, ```width``` and ```height``` to the box1 object using setters
4.	Do not change any other coding in the Exercise02.cpp

