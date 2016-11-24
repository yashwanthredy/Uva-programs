//**************************************************************
//                  Project #1 Google is Feeling Lucky
//                  Name: Yashwanth Reddy Muddireddy
//                  Date    :- 09/13/2016
//      			Question:- Uva (12015)
//                			   https://uva.onlinejudge.org/index.php?option=com_onlinejudge&
//							   Itemid=8&page=show_problem&problem=3166
//***************************************************************
//						Description
//							input
// Given 10 web pages and their relevance. Just pick out all the 
// possible candidates which will be served to the user based on 
// relevance.The most related page will be chosen. If there is a
// tie, all the pages with the highest relevance are possible to
// be chosen.
///The input contains multiple test cases. The number of test cases T 
// is in the first line of the input file. For each test case, there are
// 10 lines, describing the web page and the relevance. Each line contains
// a character string without any blank characters denoting the URL of 
// this web page and an integer Vi denoting the relevance of this web page.
// The length of the URL is between 1 and 100 inclusively.(1 = Vi = 100)
//**************************************************************************
//I have written the entire program as turned in and have not copied this code, or parts of 
//this code from the internet or another student.                                                                                                                    
//															 Signature____________________
//***********************************************************************************

//includes libraries
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	//variable that store number of test cases
	int n;
	//loop until if it fails to extract test case variable
	while(cin>>n)
	{
		//string array variable to store url's
		string a1[10];
		//int array variable to store relevance
		int a2[10];
		//loop for number of test cases
		for(int i=0;i<n;i++)
		{
			//variable that keeps tract of max relevance number
			int max=0;
			//loop for 10 web pages and its relevance
			for(int i=0;i<10;i++)
			{
				cin>>a1[i]>>a2[i];
				if(a2[i]>>max)
					max=a2[i];
			}
			cout<<"Case #"<<n<<":"<<endl;
			//loop that prints out page with highest relevance 
			for(int j=0;j<10;j++)
			{
				if(a2[j]==max)
				{
					cout<<a1[j]<<endl;
				}
			}
		}

	}
	return 0;
}