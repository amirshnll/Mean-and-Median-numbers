#include "stdafx.h"
#include "iostream"
#include "conio.h"
#include "fstream"
#include "algorithm"
#include "string"
using namespace std;

// Main Program
void main()
{
	ifstream inFile;
	float value;
	float sum = 0;
	int counter = 1;
	int i = 0;
	float mynumbers[100];

	inFile.open("numbers.txt");
    inFile >> mynumbers[i];
    while(!inFile.eof())
    {
		i++;
		counter++;
		inFile >> mynumbers[i];
		sum += mynumbers[i];
    }
    inFile.close();
	cout << "the mean : " << sum / counter << endl;
	sort(mynumbers, mynumbers + counter);
	cout << "the median : " << mynumbers[counter/2] << endl;

	// stay in console
	int stay;
	cin >> stay;
	return;
}