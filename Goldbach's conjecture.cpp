//********************************************************************************
//      Project 16  Goldbach's conjecture
//      Name    :- Yashwanth Reddy Muddireddy
//      Subject :- Programming Techniques
//      Date    :- 10/08/2016
//      Question:- Uva (543)
//               https://uva.onlinejudge.org/index.php?option=com_onlinejudge&
//				Itemid=8&category=24&page=show_problem&problem=484
//********************************************************************************
//                  Description
//                (input&output)
//The input file will contain one or more test cases.Each test case consists 
//of one even integer n with 6 ≤ n < 1000000.Input will be terminated by a //value of 0 for n.For each test case,one line of the form n = a + b, where a 
//and b are odd primes. Numbers and operators are separated by exactly one blank.
//If there is more than one pair of odd primes adding up to n,the pair with
//difference b − a is maximized.//**********************************************************************************
//I have written the entire program as turned in and have not copied this code, or parts of 
//this code from the internet or another student.                                                                                                                    
//                                                           Signature____________________
//***********************************************************************************

//include libraries
#include "iostream"
#include "vector"
#include "algorithm"
#include "cmath"

//constant value 
#define max 1000001

using namespace std;
int main()
{
	int n, num;

	//values can be upto 1000000 and sets every index true
	vector<bool> sieve(max, true);

	//o and 1 are not primes
	sieve[0] = false, sieve[1] = false;
	int s = sqrt(max);

	//loop that sets all multiplies of a number to false
	//primes are divisible by itself
	for (int i = 2; i <s ; i++)
	{
		if (sieve[i])
		{
			for (int j = i*i; j < max; j = j + i)
			{
				sieve[j] = false;
			}
		}
	}
	//2 is even prime but the ouput should contain only odd primes
	sieve[2] = false;
	
	//takes input & checks if 0
	cin >> num;
	while (num!=0)
	{
		//loop for a & b values and maximizing the differnce 
		//b-a,starts at 3 because 2 is even prime
		for (int k = 3; k < num; k++)
		{
			//checks if a is prime
			if(sieve[k])
			{
				//here temp is value b comming from decreasing the input number
				int temp = num - k;
				
				//checks if b is prime
				if (sieve[temp])
				{
					cout << num << " = " << k << " + " << temp << endl;
					
					//its like break thinking the maximum diff
					//is obtained between minimum prime value and 
					//number(prime) nearest to the given input number
					k = num;
				}
				
			}

		}
			//takes input to keep loop running until no value
			//is reached
			cin >> num;
	}


 return 0;
}

