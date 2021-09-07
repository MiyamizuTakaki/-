#include<iostream>
#include<string>
#include<fstream>
using namespace std;
struct choose
{
	string first;
	string second;
	string third;
};
int main()
{
	choose* chooses = new choose;
	cout << "Write first,finish press enter" << endl;
	cin >> chooses->first;
	cout << "Write second,finish press enter" << endl;
	cin >> chooses->second;
	cout << "Write third,finish press enter" << endl;
	cin >> chooses->third;
	cout << "We will copy youi write to save.txt.";
	string check1 = chooses->first;
	string check2 = chooses->second;
	string check3 = chooses->third;
	ofstream OUTFILE;
	OUTFILE.open("save.txt");
	OUTFILE << check1 << endl;
	OUTFILE << check2 << endl;
	OUTFILE << check3 << endl;
	delete chooses;
	return 0;
}
