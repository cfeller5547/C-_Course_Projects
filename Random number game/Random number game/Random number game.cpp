using namespace std;
#include <iostream>
#include <time.h> 

int main()
{
	int MAXTRIES =11;
	int MAXNUM = 1024;

	srand(time(NULL));
	int random = rand() % MAXNUM;
	int guesses = 0;
	int num;

	while (guesses++ < MAXTRIES) {
		cout << "please guess a number between 1 and " << MAXNUM << ": " << endl;
		cin >> num;
		if (num < random) {
			cout << "your number is to small please try again" << endl;
		}
		else if (num > random) {
			cout << "your number is to large please try again" << endl;
		}
		else if (num == random){
			cout << "congrats, you won in " << guesses << " guesses." << endl;
			return 0;
		}
			
	}
	cout << "you lost. you did not guess the correct (" << random << ") number in " << guesses-1 << " guesses." << endl;

}

