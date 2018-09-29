#include <iostream>
#include <string.h>
using namespace std;

//求解公约数个数
int div(int x) {
	int num = 0;
	int i;
	for (i = 1; i*i < x; i++) {
		if (x%i == 0) {
			num+=2;
		}
		
	}
	if (i*i == x) {
		num++;
	}

	return num;
}

//奇数的公约数少于等于相近的偶数
int main()
{
	int lower, upper;
	int index,max=0,temp;

	cin >> lower;
	cin >> upper;
	
	if (lower % 2 == 0) {
		index = lower;
		while (index <= upper) {
			temp = div(index);
			if (temp > max) {
				max = temp;
			}
			index += 2;
		}
	}
	else {
		index = lower+1;
		while (index <= upper) {
			temp = div(index);
			if (temp > max) {
				max = temp;
			}
			index += 2;
		}
	}
	
	cout << max << endl;

	return 0;
}

