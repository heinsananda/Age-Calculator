/*
 * Class: CMSC140 CRN 46621
 * Instructor: Dr. Ara Kechiantz
 * Project<1>
 * Description: Use the script that was given to prototype a robot greeting.
 * Due Date: 06/19/22
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Ananda Heins

 * Pseudocode or Algorithm for the program:

	1.	DISPLAY “Hello, welcome to Montgomery College! My name is Nao. May I have your name?”
	2.	GET name and STORE it in visitorName.
	3.	DISPLAY “Nice to have you with us today” and visitorName followed by “!”
	4.	DISPLAY “Let me impress you with a small game.”
	5.	DISPLAY “Give me the age of an important person or a pet to you.”
	6.	DISPLAY “Please give me only a number:”
	7.	GET number and STORE it in age.
	8.	DISPLAY “You have entered” and age.
	9.	DISPLAY “If this is for a person, the age can be expressed as:”
	10.	CALCULATE age times 1 to get number of years.
	11.	DISPLAY result and “years”.
	12.	CALCULATE age times 12 to get number of months.
	13.	DISPLAY result and “months”.
	14.	CALCULATE age times 365 to get number of days.
	15.	DISPLAY result and “days”.
	16.	CALCULATE age times 8765.81278 to get the number of hours.
	17.	DISPLAY the result and “hours”.
	18.	CALCULATE age times 31556926 to get number of seconds.
	19.	DISPLAY result and “seconds”.
	20.	DISPLAY “Let's play another game,” and nameVisitor followed by “Give me a whole number.”
	21.	GET number and STORE it in randomNumber1.
	22.	DISPLAY “Very well. Give me another whole number.
	23.	GET number and STORE it in randomNumber2.
	24.	DISPLAY “Using the operator '+' in C++, the result of”
	25.	DISPLAY “randomNumber1 + randomNumber2 is”
	26.	CALCULATE randomNumber1 + randomNumber2.
	27.	DISPLAY result.
	28.	DISPLAY “Using the operator '/', the result of”.
	29.	DISPLAY ““randomNumber1 / randomNumber2 is”
	30.	CALCULATE “randomNumber1 / randomNumber2”
	31.	DISPLAY result.
	32.	DISPLAY “however, the result of”
	33.	DISPLAY “randomNumber1” in decimal form “/ randomNumber2” in decimal form.”
	34.	CALCULATE randomNumber1 in decimal form / randomNumber2 in decimal form.
	35.	DISPLAY result.
	36.	DISPLAY “Thank you for testing my program!!”
	37.	STORE programmer’s name Ananda Heins in programmersName.
	38.	STORE Due Date 06/11/22 in dueDate.
	39.	STORE project number 1 in projectNum.
	40.	DISPLAY “PROGRAMMER: “ and programmersName.
	41.	DISPLAY “CMSC140 Common Project” and projectNum
	42.	DISPLAY “Due Date:” and dueDate.

*/
#include <iostream> 
#include <iomanip> 
#include <string>  
using namespace std;

int main()
{
	//Declaring named constant.
	const string ROBOTS_NAME = "Atmos";
	const int HUMAN_YEAR = 1;
	const int MONTHS_YEAR = 12;
	const int DAYS_YEAR = 365;
	const int HOURS_DAY = 24;
	const int MINUTES_HOUR = 60;
	const int SECONDS_MINUTE = 60;
	const int DOG_YEARS = 7;
	const int GOLDFISH_YEARS = 5;
	const string PROGRAMMERS_NAME = "Ananda Heins";
	const string DUE_DATE = "06/19/22";
	int PROJECT_NUM = 1;

	//Declaring variables to store data.
	int hoursYear;
	int minutesDay;
	long long int secondsDay;
	long long int secondsYear;
	string VisitorName;
	int age;
	int randomNumber1;
	int randomNumber2;
	

	//Calculating how many hours are there in a year.
	hoursYear = HOURS_DAY * DAYS_YEAR;

	//Calculating how many seconds are there in a year.
	minutesDay = HOURS_DAY * MINUTES_HOUR;
	secondsDay = minutesDay * SECONDS_MINUTE;
	secondsYear = secondsDay * DAYS_YEAR;

	//Start displaying the script.
	cout << "**************** Robot Prototype Scripting ********************\n";
	cout << "\n";
	cout << "Hello, welcome to Montgomery College! My name is " << ROBOTS_NAME << ". May I have your name? \n";

	//Getting the value to be stored in the variable and displaying it + script.
	cin >> VisitorName;
	cout << "Nice to have you with us today, " << VisitorName << "!\n";

	//Displaying the next three lines of the script introducing the game.
	cout << "Let me impress you with a small game.\n";
	cout << "Give me the age of an important person or a pet to you.\n";
	cout << "Please give me only a number:\n";

	//Getting a value to be stored in the variable and displaying script + variable age.
	cin >> age;
	cout << "You have entered " << age << ".\n";

	//Displaying the next line of the script.
	cout << "If this is for a person, the age can be expressed as:\n";

	//Multiplying the following variables to get how many years the user has lived if it's a person.
	//Displaying it + the script.
	cout << (HUMAN_YEAR * age) << " years\n";

	//Multiplying the following variables to get how many months the user has lived if it's a person.
	//Displaying it + script.
	cout << "or " << (age * MONTHS_YEAR ) << " months\n";

	//Multiplying the following variables to get how many days the user has lived if it's a person.
	//Displaying results + script.
	cout << "or " << (DAYS_YEAR * age) << " days\n";

	//Multiplying the following variables to get how many years  the user has lived if it's a person.
	cout << "or " << (hoursYear * age) << " hours\n";

	//Multiplying the following variables to get how many second the user has lived if it's a person.
	//Displaying it + script.
	cout << "or " << (secondsYear * age) << " seconds.\n";

	//Multiplying the following variables to get how many years the user has lived if it's a dog.
	//Displaying results + script.
	cout << "If this is for a dog, it is " << (DOG_YEARS * age )<< " years old in human age.\n";

	//Multiplying the following variables to get how many year the user has lived if it's a goldfish.
	//Displaying it + script.
	cout << "If this is for a gold fish, it is " << (GOLDFISH_YEARS * age) << " years old in human age.\n";
	cout << "\n";

	//Displaying script + the visitor name.
	cout << "Let's play another game, " << VisitorName << ". Give me a whole number.\n";

	//Getting a whole number and storing it in the variable.
	cin >> randomNumber1;

	//Displaying script.
	cout << "Very well. Give me another whole number.\n";

	//Getting a second whole number and storing it in the variable.
	cin >> randomNumber2;

	//To proper display the script the sign "+" needed to be a string in double quotes.
	//Not using a \n because the line is not finished.
	cout << "Using the operator '+' in C++, the result of " << randomNumber1 << " + " << randomNumber2 << " is ";

	//Adding the two whole numbers and displaying it in the same line above.
	cout << (randomNumber1 + randomNumber2) << ".\n";

	//Displaying the script and the 2 whole numbers.
	//To display the script properly I followed the same process of the line before this one.
	//The "/" was entered as a string.
	//Line does not end just yet.
	cout << "Using the operator '/', the result of " << randomNumber1 << " / " << randomNumber2 << " is ";
	//Dividing the 2 whole numbers and displaying the result in the line above. 
	cout << (randomNumber1 / randomNumber2)<< ".\n";

	//Using setprecision(1) to display 1 decimal place instead of just the whole numbers.
	//Using << fixed << so there won't be the need to repeat it for each variable.
	//Using << showpoint << to display the trailing zero in the decimal place.
	cout << setprecision(1) << fixed << showpoint;

	//Displaying script and whole number 1.
	/*Whole number 1 is now a decimal so I'm casting it from an int to a double
	using static_cast<double>(randomNumber1).*/
	cout << "however, the result of " << static_cast<double>(randomNumber1) << " / ";

	//Displaying script and whole number 2 which is also a decimal now.
	//I'm using the same process with static_cast<> here.
	cout << static_cast<double>(randomNumber2) << " is about ";

	//Dividing the two numbers that are now decimals.
	//Displaying the result.
	cout << static_cast<double>(randomNumber1) / randomNumber2 << ".\n";
	cout << "\n";

	//Displaying thank you script and a space between lines.
	cout << "Thank you for testing my program!!\n";
	cout << "\n";

	//Displaying the programmer's name, due date and project number.
	cout << "PROGRAMMER: " << PROGRAMMERS_NAME << "\n";
	cout << "CMSC140 Common project " << PROJECT_NUM << "\n";
	cout << "Due Date " << DUE_DATE << endl;

	//Finishing the program.
	return 0;
}
