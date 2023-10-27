# Constructors-and-destructors

AIN
Constructors-and-Destructors

THEORY

Constructor in C++

A Constructor is a special member function of a class and shares the same name as of class, which means the constructor and class have the same name. Constructor is called by the compiler whenever the object of the class is created, it allocates the memory to the object and initializes class data members by default values or values passed by the user while creating an object. Constructors don’t have any return type because their work is to just create and initialize an object.

Syntax of Constructor:

class scaler {

public: // Constructor

scaler()
{ 


// Constructor body.

}

};

Destructor in C++

A Destructor is a member function that is instantaneously called whenever an object is destroyed. The destructor is called automatically by the compiler when the object goes out of scope, i.e., when a function ends, the local objects created within it are also destroyed. The destructor has the same name as the class name, but the name is preceded by a tilde(~). A destructor has no return type and receives no parameters.

Syntax of Destructor:

class scaler

{

public:

//constructor

scaler();


//destructor

~scaler(); 



ALGORITHM 


Default constructor
1.Include the necessary header file for input and output operations, i.e., .

2.Declare the use of the std namespace to avoid having to prepend std:: before standard library objects like cout and cin.

3.Define a class named student with the following private data members:

4.int rollno to store the student's roll number.

5.char name[50] to store the student's name (as a character array).

6.double fee to store the student's fee.

7.Define a constructor for the student class:

8.The constructor prompts the user to enter the roll number, name, and fee using cout and cin. It reads the input values into the respective data members. Define a public member function display:

9.The display function is used to display the student's information, including roll number, name, and fee. It uses cout to print these values. In the main function:

10.Create an instance of the student class named s. This invokes the constructor, prompting the user to input student information.

11.Call the display member function of the s object to display the student's information.

Defining the constructor inside the class
1.Include the necessary header file for input and output operations, i.e., .

2.Declare the use of the std namespace to avoid having to prepend std:: before standard library objects like cout and cin.

3.Define a class named date with the following private data members:

int d to store the day.
int m to store the month.
int y to store the year.
4.Define an inline constructor for the date class:

5.The constructor is automatically invoked when an instance of the class is created.

6.It prompts the user to enter the day, month, and year using cout and cin. It reads the input values into the respective data members.

7.Define a public member function display:

8.The display function is used to display the day, month, and year using cout.

9.In the main function:

10.Create an instance of the date class named d2. This invokes the constructor, prompting the user to input the date.

11.Call the display member function of the d2 object to display the date.

Defining the constructor outside the class
1.Include the necessary header file for input and output operations, i.e., .

2.Declare the use of the std namespace to avoid having to prepend std:: before standard library objects like cout and cin.

3.Define a class named student with the following private data members:

4.int rollno to store the student's roll number.

5.char name[50] to store the student's name (as a character array).

6.double fee to store the student's fee.

7.Declare the constructor student() and the member function display() within the class. The constructor is declared but not defined within the class.

8.Outside the class definition, define the constructor student::student():

9.The constructor is defined using the scope resolution operator :: to specify that it belongs to the student class.

10.It prompts the user to enter the roll number, name, and fee using cout and cin. It reads the input values into the respective data members.

11.Outside the class definition, define the member function student::display():

12.The display function is defined similarly using the scope resolution operator.

13.It is used to display the student's information, including roll number, name, and fee, using cout.

14.In the main function:

15.Create an instance of the student class named s. This invokes the constructor, prompting the user to input student information.

16.Call the display member function of the s object to display the student's information.

Write the parametrised constructor
1.Include the necessary header file for input and output operations, i.e., .

2.Declare the use of the std namespace to avoid having to prepend std:: before standard library objects like cout.

3.Define a class named construct with the following private data members:

int a to store an integer value.
int b to store another integer value.
Declare a parameterized constructor within the class:
4.The constructor takes two integers, int m and int n, as parameters.

5.Inside the constructor, it assigns the value of m to the data member a and the value of n to the data member b. This initializes the object's a and b with the values passed during object creation.

6.Define a member function display within the class:

7.The display function is used to display the values of a and b using cout.

8.In the main function:

9.Create an instance of the construct class named p and pass the values 10 and 20 as arguments to the constructor. This initializes a to 10 and b to 20 for the p object.

10.Call the display member function of the p object to display the values of a and b.

Copy of constructor
1.Include the necessary header file for input and output operations, i.e., .

2.Declare the use of the std namespace to avoid having to prepend std:: before standard library objects like cout.

3.Define a class named Wall with the following private data members:

double length to store the length of the wall.
double height to store the height of the wall.
Define a parameterized constructor within the class:
4.The constructor takes two double parameters, double len and double hgt, to initialize the length and height data members of the Wall object.

5.Define a copy constructor within the class:

6.The copy constructor takes a reference to a Wall object, Wall& obj, as a parameter.

7.It initializes the data members of the current Wall object with the values from the obj object, effectively creating a copy of the obj object.

8.Define a member function calculateArea within the class:

9.The calculateArea function calculates the area of the wall using the formula area = length * height.

10.It returns the calculated area as a double.

11.In the main function:

12.Create an instance of the Wall class named wall1 with a length of 10.5 and a height of 8.6 using the parameterized constructor.

13.Create another instance of the Wall class named wall2 and initialize it with the values from wall1 using the copy constructor.

14.Calculate and print the area of both wall1 and wall2 using the calculateArea member function.

The use of constructors and destructors in C++
1.Include the necessary header file for input and output operations, i.e., .

2.Declare the use of the std namespace to avoid having to prepend std:: before standard library objects like cout.

3.Declare a global integer variable count and initialize it to 0. This variable will be used to keep track of the number of destruct objects created.

4.Define a class named destruct with a constructor and a destructor:

The constructor increments the count variable and prints the current count when a destruct object is created.
The destructor decrements the count variable and prints the current count when a destruct object is destroyed.
In the main function:
5.Create three instances of the destruct class: aa, bb, and cc. This will invoke the constructor three times and increment the count variable.

6.Create a block scope using curly braces {} to create a new scope.

7.Inside this block scope, create an instance of the destruct class named dd. This will invoke the constructor and increment the count variable.

8.When the block scope ends, the dd object goes out of scope, and its destructor is automatically called, decrementing the count variable.

9.Finally, return 0 to end the program.
