//-------------------------------LAB 2 ODD NUMBERED GRADE BLOCK---------------------------------------------------------
//Name: Parjan Ameen
//Grade:
//General Comments:
//  
//  
//  
//
//Possible Lab Points ---------------------------------------------------------------------------------------------> 200
//Total Points Lost ----------------------------------------------------------------------------------------------->  
//Lab Grade ------------------------------------------------------------------------------------------------------->  
//----------------------------------------------------------------------------------------------------------------------
//Standard Requirements
//  Requirements met as specified in the course & summarized in the requirements text attached to this project
//  Which includes but not limited to:
//    Program Creation
//    File Requirements
//    Constants
//    Code Blocking
//Comments:
//  
//  
//  
//Points Lost ----------------------------------------------------------------------------------------------------->
//Task 0  - Open the files
// Documentation included above prototype, call, above the function definition & in the function body
// Input File correctly named, created with data for assigned tasks, in the project folder, 
//  attached correctly in the Solution Explorer Window
// Input and Output file opened in the main, no testing for existence of the input file
// Output file, correctly names, in the project folder attached correctly in the Solution Explorer Window
// Non-recursive input and output functions for one-dimensional arrays, prototype, calls & definitions in the main
// Non-recursive input and output functions for two-dimensional arrays, prototype, calls & definitions in the main
//Comments:
//
//
//Points Lost ----------------------------------------------------------------------------------------------------->
//
//Task 1 - Star Pattern 
// Documentation included above prototype, call, above the function definition & in the function body
// Input of the number of lines from the input file in the main
// Efficient Recursive Solution in a Function
// Values added to the input file
// Recursive function called with values from the input file in the main
// Output of task heading with the heading centered on the divider
// Output of pattern correct
// Two blank lines output in the main to separate each call to the task
//Comments:
//
//
//Points Lost ----------------------------------------------------------------------------------------------------->
//
//Task 3 -  Building String
// Documentation included above prototype, call, above the function definition & in the function body
// Input of the ENTIRE string from the input file in the main with one input statement
// Efficient Recursive Solution in a Function
// Lines added to the input file
// Recursive function called with each line from the input file in the main
// Output of task heading with the heading centered on the divider
// Output of building string as shown in the instructions
// Two blank lines output in the main to separate each call to the task
//Comments:
//
//
//Points Lost ----------------------------------------------------------------------------------------------------->
//
//Task 5 -  Positive & Negative Array Counts
// Documentation included above prototype, call, above the function definition & in the function body
// Efficient Recursive Solution in a Function
// Integer values added to the input file, 10 per line
// Input of the array read from the input file using the Single Array Input Function
// Recursive function called with each array read from the input file in the main
// Output of task heading with the heading centered on the divider
// Output of array as shown in the task using the Output of Single Array Function formatted as shown in the instructions
// Output of the two counts in a function, called in the main as shown in the instructions
// Two blank lines output in the main to separate each call to the task
//Comments:
//
//
//Points Lost ----------------------------------------------------------------------------------------------------->
//
//Task 7 -  Count of Range of digits
// Documentation included above prototype, call, above the function definition & in the function body
// Input of the array from the input file in the main with one input statement
// Efficient Recursive Solution in a Function
// Integer values added to the input file, 10 per line
// Array read from the input file using the Single Array Input Function
// Recursive function called with each array read from the input file in the main
// Output of task heading with the heading centered on the divider
// Output of array as shown in the task using the Output of Single Array Function formatted as shown in the instructions
// Output of the two counts in a function, called in the main as shown in the instructions
// Two blank lines output in the main to separate each call to the task
//Comments:
//
//
//Points Lost ----------------------------------------------------------------------------------------------------->
//
//Task 9 -  Search Two Dimensional Array
// Documentation included above prototype, call, above the function definition & in the function body
// Efficient Recursive Solution in a Function
// Integer values added to the input file, 21 per line
// Input of the array read from the input file using the Two Dimensional Array Input Function
// Recursive function called with each array read from the input file in the main
// Output of task heading with the heading centered on the divider
// Output of array as shown in the task using the Output of Two Dimensional Array Function 
//  formatted as shown in the instructions
// Output of the search results including the search value, the row and column found or a not found message
//  in a function, called in the main as shown in the instructions
// Two blank lines output in the main to separate each call to the task
//Comments:
//
//
//Points Lost ----------------------------------------------------------------------------------------------------->
//
//Main
// Variables declared at the top of the main blocked by task and type with a comment above 
//  as shown in the instructions
// Function calls blocked by Task Number in the order listed in the instructions
// Files opened & closed in the main
// Initialization and/or assignment of values to variables that are not arrays completed in the main
// Code Blocked
// Comments included where needed
// Indentation Correct
//Comments:
//
//
//Points Lost ----------------------------------------------------------------------------------------------------->
//----------------------------------------------------------------------------------------------------------------------

#include "Standards.h"

//Constants
const int MAX_FOR_ONE_DIMENSION = 10;
const int COLUMNS = 5;
const int ROWS = 4;

//Prototypes-----------------------------------------------------------------------------------------------------------

//---------------------------------------------------------------------------------------------------------------------
//Task 0 - InputForOneDimensionArrayTask0
//---------------------------------------------------------------------------------------------------------------------
void InputForOneDimensionArrayTask0(ifstream& fin, int oneDimension[], int & lengthForOneDimension);

//---------------------------------------------------------------------------------------------------------------------
//Task 0 - OutputForOneDimensionArrayTask0
//---------------------------------------------------------------------------------------------------------------------
void OutputForOneDimensionArrayTask0(ofstream& output, const int oneDimension[], int lengthForOneDimension);

//---------------------------------------------------------------------------------------------------------------------
//Task 0 - InputForTwoDimensionArrayTask0
//---------------------------------------------------------------------------------------------------------------------
void InputForTwoDimensionArrayTask0(ifstream& fin, int twoDimension[][COLUMNS]);

//---------------------------------------------------------------------------------------------------------------------
//Task 0 - OutputForTwoDimensionArrayTask0
//---------------------------------------------------------------------------------------------------------------------
void OutputForTwoDimensionArrayTask0(ofstream& output, int twoDimension[][COLUMNS]);


//---------------------------------------------------------------------------------------------------------------------
//Task 1 - PrintStarsTask1
//---------------------------------------------------------------------------------------------------------------------
void PrintStarsTask1(ofstream& output, int number);

//---------------------------------------------------------------------------------------------------------------------
//Task 3 - BuildingStringTask3
//---------------------------------------------------------------------------------------------------------------------
void BuildingString(ofstream& output, string message, int start, int end);

//---------------------------------------------------------------------------------------------------------------------
//Task 5 - PositiveAndNegativeArrayCounts5
//---------------------------------------------------------------------------------------------------------------------
void PositiveAndNegativeArrayCounts(int countsArray[], int tag, int arrayPosition, int & positiveCounter,
 int & negativeCounter);

//---------------------------------------------------------------------------------------------------------------------
//Task 7 - DigitArrayCounts7
//---------------------------------------------------------------------------------------------------------------------
void DigitsArrayCounts(int arrayPosition, int countsArray[], int tag, int quotient, int & lowerCounter, 
int & higherCounter);

//---------------------------------------------------------------------------------------------------------------------
//Task 9 - SearchATwoDimensionalArray9
//---------------------------------------------------------------------------------------------------------------------
void SearchATwoDimensionalArray(ofstream& output, int twoDimension[][COLUMNS], int row, int column, int search);

int main(void)
{	
	//Variable to output to a file
	ofstream fout;

	//Variables to input from a file
	ifstream fin;

	//Task 0
	int oneDimension[MAX_FOR_ONE_DIMENSION];
	int twoDimension[ROWS][COLUMNS];   
	int tagForOneDimension = 0;

	//Task 1
	int starNumber;

	//Task 3
	string message;
	int start = 1;
	int end;

	//Task 5
	int positiveCounter = 0;
	int negativeCounter = 0;
	int arrayPosition = 0;

	//Task 7
	int quotient = 0;
	int lowerCounter = 0;
	int higherCounter = 0;

	//Task 9
	int row = 0;
	int column = 0;
	
	//-----------------------------------------------------------------------------------------------------------------
	//Task 0
	//-----------------------------------------------------------------------------------------------------------------
	
	//Call to output the input file names to the output file
	PrintFileName(static_cast<ofstream&> (cout), "Input", "Lab2In.txt");

	//Call to output the output file names to the output file
	PrintFileName(static_cast<ofstream&> (cout), "Output", "Lab2Out.txt");

	//Open the input file
	fin.open("Lab2In.txt");

	//Open the output 
	fout.open("Lab2Out.txt");

	//Call to output the course heading to the screen
	OutputHeading(static_cast<ofstream&> (cout));

	//Call to output the course heading to the output file
	OutputHeading(fout);

	//-----------------------------------------------------------------------------------------------------------------
	//Task 1 - PrintStarsTask1
	//-----------------------------------------------------------------------------------------------------------------
	
	//Input the star number
	fin >> starNumber;

	//Print a divider to the output stream
	OutputDivider(fout, SYMBOL, WIDTH);

	//Call the function to print a centered header
	PrintCenteredMessage(fout, "Task 1 - Call 1 - Star Pattern with number of lines set to: " + to_string(starNumber));

	//Call the print stars task
	PrintStarsTask1(fout, starNumber);

	//Print a divider to the output stream
	OutputDivider(fout, SYMBOL, WIDTH);

	//Read in the second star number
	fin >> starNumber;

	//Call the function to print a centered header
	PrintCenteredMessage(fout, "Task 1 - Call 2 - Star Pattern with number of lines set to: " + to_string(starNumber));

	//Print a divider to the output stream
	OutputDivider(fout, SYMBOL, WIDTH);
	
	//Call the print stars task
	PrintStarsTask1(fout, starNumber);

	//Print a divider to the output stream
	OutputDivider(fout, SYMBOL, WIDTH);

	//-----------------------------------------------------------------------------------------------------------------
	//Task 3 - BuildingStringTask3
	//-----------------------------------------------------------------------------------------------------------------

	//Move the pointer down to the next line
	fin.ignore(100, '\n');

	//Input the message
	getline(fin, message);

	//Find and catch the end of the messages length
	end = static_cast<int>(message.length());

	//Print a divider to the output stream
	OutputDivider(fout, SYMBOL, WIDTH);

	//Call the function to print a centered header
	PrintCenteredMessage(fout, "Task 3 - Call 1 - Building String");
	
	//Print a divider to the output stream
	OutputDivider(fout, SYMBOL, WIDTH);

	//Call the building string function
	BuildingString(fout, message, start, end);

	//Print a divider to the output stream
	OutputDivider(fout, SYMBOL, WIDTH);

	//Input the message
	getline(fin, message);

	//Find and catch the end of the messages length
	end = static_cast<int>(message.length());

	//Call the function to print a centered header
	PrintCenteredMessage(fout, "Task 3 - Call 2 - Building String");

	//Print a divider to the output stream
	OutputDivider(fout, SYMBOL, WIDTH);

	//Call the building string function
	BuildingString(fout, message, start, end);

	//Print a divider to the output stream
	OutputDivider(fout, SYMBOL, WIDTH);

	//-----------------------------------------------------------------------------------------------------------------
	//Task 5 - PositiveAndNegativeArrayCounts5
	//-----------------------------------------------------------------------------------------------------------------

	//Call to read in the one dimensional array
	InputForOneDimensionArrayTask0(fin, oneDimension, tagForOneDimension);

	//Call the function to print a centered header
	PrintCenteredMessage(fout, "Task 5 - Call 1 - Positive and Negative Array Counts");

	//Print a divider to the output stream
	OutputDivider(fout, SYMBOL, WIDTH);

	//Right align
	fout << right;

	//Output the heading for the number
	fout << setw(25) << "Number" << endl;

	//Print a divider to the output stream
	OutputDivider(fout, SYMBOL, WIDTH);

	//Output the one dimensional array
	OutputForOneDimensionArrayTask0(fout, oneDimension, tagForOneDimension);

	//Call the positive and negative counter function
	PositiveAndNegativeArrayCounts(oneDimension, tagForOneDimension, arrayPosition, positiveCounter,
	negativeCounter);

	//Print a divider to the output stream
	OutputDivider(fout, SYMBOL, WIDTH);

	//Print a divider to the output stream
	OutputDivider(fout, SYMBOL, WIDTH);

	//Output the positive counter
	fout << "Positive Counter: " << positiveCounter << endl;
	
	//Output the negative counter
	fout << "Negative Counter: " << negativeCounter << endl;

	//Print a divider to the output stream
	OutputDivider(fout, SYMBOL, WIDTH);
	
	//Call to read in the one dimensional array
	InputForOneDimensionArrayTask0(fin, oneDimension, tagForOneDimension);

	//Call the function to print a centered header
	PrintCenteredMessage(fout, "Task 5 - Call 2 - Positive and Negative Array Counts");

	//Print a divider to the output stream
	OutputDivider(fout, SYMBOL, WIDTH);

	//Right align
	fout << right;

	//Output the heading for the number
	fout << setw(25) << "Number" << endl;

	//Print a divider to the output stream
	OutputDivider(fout, SYMBOL, WIDTH);

	//Output the one dimensional array
	OutputForOneDimensionArrayTask0(fout, oneDimension, tagForOneDimension);

	//Initialize the variables for task 5 before second call
	arrayPosition = 0;
	positiveCounter = 0;
	negativeCounter = 0;

	//Call the positive and negative counter function
	PositiveAndNegativeArrayCounts(oneDimension, tagForOneDimension, arrayPosition, positiveCounter,
	negativeCounter);

	//Print a divider to the output stream
	OutputDivider(fout, SYMBOL, WIDTH);

	//Print a divider to the output stream
	OutputDivider(fout, SYMBOL, WIDTH);

	//Output the positive counter
	fout << "Positive Counter: " << positiveCounter << endl;
	
	//Output the negative counter
	fout << "Negative Counter: " << negativeCounter << endl;

	//Print a divider to the output stream
	OutputDivider(fout, SYMBOL, WIDTH);

	//-----------------------------------------------------------------------------------------------------------------
	//Task 7 - DigitArrayCounts7
	//-----------------------------------------------------------------------------------------------------------------

	//Input the one dimensional array 
	InputForOneDimensionArrayTask0(fin, oneDimension, tagForOneDimension);

	//Call the function to print a centered header
	PrintCenteredMessage(fout, "Task 7 - Call 1 - Digit Array Counts");

	//Print a divider to the output stream
	OutputDivider(fout, SYMBOL, WIDTH);

	//Right align
	fout << right;

	//Output the heading for the number
	fout << setw(25) << "Number" << endl;

	//Print a divider to the output stream
	OutputDivider(fout, SYMBOL, WIDTH);

	//Output the one dimensional array
	OutputForOneDimensionArrayTask0(fout, oneDimension, tagForOneDimension);

	//Call the digit array counts function
	DigitsArrayCounts(arrayPosition, oneDimension, tagForOneDimension, quotient, lowerCounter, higherCounter);

	//Print a divider to the output stream
	OutputDivider(fout, SYMBOL, WIDTH);

	//Print a divider to the output stream
	OutputDivider(fout, SYMBOL, WIDTH);

	//Output the counter for the lower end
	fout << "Digit Counter for 0 to 4: " << lowerCounter << endl;

	//Output the counter for the higher end
	fout << "Digit Counter for 5 to 0: " << higherCounter << endl;

	//Print a divider to the output stream
	OutputDivider(fout, SYMBOL, WIDTH);

	//Input the one dimensional array 
	InputForOneDimensionArrayTask0(fin, oneDimension, tagForOneDimension);

	//Call the function to print a centered header
	PrintCenteredMessage(fout, "Task 7 - Call 2 - Digit Array Counts");

	//Print a divider to the output stream
	OutputDivider(fout, SYMBOL, WIDTH);

	//Output the heading for the number
	fout << setw(25) << "Number" << endl;

	//Print a divider to the output stream
	OutputDivider(fout, SYMBOL, WIDTH);

	//Output the one dimensional array
	OutputForOneDimensionArrayTask0(fout, oneDimension, tagForOneDimension);

	//Initialize the task 7 variables
	arrayPosition = 0;
	lowerCounter = 0;
	higherCounter = 0;
	quotient = 0;

	//Call the digit array counts function
	DigitsArrayCounts(arrayPosition, oneDimension, tagForOneDimension, quotient, lowerCounter, higherCounter);

	//Print a divider to the output stream
	OutputDivider(fout, SYMBOL, WIDTH);

	//Print a divider to the output stream
	OutputDivider(fout, SYMBOL, WIDTH);

	//Output the counter for the lower end
	fout << "Digit Counter for 0 to 4: " << lowerCounter << endl;

	//Output the counter for the higher end
	fout << "Digit Counter for 5 to 0: " << higherCounter << endl;

	//Print a divider to the output stream
	OutputDivider(fout, SYMBOL, WIDTH);

	//-----------------------------------------------------------------------------------------------------------------
	//Task 9 - SearchATwoDimensionalArray9
	//-----------------------------------------------------------------------------------------------------------------

	//Call to read in the two dimensional array
	InputForTwoDimensionArrayTask0(fin, twoDimension);

	//Print a divider to the output stream
	OutputDivider(fout, SYMBOL, WIDTH);

	//Call the function to print a centered header
	PrintCenteredMessage(fout, "Task 9 - Call 1 - Search a Two-Dimensional Array");

	//Print a divider to the output stream
	OutputDivider(fout, SYMBOL, WIDTH);

	//Call to output the two dimensional array
	 OutputForTwoDimensionArrayTask0(fout, twoDimension);

	//Print a divider to the output stream
	OutputDivider(fout, SYMBOL, WIDTH);

	//Print a divider to the output stream
	OutputDivider(fout, SYMBOL, WIDTH);

	//Call to search for a value passed into the two dimensional array
	SearchATwoDimensionalArray(fout, twoDimension, row, column, 46);

	//Print a divider to the output stream
	OutputDivider(fout, SYMBOL, WIDTH);

	//Initialize the task 9 variables again
	row = 0;
	column = 0;
	
	//Call to read in the two dimensional array
	InputForTwoDimensionArrayTask0(fin, twoDimension);

	//Print a divider to the output stream
	OutputDivider(fout, SYMBOL, WIDTH);

	//Call the function to print a centered header
	PrintCenteredMessage(fout, "Task 9 - Call 2 - Search a Two-Dimensional Array");

	//Print a divider to the output stream
	OutputDivider(fout, SYMBOL, WIDTH);

	//Call to output the two dimensional array
	OutputForTwoDimensionArrayTask0(fout, twoDimension);

	//Print a divider to the output stream
	OutputDivider(fout, SYMBOL, WIDTH);

	//Print a divider to the output stream
	OutputDivider(fout, SYMBOL, WIDTH);

	//Call to search for a value passed into the two dimensional array
	SearchATwoDimensionalArray(fout, twoDimension, row, column, 10);

	//Print a divider to the output stream
	OutputDivider(fout, SYMBOL, WIDTH);

	//Close the input file
	fin.close();

	//Close the output file
	fout.close();

	return 0;
}    

//---------------------------------------------------------------------------------------------------------------------
//Task 0 - InputForOneDimensionArrayTask0 - Inputs the data for the one dimensional array
//---------------------------------------------------------------------------------------------------------------------
void InputForOneDimensionArrayTask0(ifstream& fin, int oneDimension[], int & lengthForOneDimension)
{
	//Local index
	int index;

	//For every number
	for (index = 0; index < 10; index++)
	{
		//Read in the value from the input file
		fin >> oneDimension[index];
	}

	//Assign index to tag field
	lengthForOneDimension = index;
}

//---------------------------------------------------------------------------------------------------------------------
//Task 0 - OutputForOneDimensionArrayTask0 - Outputs the data for the one dimensional array
//---------------------------------------------------------------------------------------------------------------------
void OutputForOneDimensionArrayTask0(ofstream& output, const int oneDimension[], int lengthForOneDimension)
{
	for(int index = 0; index < lengthForOneDimension; index++)	
	{
		//Right align
		output << right;
		
		//Output the one dimension array
		output << setw(25) << oneDimension[index] << endl;
	}

}

//---------------------------------------------------------------------------------------------------------------------
//Task 0 - InputForTwoDimensionArrayTask0 - Inputs the data for the two dimensional array
//---------------------------------------------------------------------------------------------------------------------
void InputForTwoDimensionArrayTask0(ifstream& fin, int twoDimension[][COLUMNS])
{
	//Local variables
	int row;
	int column;
	
	//Row loop
	for(row = 0; row < ROWS; row++)
	{
		//Column loop
		for(column = 0; column < COLUMNS; column++)
		{
			fin >> twoDimension[row][column];
		}
	}
}

//---------------------------------------------------------------------------------------------------------------------
//Task 0 - OutputForTwoDimensionArrayTask0 - Outputs the data for the two dimensional array
//---------------------------------------------------------------------------------------------------------------------
void OutputForTwoDimensionArrayTask0(ofstream& output, int twoDimension[][COLUMNS])
{
	//Local variables
	int row;
	int column;

	//Outputting the column header
	output << right << setw(25) << "Columns" << endl;
	output << left << setw(6) << "Rows" << setw(6) << "|" << setw(6) << "0" << setw(6) << "1" << setw(6) << "2" 
	<< setw(6) << "3" << setw(6) << "4" << endl;
	
	//Right align
	output << right;

	//Print a divider to the output stream
	OutputDivider(output, SYMBOL, WIDTH);

	for(row = 0; row < ROWS; row++)
	{
		//Output the row index and the bar
		output << row << setw(6) << "|";
	
		for(column = 0; column < COLUMNS; column++)
		{
			//Output the two dimensional array
			output << setw(6) << twoDimension[row][column];
		}

		//Create a blank space
		output << endl;
	}	

}

//---------------------------------------------------------------------------------------------------------------------
//Task 1 - PrintStarsTask1 - Prints the amount of stars set in as a pattern recursively
//---------------------------------------------------------------------------------------------------------------------
void PrintStarsTask1(ofstream& output, int number)
{
	//Check to see if the number is greater than 1
	if(number > 1)
	{
		//Outputs the pattern
		output << setfill('*') << setw(number + 1) << ' ' << setfill(' ') << endl;

		//Output one less star
		PrintStarsTask1(output, number - 1);
	}

	else
	{
		//Outputs the pattern
		output << setfill('*') << setw(number + 1) << ' ' << setfill(' ') << endl;
	}	
	
	//Outputs the pattern
	output << setfill('*') << setw(number + 1) << ' ' << setfill(' ') << endl;

}

//---------------------------------------------------------------------------------------------------------------------
//Task 3 - BuildingStringTask3 - Builds up a message sent in recursively
//---------------------------------------------------------------------------------------------------------------------
void BuildingString(ofstream& output, string message, int start, int end)
{
	//Check to see if the start is equal to the end
	if(start == end)
	{
		//Output the whole input to the output file
		output << message << endl;
	}

	else
	{
		//Output the string 
		output << message.substr(0, start) << endl;

		//Outputting the string recursively 
		BuildingString(output, message, start + 1, end);
	}

}

//---------------------------------------------------------------------------------------------------------------------
//Task 5 - PositiveAndNegativeArrayCounts5 - Counts the positive and negative numbers in the one dimensional array
//---------------------------------------------------------------------------------------------------------------------
void PositiveAndNegativeArrayCounts(int countsArray[], int tag, int arrayPosition, int & positiveCounter,
 int & negativeCounter)
{
	//Check to make sure the array position does not equal the tag
	if(arrayPosition != tag)
	{
		//Check to see if the array position is equal to zero
		if(countsArray[arrayPosition] == 0)
		{
			//Calling the function recursively and incrementing the array position
			PositiveAndNegativeArrayCounts(countsArray, tag, arrayPosition +1, positiveCounter, negativeCounter);
		}

		else if(countsArray[arrayPosition] > 0)
		{
			//Calling the function recursively and incrementing the array position
			PositiveAndNegativeArrayCounts(countsArray, tag, arrayPosition +1, positiveCounter, negativeCounter);

			//Increment the positive counter
			positiveCounter++;
		}

		else
		{	
			//Calling the function recursively and incrementing the array position
			PositiveAndNegativeArrayCounts(countsArray, tag, arrayPosition +1, positiveCounter, negativeCounter);

			//Increment the negative counter
			negativeCounter++;
		}
	
	}
}

//---------------------------------------------------------------------------------------------------------------------
//Task 7 - DigitArrayCounts5 - Counts the numbers in the range of 0-4 and 5-9 recursively from the one dimension array
//---------------------------------------------------------------------------------------------------------------------
void DigitsArrayCounts(int arrayPosition, int countsArray[], int tag, int quotient, int & lowerCounter, 
int & higherCounter)
{
	//Check to see if the array position is greater than or equal to the tag
	if(arrayPosition <= tag)
	{
		//Check to see if the quotient doesn't 0
		if(quotient != 0)
		{
			//Check to see if the quotient is greater than or equal to 0
			if(quotient % 10 <= 4)
			{
				//Increment the lower counter
				lowerCounter++;
			}

			//If the quotient is greater than or equal to 5
			else
			{
				//Increment the higher counter
				higherCounter++;
			}

			//Call the function recursively 
			DigitsArrayCounts(arrayPosition, countsArray, tag, quotient /= 10, lowerCounter, higherCounter);
			
		}

		else
		{
			//Call the function recursively and increment the array position
			DigitsArrayCounts(arrayPosition + 1, countsArray,
			 tag, countsArray[arrayPosition], lowerCounter, higherCounter);			
		}
		
	}
}

//---------------------------------------------------------------------------------------------------------------------
//Task 9 - SearchATwoDimensionalArray9 - Searches for a number passed into the two dimensional array recursively 
//---------------------------------------------------------------------------------------------------------------------
void SearchATwoDimensionalArray(ofstream& output, int twoDimension[][COLUMNS], int row, int column, int search)
{
	//Check to see if the array has the value passed in
	if(twoDimension[row][column] == search)
	{
		//Output the array position
		output << "The search Value " << search << " was found in the two dimensional array." << endl;

		//output the row and column the search value was found in
		output << "It is in Row " << row << " and Column " << column << " of the array" << endl;
	}
	
	//Check to see if the row is equal to the max rows
	else if(row == ROWS)
	{
		//Output a statement saying the value was not found in the array
		output << "The value " << search << " wasn't found in the array." << endl;
	}

	else
	{
		//Check to see if the mod is equal to zero
		if((column + 1) % COLUMNS == 0)
		{
			//Call the function recursively and add 1 to the row
			SearchATwoDimensionalArray(output, twoDimension, row + 1, 0, search);
		}

		else
		{
			//Call the function recursively and add 1 to the column
			SearchATwoDimensionalArray(output, twoDimension, row, column + 1, search);
		}
		
	}

}
 
