#include<iostream>
using namespace std;

	void Prod(int serBegin, int serEnd) {

		int difference = serEnd - serBegin;
		int product = serBegin;
		int crawler = serBegin + 1;
		cout << "difference is " << difference << endl;

		for (int i = 1; i <= difference; i++) {
			product = product * crawler;
			crawler++;
		}
		cout << "product of series " << serBegin << "-" << serEnd << " = " << product << endl;
		cout << "===================================================================" << endl;
		cout << " " << endl;
	}

	void Sum(int serBegin, int serEnd) {

		int difference = serEnd - serBegin;
		int sum = serBegin;
		int crawler = serBegin + 1;
		cout << "difference is " << difference << endl;

		for (int i = 1; i <= difference; i++) {
			sum = sum + crawler;
			crawler++;
		}
		cout << "sum of series " << serBegin << "-" << serEnd << " = " << sum << endl;
		cout << "===================================================================" << endl;
		cout << " " << endl;
	}

	void longProd(int serBegin, int serEnd) {
		long long difference = serEnd - serBegin;
		long long product = serBegin;
		long long crawler = serBegin + 1;
		cout << "difference is " << difference << endl;

		for (int i = 1; i <= difference; i++) {
			product = product * crawler;
			crawler++;
		}
		cout << "product of series " << serBegin << "-" << serEnd << " = " << product << endl;
		cout << "===================================================================" << endl;
		cout << " " << endl;
	}

	void longSum(int serBegin, int serEnd) {
		long long difference = serEnd - serBegin;
		long long sum = serBegin;
		long long crawler = serBegin + 1;
		cout << "difference is " << difference << endl;

		for (int i = 1; i <= difference; i++) {
			sum = sum + crawler;
			crawler++;
		}
		cout << "sum of series " << serBegin << "-" << serEnd << " = " << sum << endl;
		cout << "===================================================================" << endl;
		cout << " " << endl;
	}





int main(){
	int choice;
	int serBegin;
	int serEnd;
	int choiceLength;



	while (1) {
		/*
		if (choice == 1) {

		}


		if (choice == 2) {

		}
		else {
			cout << "goodbye" << endl;
			exit(1);
		}
		*/
		cout << "this program can either creat a sumation or a product of a" << endl;
		cout << " series of numbers. (ex.  prod(4,9) => 4 X 5 X 6 X 7 X 8 X 9)" << endl;
		cout << "enter 1 to create a product of a series " << endl;
		cout << "enter 2 to creat a sum of a series" << endl;
		cout << "enter anything else to quit" << endl;

		cin >> choice;

		switch (choice) {

		case 1:
				cout << "enter start of series" << endl;
				cin >> serBegin;
				cout << "enter end of series" << endl;
				cin >> serEnd;
				cout << "is your series small or large?" << endl;
				cout << "press 1 for a faster calculation, however answer is limited to 16 bits " << endl;
				cout << "press 2 for a slower calculation, however answer is limited to 64 bits " << endl;

				cin >> choiceLength;

				if (choiceLength == 1)
					Prod(serBegin, serEnd);
				else if (choiceLength == 2)
					longProd(serBegin, serEnd);
				else
					cout << "invalid number" << endl;
			break;

		case 2:
				cout << "enter start of series" << endl;
				cin >> serBegin;
				cout << "enter end of series" << endl;
				cin >> serEnd;
				
				cout << "is your series small or large?" << endl;
				cout << "press 1 for a faster calculation, however answer is limited to 16 bits " << endl;
				cout << "press 2 for a slower calculation, however answer is limited to 64 bits " << endl;

				cin >> choiceLength;

				if (choiceLength == 1)
					Sum(serBegin, serEnd);
				else if (choiceLength == 2)
					longSum(serBegin, serEnd);
				else
					cout << "invalid number" << endl;
			break;

		default:
			cout << "goodbye" << endl;
			exit(1);
		}
	}

return 0;
}
