//********************************************************************************
//      Project 17 Matrix Transpose
//      Name    :- Yashwanth Reddy Muddireddy
//      Subject :- Programming Techniques
//      Date    :- 10/27/2016/2016
//      Question:- Uva (10895)
//                 https://uva.onlinejudge.org/index.php?option=onlinejudge&
//				   page=show_problem&problem=1836
//********************************************************************************
//                  Description
//                (input&output)
//The first line of the input corresponds to the dimension of the matrix, m and n (which are the number 
//of rows and columns,respectively, of the matrix).Then given m sets of numbers, which represent the rows of the
//matrix. Each set consists of two lines which represents a row of the matrix. The first line of a set starts
//with the number r, which is the number of non-zero elements in that row, followed by r numbers which
//correspond to the column indices of the non-zero elements in that row, in ascending order; the second
//line has r integers which are the matrix elements of that row.for a row with all zero elements, the 
//corresponding set would just be one number, ‘0’, in the first line, followed by a blank line.
//							(output)
//For each input case, the transpose of the given matrix in the same representation.
//**********************************************************************************
//I have written the entire program as turned in and have not copied this code, or parts of 
//this code from the internet or another student.                                                                                                                    
//                                                           Signature____________________
//***********************************************************************************
 
 
//include library file
#include "iostream"
#include "string"
#include "sstream"
#include "vector"

using namespace std;

int main()
{
	//strring variable that takes rows and columns as input
	string line2;
	while (getline(cin,line2))
	{
		int x, y;
		//it splits the string into single char,digit,alphabet
		stringstream ss2(line2);
		//x(rows),y(columns)
		ss2 >> x >>y;
		cout << y << " " <<x<<endl;
		string line,line1;
		int row = 0;
		
		//2D vector of size x(rows),y(columns) i.e., input matrix
		vector <vector<int>>matrix(x,vector<int>(y));
		
		//loop that populates the input matrix
		for(int i=0;i<x;i++)
		{
			//string that reads number of elements and non zeros positions
			getline(cin, line);
			
			//string that reads all the non zero elements
			getline(cin, line1);
			int non_zeros = 0,index=0,col,val;
			stringstream ss(line),ss1(line1);
			ss >> non_zeros;
			if (non_zeros != 0)
			{
				for (int i = 0; i < non_zeros; i++)
				{
					ss >> col;
					ss1 >> val;
					matrix[row][col-1] = val;
					
				}
			}
			row++;
		}
		
		//2D vector for transpose matrix of sixe y(rows),x(columns)
		vector<vector<int>>T_matrix(y,vector<int>(x));
		
		//loop that populates transpose matrix
		for (int i = 0; i < x;i++)
		{
			for (int j = 0 ; j < y ; j++)
			{
				T_matrix[j][i] = matrix[i][j];

			}
		}
		
		//loop for each row in transpose matrix
		for (int j = 0; j < y; j++)
		{
			int count = 0;
			
			//loop that counts number of non zeros in a particular row of transpose matrix 
			for (int i = 0; i < x; i++)
			{
				if (T_matrix[j][i] != 0)
				{
					count++;
				}
			}
			
			//if their exists non zero elements
			if (count != 0)
			{
				cout << count;
				
				//loop that prints the position of non zero element 
				for (int i = 0; i < x; i++)
				{
					if (T_matrix[j][i] != 0)
					{
						cout << " " << i + 1;
					}
				}
				cout << endl;
				int y = 0;
				
				//loop that prints all the non zero elements
				for (int i = 0; i < x; i++)
				{
					if (T_matrix[j][i] != 0)
					{
						if (y == 0)
						{
							cout << T_matrix[j][i];
						}
						else
						{
							cout << " " << T_matrix[j][i];
						}
						y++;
					}
					
				}
				cout << endl;
			}
			
			//condition if all elements are zeros
			else
			{
				cout << count << endl << endl;
			}
		}


	}
    return 0;
}

