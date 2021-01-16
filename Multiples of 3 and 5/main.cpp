#include <iostream>

int main(){
	std::cout << "Find the sum of all multiples of 3 or 5 below 1000\n";

	int total = 0;

	// this code will increment i, which equals 0, all the way to 1000
	for (int i = 0; i < 1000; i++){
		// while incrementing to 1000
		// it'll check if i is a multiple of 3 or 5
		// if so, it'll add and compound to i
		if (i % 3 == 0 || i % 5 == 0){
			total += i;
			std::cout << total << "   ";
		}
	}

	// this code displays the total 
	std::cout << "\n\nThe sum of all multiples of 3 and 5 is " << total << "\n"; 

	system("pause");
	return 0;
}