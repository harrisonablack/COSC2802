#include <iostream>
using namespace std;

int main(){
	double loan;
	double payment;
	double interest;
	int c;

	cin >> loan;
	cin >> payment;
	cin >> interest;

	while (loan-payment>0.0){
		loan += (loan * interest);
		loan -= payment;
		c++;
	}

	cout << c << " payments" << endl;

	if ()

	return 0;
}
