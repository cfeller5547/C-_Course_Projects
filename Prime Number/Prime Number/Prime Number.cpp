
#include <iostream>
using namespace std;




bool IsPrime(int num) {
	if (num == 1 || num == 2) {
		return true;
	}
	else {
		int evendivisible = 0;
		int rem;
		for (int y = 1; y <= num; y++) {
			rem = num % y;
			if (rem == 0) {
				evendivisible++;
			}
		}
		if (evendivisible > 2)
			return  false;
	}
	return true;
}

int findnextprime(int startnum) {
	int count = startnum;
	while (IsPrime(count) == false) count++;
	return count;
}



int main() {
	for (int x = 0; x <= 10; x++) {
		cout << "enter a number" << endl;
		int num;
		cin >> num;
		int ret = findnextprime(num);
			cout << "The first prime number after: " << num << " is " << ret << endl;
		
		/*bool ret = IsPrime(num);
		if (ret) {
			cout << "The number: " << num << " is  prime" << endl;
		}
		else {
			cout << "The number: " << num << " is NOT prime" << endl;
		}*/
	}
}

