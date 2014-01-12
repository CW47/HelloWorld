#include <iostream>

int fizzbuzz(int count);

int main(){
	fizzbuzz(1);
	return 0;
}

int fizzbuzz(int count){
	if (count % 3 == 0 && count % 5 == 0)
		std::cout << "FizzBuzz \n";
	else if (count % 3 == 0)
		std::cout << "Fizz \n";
	else if (count % 5 == 0)
		std::cout << "Buzz \n";
	else 
		std::cout << count << "\n";
	if (count < 100)
		return fizzbuzz(++count);
	else return 0;
		
}
