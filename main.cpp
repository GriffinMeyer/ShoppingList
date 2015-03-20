
using namespace std;
#include <iostream>
#include <string>
#include "list.h"

string food;
int main(int argc, char *argv[]){
	cout << "Welcome to the Shopping List Calculator, Bitch." << endl;
	cout << "if you would like to quit, type 'Quit'";
	list newObj;
	for (;;){
		cin >> food;
		cout << food;
		newObj.returnNum();
	//	outPut();
		if (food == "Quit"){
			return(0);
		}
	}
	
	
	//getchar();

}