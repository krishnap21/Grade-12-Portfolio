// Matrix - This game randomly fills matrix 1 and matrix 2 with number between -9 to 9 and prints each matrix to show
//          the user the numbers. Then the program adds both of matrices together and prints out the result. The 
//          program then subtracts both of matrices together and prints out the result. The program asks the user 
//          to enter a scalar number and then multiplies the first matrix by that number and prints it out, 
//          the program then asks the user to enter a scalar number and then multiplies the second matrix by that 
//          number and prints it out. After that, the program asks the user to enter a scalar number and then
//          divides the first matrix by that number and prints it out, finally the program then asks the user to enter 
//          a scalar number and then divides the second matrix by that number and prints it out
// Krishna Patel - Computer Science 40s
// October. 6 2022

// Prototypes
void Fill_Matrix(int matrix[3][4]);  // Fills the matrix with random numbers
void Print_Matrix(int matrix[3][4]); // Function that prints the matrix out
void Add_Matrices(int matrix1[3][4], int matrix2[3][4], int result[3][4]);   // adds the first and second matrix
void Subtract_Matrices(int matrix1[3][4], int matrix2[3][4], int result[3][4]);  // subtracts the first and second
// matrix
void Scalar_Multi(int matrix[3][4], int scalar, int result[3][4]); // asks the user to give a number to multiply
// the first matrix by then multipies the 1st matrix 
// by that number and then asks the user to give a 
// number to mutlipy the second matrix by then 
// multipies the 2nd matrix by that number 
void Scalar_Div(int matrix[3][4], int scalar, int result[3][4]);  // asks the user to give a number to divide
// the first matrix by then divides the 1st matrix 
// by that number and then asks the user to give a 
// number to divide the second matrix by then 
// divides the 2nd matrix by that number 

#include <iostream>
#include <conio.h>

using namespace std;
int main(void)
{
	int matrix1[3][4];    // The first matrix
	int matrix2[3][4];    // The second matrix
	int result[3][4];     // The result after the matrices are added, subtracted, multiplied, or divided
	int scalar;           // The number the user enters to multiply or divide the matrices by
	int i;                // Loop counter

	// Seed the random number generator  - Use the system time
	srand((unsigned)time(NULL));
	for (i = 0; i < rand(); i++)
		rand();

	// Initialize values
	scalar = 0;

	// Randomly fills the first matrix
	Fill_Matrix(matrix1);
	// Randomly fills the second matrix
	Fill_Matrix(matrix2);
	// Prints the first matrix
	cout << "Matrix 1:" << endl;
	Print_Matrix(matrix1);
	// Prints the second matrix
	cout << "Matrix 2:" << endl;
	Print_Matrix(matrix2);
	// Adds the first and second matrix
	cout << "Addition of Matrices" << endl;
	Add_Matrices(matrix1, matrix2, result);
	cout << "Subtraction of Matrices" << endl;
	// Subtracts the first and second matrix
	Subtract_Matrices(matrix1, matrix2, result);
	// Multiplies the first matrix by the scalar number the user eneters
	cout << "Multiplication of Matrix 1" << endl;
	Scalar_Multi(matrix1, scalar, result);
	// Multiplies the second matrix by the scalar number the user eneters
	cout << "Multiplication of Matrix 2" << endl;
	Scalar_Multi(matrix2, scalar, result);
	// Divides the first matrix by the scalar number the user eneters
	cout << "Division of Matrix 1" << endl;
	Scalar_Div(matrix1, scalar, result);
	// Divides the second matrix by the scalar number the user eneters
	cout << "Division of Matrix 2" << endl;
	Scalar_Div(matrix2, scalar, result);




}

// Fill_Matrix - this function fills the matrix with random numbers
// matrix[3][4] - the matrix that is filled with random numbers
void Fill_Matrix(int matrix[3][4])
{
	int x; // Loop counter
	int y; // Loop counter
	// Loop through the matrix picking a random number from -9 to 9
	for (x = 0; x < 3; x++)
	{
		for (y = 0; y < 4; y++)
		{
			matrix[x][y] = rand() % 19 - 9;
		} // for
	} // for
} // Fill_Matrix


// Print_Matrix - this function prints the matirx out
// matrix[3][4] - the matrix that is filled with random numbers
void Print_Matrix(int matrix[3][4])
{
	int x; // Loop counter
	int y; // Loop counter

	// Loop through printing the matrix
	for (x = 0; x < 3; x++)
	{
		for (y = 0; y < 4; y++)
		{
			// Used to print the matrix out neatly - if it's a positive number add a space, if a negative
			// number don't add a space
			if (matrix[x][y] >= 0)
			{
				cout << " " << matrix[x][y];
			} // if
			else
			{
				cout << matrix[x][y];
			} // else
		} // for

		// endline to make the output look cleaner
		cout << endl;

	} // for
} // Print_Matrix

// Add_Matrices - Function that adds the first and second matrix
// matrix1[3][4] - The first matrix that is filled with random numbers
// matrix2[3][4] - The second matrix that is filled with random numbers
// result[3][4] - the result of the first and second matrix added together
void Add_Matrices(int matrix1[3][4], int matrix2[3][4], int result[3][4])
{

	int row; // Loop counter for row
	int col; // Loop counter for column

	// Loop through adding matrix 1 and 2
	for (row = 0; row < 3; row++)
	{
		for (col = 0; col < 4; col++)
		{
			// The result is both matrixes added
			result[row][col] = matrix1[row][col] + matrix2[row][col];

			// Print the result
			cout << result[row][col] << " ";

		} // for

		// endline to make the output look cleaner
		cout << endl;
	} // for

} // Add_Matrices

// Subtract_Matrices - Function that subtracts the first and second matrix
// matrix1[3][4] - The first matrix that is filled with random numbers
// matrix2[3][4] - The second matrix that is filled with random numbers
// result[3][4] - the result of the first and second matrix subtracts together
void Subtract_Matrices(int matrix1[3][4], int matrix2[3][4], int result[3][4])
{
	int row; // Loop counter for the row
	int col; // Loop counter for the columns

	// Loop through subtracted matrix 1 and 2
	for (row = 0; row < 3; row++)
	{
		for (col = 0; col < 4; col++)
		{ // The result is both matrixes subtracted
			result[row][col] = matrix1[row][col] - matrix2[row][col];

			// Prints the result
			cout << result[row][col] << " ";

		} // for

		// endline to make the output look cleaner
		cout << endl;
	} // for
} // Subtract_Matrices

// Scalar_Multi - Function that multiplies the first matrix by the number the user enters and multiples the
//                second matrix by the number the user enters
// matrix[3][4] - The matrix that is filled with random numbers
// result[3][4] - The result of the matrix being multiplied the scalar number the user inputs 
void Scalar_Multi(int matrix[3][4], int scalar, int result[3][4])
{

	int row; // Loop counter for the row
	int col; // Loop counter for the columns

	// Asks the user to enter a scalar number
	cout << "Enter any number: ";
	cin >> scalar;

	// Loop through multiplying the matrix by the number the user enetered
	for (row = 0; row < 3; row++)
	{
		for (col = 0; col < 4; col++)
		{
			// result of multiplying the matrix by the number the user inputted
			result[row][col] = (matrix[row][col]) * scalar;

			// Print out the result
			cout << result[row][col] << " ";

		} // for

		// endline to make the output look cleaner
		cout << endl;
	} // for

} // Scalar_Multi


// Scalar_Div - Function that divides the first matrix by the number the user enters and then divides the
//                second matrix by the number the user enters
// matrix[3][4] - The matrix that is filled with random numbers
// result[3][4] - The result of the matrix being divided the scalar number the user inputs 
void Scalar_Div(int matrix[3][4], int scalar, int result[3][4])
{
	int row; //Loop counter for the row
	int col; // Loop counter for the columns

	// Asks the user to enter a scalar number
	cout << "Enter any number: ";
	cin >> scalar;

	// Loop through dividing the matrix by the number the user enetered
	for (row = 0; row < 3; row++)
	{
		for (col = 0; col < 4; col++)
		{
			// result of dividing the matrix by the number the user inputted
			result[row][col] = (matrix[row][col]) / scalar;

			// Print out the result
			cout << result[row][col] << " ";

		} // for

		// endline to make the output look cleaner
		cout << endl;
	} // for
} // Scalar_Div