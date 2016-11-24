//********************************************************************************
//      Project 10 Reverse and add
//      Name    :- Yashwanth Reddy Muddireddy
//      Subject :- Programming Techniques
//      Date    :- 09/18/2016
//      Question:- Uva (10018)
//                 https://uva.onlinejudge.org/index.php?option=com_onlinejudge&
//					Itemid=8&category=24&page=show_problem&problem=959
//********************************************************************************
//                  Description
//                (input&output)
//The input consists of stings one per line ,the first line has number of test cases
// >0 and <=100 and next will have the integers to compute, each input integer is reversed
//and added to the it and will check if the obtained is a palindrome if not loop the same
//step one until a palindrome is obtained(loop<=1000) .The output would be number of iterations it took
//to obtain the palindrome and the palindrome value.
//**********************************************************************************
//I have written the entire program as turned in and have not copied this code, or parts of 
//this code from the internet or another student.                                                                                                                    
//															 Signature____________________
//***********************************************************************************


//include library
#include "iostream"


using namespace std;
int main()
{
	int N, itr;
	unsigned long int num, newnum,temp;
	
	//read the first integer(number of inputs)
	cin >> N;

	//loop for the N number of inputs
	for (int i = 0;i < N;i++)
	{
		cin >> num;
		temp = num;
		newnum = 0;
		itr = 1;

		//reversing the input to add to its orginal value
		while (temp > 0)
		{
			newnum = newnum * 10 + (temp % 10);
			temp = temp / 10;
		}
		//adding to original input
		num = num+newnum;
		temp = 0;
		temp = num;
		newnum = 0;
		//loop to reverse the obtained value 
		while (temp > 0)
		{
			newnum = newnum * 10 + (temp % 10);
			temp = temp / 10;
		}

		//loop to check if the value is palindrome else loop <1000
		//until palindrome is obtained
		while(num!=newnum && itr<1000)
		{
			//iterator value to count number of iterations
			itr++;
			temp = 0;
			num = newnum + num;
			temp = num;
			newnum = 0;

			//reversing the obtained value
			while (temp > 0)
			{
				newnum = newnum * 10 + (temp % 10);
				temp= temp / 10;
			}
		}
	  cout << itr << " " << num<<endl;

	}
	
    return 0;
}

