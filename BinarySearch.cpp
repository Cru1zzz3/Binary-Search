#include <iostream>
#include <conio.h>
using namespace std;

#define lenght 256

int binary_search_func(int secretNumber){
	int low = 0;
	int high = lenght;
	int mid = (low + high) / 2;
	int steps = 0;

	while (mid != secretNumber){
		if (secretNumber < mid) 
					high = mid-1;
			else
					low = mid+1;
	
		mid = (low + high)/2;
		steps++;
	}	

	cout << "Amount of steps: " << steps << endl; 
	return mid;
}		

int log(int maxDeg){
	int logValue = 0;
	while (maxDeg < lenght){
		maxDeg = maxDeg << 1;
		logValue++;
	}
	cout << "Max difficulty search is: " << logValue << endl;
	return logValue;
}

int main (){
	
	int secretNumber;
	int answer;
	int maxDeg = 1;
	cout << "Input secret number " << endl;
	cin >> secretNumber;

	maxDeg = log(maxDeg);
	answer = binary_search_func(secretNumber);
	
	cout << "Answer " << answer << " is correct!" << endl;
	secretNumber = getch();
		return 0;
}