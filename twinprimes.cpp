//********************************************************************************
//      Project (extra credit) Twin Primes
//      Name    :- Yashwanth Reddy Muddireddy
//      Subject :- Programming Techniques
//      Date    :- 10/10/2016
//      Question:- Uva (10394)
//              https://uva.onlinejudge.org/index.php?option=com_onlinejudge&
//				Itemid=8&category=24&page=show_problem&problem=1335
//********************************************************************************
//                  Description
//                (input&output)
//Twin primes are pairs of primes of the form (p, p + 2).The first few twin primes are (3, 5), 
//(5, 7), (11, 13), (17, 19), (29, 31), (41, 43).In this problem you are asked to find out 
//the S - th twin prime pair where S is an integer that will be given in the input.The input
//will contain less than 10001 lines of input. Each line contains an integers S (1 ≤ S ≤ 100000),
//which is the serial number of a twin prime pair.Input file is terminated by end of file.For 
//each line of input we will have to produce one line of output which contains the S-th twin prime
//pair.The pair is printed in the form(p1, ¡space¿p2).we can safely assume that the primes in the 100000 - th twin prime pair are less than 20000000.//**********************************************************************************
//I have written the entire program as turned in and have not copied this code, or parts of 
//this code from the internet or another student.                                                                                                                    
//                                                           Signature____________________
//***********************************************************************************

//include libraries
#include "iostream"
#include "vector"
#include "algorithm"
#include "cmath"
#include "utility"

//constant value 
#define max 20000001


using namespace std;
int main()
{
	int n,num;

	//values can be upto 20000001 and sets every index true
	vector<bool> sieve(max, true);

	//contains pair values (primes) with difference 2
	vector<pair<int,int>>Pairs(max);

	//o and 1 are not primes
	sieve[0] = false, sieve[1] = false;
	int s = sqrt(max);

	//loop that sets all multiplies of a number to false
	//primes are divisible by itself
	for (int i = 3; i < s; i=i+2)
	{
		if (sieve[i])
		{
			for (int j = i*i; j < max; j = j + i)
			{
				sieve[j] = false;
			}
			
		}
	}

	//loop that sets all the twin primes in pairs 
	//all evens are not primes so loop start at 3 and increments by 2 at 
	//each iteration
	int pos = 0, previous = 0;
	for (int k = 3; k < max; k=k+2)
	{
		if (sieve[k])
		{
			if (k == previous + 2)
			{
				//pair type that store two prime values(twin primes)
				//with difference 2
				Pairs[pos] = make_pair(previous, k);
				pos++;
			}
			previous = k;
		}
		
	}
	
	while (cin >> num)
	{
		//prints the requested set of twin prime
		cout << "(" << Pairs[num-1].first << ", " << Pairs[num-1].second << ")" << endl;

	}
	return 0;
}