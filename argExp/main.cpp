#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	for (int i = 0; i < argc; i++) {
		cout<<"Argument Number "<<i<<" was "<<argv[i]<<endl;
	}
	
	return 123;
}