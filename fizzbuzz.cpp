//FizzBuzz
//This program outputs numbers from 1 t0 100
//It prints "Fizz" instead of nums divisible by 3 and "Buzz" for nums divisible by 5.
//If count is divisible by both 3 and 5 prints "FizzBuzz"

#include <iostream>

int fizzbuzz(int count);

int main(){
	fizzbuzz(1);
	return 0;
}

int fizzbuzz(int count){
	//divisible by 3?
	if (count % 3 == 0)
		std::cout << "Fizz";
	//divisible by 5?
	if (count % 5 == 0)
		std::cout << "Buzz";
	//divisible by neither?
	if((count % 3 != 0) && (count % 5 !=0))
		std::cout << count;
	//newline after output
	std::cout << "\n";
	//stop recursion if count == 100
	if (count < 100)
		return fizzbuzz(++count);
	else return 0;
		
}
