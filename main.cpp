
using namespace std;
#include <iostream>
#include <string>
#include "list.h"
#include <map>

string temp;
string userInput;
int main(int argc, char *argv[]){
	cout << "Welcome to the Shopping List Calculator, Bitch." << endl;
	cout << "if you would like to quit, type 'Quit'";
	list newList;
	for (;;){
		cin >> userInput;
		//newList.returnNumPeople();
		if (userInput == "Quit"){
			return(0);
		}
		if (userInput == "new"){
			cin >> temp;
			cout << temp;
			map <char, int> newList;
			
		}
	}
	
	
	//getchar();

}