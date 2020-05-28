/*
 * main.cpp
 *
 *  Created on: Apr 22, 2017
 *      Author: crazyhamada10
 */

#include "Assembler.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
	string folderPath, filename;
	cout << "Enter folder path: ";
	cin >> folderPath;
	cout << "Enter file name (with no extensions): ";
	cin >> filename;
	try {
        if (Assembler::Instance()->run(folderPath, filename)) {
        	cout << "Done";
        } else cout << "Error";
	} catch (string& msg) {
		cout << msg ;
	} catch (...) {
		cout << "Exception";
	}
	return 0;
}
