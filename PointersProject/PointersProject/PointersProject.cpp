#include <iostream>
#include <string>

using namespace std;

string answer; //Used to collect the inut from the user
string *pointerAnswer = &answer; //A pointer being declared to point at the user's answer
void welcome(); //Declaring the welcome function
string dataLocation(); //Declaring the dataLocation function

int main() 
{
	welcome(); //Putting the welcome function into main to execute
	dataLocation(); //Putting the welcome function into main to execute
	system("pause"); //Pausing main so it can be read
	return 0;
}

void welcome() //The actual welcome function
{
	cout << "Welcome to a data location simultion." << endl;
	cout << "Here you will be asked to input your name." << endl;
	cout << "After putting in your name the program will store it in a memory location." << endl;
	cout << "From here the program will inform you where you name was stored." << endl;
}

string dataLocation() //The actual dataLocation function
{
	cout << "Please enter your name: " << endl;
	cin >> answer; //Getting the user's input
	cout << "Your name is kept secret at loaction " << &answer << " in memory of your computer." << endl;
	cout << "The pointer, pointerAnswer, in this program holds the address of the variable, answer, which is stored at the location " << pointerAnswer << endl;
	cout << "The pointer, pointerAnswer, has the memory location of " << &pointerAnswer << endl;
	cout << "The pointer, pointerAnswer, is holding the memory location of the variable, answer, which has the value of " << *pointerAnswer << endl;
	return *pointerAnswer;
}