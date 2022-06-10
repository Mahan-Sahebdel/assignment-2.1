#include<iostream>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<cstring>
#include<cstdlib>
#include<fstream>
#include<vector>
#include<stdexcept>
#include<exception>
using namespace std;
bool f(const char* s1) {
	char* s2;
	s2 = new  char[strlen(s1) - 1];
	int c = 0;
	for (int i = 0; i < strlen(s1); i++) {

		if (s1[i] == ' ')
			continue;

		s2[c] = s1[i];

		c++;

	}
	s2[c] = '\0'; 


		if (strlen(s2) == 1) {
			return true;
		}

	if (s2[0] == s2[strlen(s2) - 1]) {


		*(s2 + strlen(s2) - 1) = '\0';
		const char* s3 = s2;


		return f(s3 + 1);



	}
	else {

		return false;
	}

}

int main() {
	cout << f("a man a plan a canalpanama");
	_getch();
}