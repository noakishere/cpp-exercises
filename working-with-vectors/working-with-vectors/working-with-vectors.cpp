
#include "../../std_lib_facilities.h"

/*
 * Exercise 3 page 128
 */

vector<double> sortedVector(vector<double> vec) {
	vector<double> result;

	double temp = 0;
	for (int i = 0; i < vec.size(); ++i) {
		for (int j = i + 1; j < vec.size(); ++j) {
			if (vec[i] > vec[j]) {
				temp = vec[i];
				vec[i] = vec[j];
				vec[j] = temp;
			}
		}
	}

	result = vec;

	return result;
}

int main()
{
	vector<double> nums;
	for (double number; cin>>number;) {
		nums.push_back(number);
	}

	double total = 0;

	for (double num : nums) {
		total += num;
		
	}

	cout << total << endl;

	nums = sortedVector(nums);

	double smallest = nums[0];
	double largest = nums[nums.size()-1];
	double mean = total / nums.size();

	cout << "Smallest is: " << smallest << "\n" << "Largest is: " << largest << "\n" << "Mean is: " << mean << endl;

	return 0;
}


