// Litterally 7_12 but output string in reverse

#include <cctype>
#include <iostream>
using namespace std;

int main(){
	char str[100] = "This,is,a,test,string";
	char delim;
	int nth;
	int ite = 1;
	int i = 0;

	cin >> delim;
	cin >> nth;

	int left = 0;
	int right = 0;

	do {
		// cout << "Left " << left << " right " << right << endl;
		if (str[right]==delim || str[right]=='\0') {
			// Output nth string
			// cout << "ite: " << ite << endl;
			if ((ite) == (nth)) {
				cout << "Token: ";
				for (int j = right; j >= left; --j){
					cout << str[j];
				}
				cout << endl;
			}
		++ite;
		left = right + 1;
		right = left;
		}
		++right;
	}while (ite <=nth);

	


	return 0;
}
