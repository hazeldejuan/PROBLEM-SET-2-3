#include <iostream>
#include <string>

using namespace std;

int main(){
	string response;
	
	cout << "Do you want to print countdown?(yes/no):" ;
	cin >> response;
	
	if (response == "yes") {
		cout << "Countdown starting:\n";
		for (int a = 10; a >=1; a --){
			cout << a << endl;
		}
	} else{
		cout << "MAYBE NEXT TIME!" << endl;
	}
	
	return 0;
}