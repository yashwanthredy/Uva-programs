//********************************************************************************
//      Project 13 Splitting Numbers
//      Name    :- Yashwanth Reddy Muddireddy
//      Subject :- Programming Techniques
//      Date    :- 09/30/2016
//      Question:- Uva (11933)
//					https://uva.onlinejudge.org/index.php?option=com_onlinejudge&
//					Itemid=8&category=24&page=show_problem&problem=3084
//********************************************************************************
//                  Description
//                (input&output)
//The input consists of test cases by reading in each number the number is splitted as follows 
//for example if the input "n" in binary is 110110101 this can be split into two numbers as a(n) 
//& b(n) where indices of a(n) bits are 1,3,5,... and b(n) are 2,4,6,...
//, we have a =010010001 and b = 100100100.Here the first bit that is 1 from the right will belong
//to a(n) with the same index in a(n) and the second bit that is 1 in number "n" will belong to 
//b(n) and 3,5,7,9.. will be of a(n) simultaneously and 4,6,8,... will be of b(n).
//**********************************************************************************
//I have written the entire program as turned in and have not copied this code, or parts of 
//this code from the internet or another student.                                                                                                                    
//															 Signature____________________
//***********************************************************************************


//include libraries
#include "iostream"
#include "bitset"
#include "cmath"

using namespace std;
int main()
{
	unsigned int num;
	
	//first input to start while loop
	cin >> num;
	while (num!=0)
	{
		int count = 0;

		//method that converts input number into 32 bit binary
		// and stores in bitsetnum
		bitset<32> bitsetnum{num};
		
		//32 bit binary number and value is 0000000000.....(32 bits)
		bitset<32> a;
		bitset<32> b;
		
		//loop that checks for bit 1 in the binary equivalent of number
		for (int i = 0; i < 32; i++)
		{
			if (bitsetnum[i]==1)
			{
				count++;
				unsigned int p = 0;

				//condition that decides if bit belongs to a(n) or b(n)
				if (count % 2 != 0)
				{
					p = pow(2, i);
					//32 bit binary number that will of numbers with powers of 2 for 
					//i=1,3,5,7,.....
					bitset<32> adder{ p };
					//mask the number (like to get the bit of a particular index)
					adder = bitsetnum&adder;
					//adding that bit to a
					a = a | adder;
				}
				else
				{
					p = pow(2, i);
					//32 bit binary number that will of numbers with powers of 2 for 
					//i=2,4,6,8,.....
					bitset<32> adder{ p };
					//mask the number (like to get the bit of a particular index)
					adder = bitsetnum&adder;
					//adding that bit to b
					b = b | adder;
				
				}

				
			}
		}
		//.to_ulong() converts binary to  long integer 
		cout << a.to_ulong()<< " " << b.to_ullong() << endl;
		cin >> num;
	}
    return 0;
}

