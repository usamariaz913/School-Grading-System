#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <string>
#include <cctype>
#include <cstring>
#include <iomanip>

using namespace std;

// here are the prototypes of functions.

char getGrades(float);

void sortArraysBasedOnFinalMarksAscendingly(int[], float[], float[], int[], char[], int);
void sortArraysBasedOnFinalMarksDescendingly(float[], int[], float[], int[], char[], int);

void sortArraysBasedOnGradesAscendingly(char[], int[], float[], float[], int[], int);
void sortArraysBasedOnGradesDescendingly(char[], int[], float[], float[], int[], int);


int main()
{
	//Useful variabels
	const int N = 100;
	int numberOfStudents = 20, roll, counter = 0;
	float marks;
	char gradeMarks;

	int decision, temp;
	float temp1;
	char temp3;

	////Array declarations.
	//int rollNumber[N];
	//float midTerm[N];
	//float finalTerm[N];
	//int classOfStudent[N];
	//char grades[N];

	//Array declarations first 20 intialized.
	int rollNumber[N] = { 20,31,45,12,1,5,65,78,46,80,22,43,55,66,99,88,36,2,11,92 };
	float midTerm[N] = { 30,41,55.4,22,11.0,15.9,75,83,51.5,85,27.6,48,60,71,99.1,93,49.1,7.5,16,97.2 };
	float finalTerm[N] = { 50,61.5,75.1,42,31.4,35,95.5,83,71.2,85,47.9,68,80.4,91,99.1,93,69,27,33.5,95.1 };
	int classOfStudent[N] = { 2,5,6,9,4,1,2,5,7,6,4,7,9,3,1,2,4,10,4,5 };

	char grades[N];

	for (int i = 0; i < numberOfStudents; i++)
	{

		grades[i] = getGrades(finalTerm[i]);

	}



	////Initializing array
	//cout << "Enter the Roll Number of Students : ";

	//for (int i = 0; i < numberOfStudents; i++)
	//{
	//	cin>>rollNumber[i];
	//}

	//for (int i = 0; i < numberOfStudents; i++)
	//{
	//	cout << "Enter mid term Marks of student " << rollNumber[i] << " :";
	//	cin >> midTerm[i];
	//}

	//for (int i = 0; i < numberOfStudents; i++)
	//{
	//	cout << "Enter final term Marks of student " << rollNumber[i] << " :";
	//	cin >> finalTerm[i];

	//	grades[i] = getGrades(finalTerm[i]);

	//}


	//for (int i = 0; i < numberOfStudents; i++)
	//{
	//	cout << "Enter Class of student " << rollNumber[i] << " :";
	//	cin >> classOfStudent[i];
	//}

	cout << endl;
	cout << "_________________________________________________________________________________________________";
	cout << endl;



	//Here is the main menu.

	cout << "1. if you want to Sort and display all the records roll number wise in ascending order." << setw(15) << "(Enter 1) : \n\n";

	cout << "2. if you want to sort and display all the records roll number wise in descending order.(Enter 2) : \n\n";

	cout << "3.  if you want to Sort and display all records in ascending order based on marks in Midterm.(Enter 3): \n\n";

	cout << "4.  if you want to Sort and display all records in descending order based on marks in Midterm.(Enter 4): \n\n";

	cout << "5.  if you want to Sort and display all records in ascending order based on marks in Final.(Enter 5) : \n\n";

	cout << "6.  if you want to Sort and display all records in descending order based on marks in Final. (Enter 6) : \n\n";

	cout << "7.  if you want to Sort and display all records in ascending order based on Grade.(Enter 7) : \n\n";

	cout << "8.  if you want to Sort and display all records in descending order based on Grade. (Enter 8) : \n\n";

	cout << "9.  if you want to Add a new entry of a student.(Enter 9) : \n\n";

	cout << "10. if you want to Delete a student record based on his roll number.(Enter 10) : \n\n";

	cout << "11. if you want to see the record of all the students greater than X marks in final exam \n"
		<< "    (in descending order with respect to marks obtained in final exam). (Enter 11) : \n\n";

	cout << "12. if you wanted to see the record of all the students greater than X marks in final exam \n"
		<< "    (in ascending order with respect to marks obtained in final exam). (Enter 12) : \n\n";

	cout << "13. if you want to see the record of all the students less than or equal to X marks in final exam\n"
		<< "    (in descending order with respect to marks obtained in final exam). (Enter 13) : \n\n";

	cout << "14. if you wanted to see the record of all the students less than or equal to X marks in final exam \n"
		<< "    (in ascending order with respect to marks obtained in final exam). (Enter 14) : \n\n";

	cout << "15. if you want to see the record of all the students greater than X grade\n"
		<< "    (in descending order with respect to grade). (Enter 15) : \n\n";

	cout << "16. if you wanted to see the record of all the students greater than X grade \n"
		<< "    (in ascending order with respect to grade). (Enter 16) : \n\n";

	cout << "17. if you wanted to see the record of all the students less than or equal to X grade\n"
		<< "    (in descending order with respect to grade). (Enter 17) : \n\n";

	cout << "18. if you wanted to see the record of all the students less than or equal to X grade \n"
		<< "    (in ascending order with respect to grade). (Enter 18) : \n";

	cin >> decision;

	while (decision < 1 || decision>18)
	{
		cout << "ERROR!! Invalid Input.\n";
		cout << "Please Enter the number mention in the Main Menu.\n";
		cout << "Enter the Number again : ";
		cin >> decision;
	}

	cout << "_________________________________________________________________________________________________";
	cout << endl;

	//************************************************************************************************************************
		// Task 1
		// Sort and display all the records roll number wise in ascending order.  

	//************************************************************************************************************************

	if (decision == 1)
	{
		for (int i = 0; i < numberOfStudents - 1; i++)
		{

			for (int j = 0; j < numberOfStudents - 1; j++)
			{
				if (rollNumber[j] > rollNumber[j + 1])
				{
					temp = rollNumber[j];
					rollNumber[j] = rollNumber[j + 1];
					rollNumber[j + 1] = temp;

					temp1 = midTerm[j];
					midTerm[j] = midTerm[j + 1];
					midTerm[j + 1] = temp1;

					temp1 = finalTerm[j];
					finalTerm[j] = finalTerm[j + 1];
					finalTerm[j + 1] = temp1;

					temp = classOfStudent[j];
					classOfStudent[j] = classOfStudent[j + 1];
					classOfStudent[j + 1] = temp;

					temp3 = grades[j];
					grades[j] = grades[j + 1];
					grades[j + 1] = temp3;

				}
			}
		}
		for (int i = 0; i < numberOfStudents; i++)
		{
			cout << "| Roll No : " << left << setw(5) << rollNumber[i] << "| Mid term Marks : " << setw(5) << midTerm[i] <<
				"| Final term Marks : " << setw(5) << finalTerm[i] << "| Class : " << setw(5) << classOfStudent[i] <<
				"| Grade : " << setw(5) << grades[i] << "|";
			cout << endl;

		}
	}

	//************************************************************************************************************************
		// task 2
		// Sort and display all the records roll number wise in descending order.

	//************************************************************************************************************************


	if (decision == 2)
	{

		for (int i = 0; i < numberOfStudents; i++)
		{
			for (int j = i + 1; j < numberOfStudents; j++)
			{
				if (rollNumber[i] < rollNumber[j])
				{
					temp = rollNumber[i];
					rollNumber[i] = rollNumber[j];
					rollNumber[j] = temp;

					temp1 = midTerm[i];
					midTerm[i] = midTerm[j];
					midTerm[j] = temp1;

					temp1 = finalTerm[i];
					finalTerm[i] = finalTerm[j];
					finalTerm[j] = temp1;

					temp = classOfStudent[i];
					classOfStudent[i] = classOfStudent[j];
					classOfStudent[j] = temp;

					temp3 = grades[i];
					grades[i] = grades[j];
					grades[j] = temp3;
				}

			}
		}
		for (int i = 0; i < numberOfStudents; i++)
		{
			cout << "| Roll No : " << left << setw(5) << rollNumber[i] << "| Mid term Marks : " << setw(5) << midTerm[i] <<
				"| Final term Marks : " << setw(5) << finalTerm[i] << "| Class : " << setw(5) << classOfStudent[i] <<
				"| Grade : " << setw(5) << grades[i] << "|";
			cout << endl;

		}


	}

	//************************************************************************************************************************
		// task 3
		// Sort and display all records in ascending order based on marks in Midterm 

	//************************************************************************************************************************

	if (decision == 3)
	{
		for (int i = 0; i < numberOfStudents - 1; i++)
		{



			for (int j = 0; j < numberOfStudents - 1; j++)
			{
				if (midTerm[j] > midTerm[j + 1])
				{
					temp = rollNumber[j];
					rollNumber[j] = rollNumber[j + 1];
					rollNumber[j + 1] = temp;

					temp1 = midTerm[j];
					midTerm[j] = midTerm[j + 1];
					midTerm[j + 1] = temp1;

					temp1 = finalTerm[j];
					finalTerm[j] = finalTerm[j + 1];
					finalTerm[j + 1] = temp1;

					temp = classOfStudent[j];
					classOfStudent[j] = classOfStudent[j + 1];
					classOfStudent[j + 1] = temp;

					temp3 = grades[j];
					grades[j] = grades[j + 1];
					grades[j + 1] = temp3;

				}
			}
		}

		for (int i = 0; i < numberOfStudents; i++)
		{
			cout << "| Mid term Marks : " << left << setw(5) << midTerm[i] << setw(5) << "| Roll No : " << setw(5) << rollNumber[i]
				<< "| Final term Marks : " << setw(5) << finalTerm[i] << "| Class : " << setw(5) << classOfStudent[i]
				<< "| Grade : " << setw(5) << grades[i] << "|";
			cout << endl;

		}
	}


	//************************************************************************************************************************
		// task 4
		// Sort and display all records in descending order based on marks in Midterm 

	//************************************************************************************************************************


	if (decision == 4)
	{

		for (int i = 0; i < numberOfStudents; i++)
		{
			for (int j = i + 1; j < numberOfStudents; j++)
			{
				if (midTerm[i] < midTerm[j])
				{
					temp = rollNumber[i];
					rollNumber[i] = rollNumber[j];
					rollNumber[j] = temp;

					temp1 = midTerm[i];
					midTerm[i] = midTerm[j];
					midTerm[j] = temp1;

					temp1 = finalTerm[i];
					finalTerm[i] = finalTerm[j];
					finalTerm[j] = temp1;

					temp = classOfStudent[i];
					classOfStudent[i] = classOfStudent[j];
					classOfStudent[j] = temp;

					temp3 = grades[i];
					grades[i] = grades[j];
					grades[j] = temp3;
				}

			}
		}

		for (int i = 0; i < numberOfStudents; i++)
		{
			cout << "| Mid term Marks : " << left << setw(5) << midTerm[i] << setw(5) << "| Roll No : " << setw(5) << rollNumber[i]
				<< "| Final term Marks : " << setw(5) << finalTerm[i] << "| Class : " << setw(5) << classOfStudent[i]
				<< "| Grade : " << setw(5) << grades[i] << "|";
			cout << endl;

		}


	}



	//************************************************************************************************************************
		// task 5
		// Sort and display all records in ascending order based on marks in Final

	//************************************************************************************************************************

	if (decision == 5)
	{
		//here i call the function that sort array of final term in ascending order.

		sortArraysBasedOnFinalMarksAscendingly(rollNumber, midTerm, finalTerm, classOfStudent, grades, numberOfStudents);



		for (int i = 0; i < numberOfStudents; i++)
		{
			cout << "| Final term Marks : " << left << setw(5) << finalTerm[i] << setw(5) << "| Roll No : " << setw(5) << rollNumber[i] <<
				"| Mid term Marks : " << setw(5) << midTerm[i] << "| Class : " << setw(5) << classOfStudent[i]
				<< "| Grade : " << setw(5) << grades[i] << "|";
			cout << endl;

		}
	}


	//************************************************************************************************************************
		// task 6
		// Sort and display all records in descending order based on marks in Final 
	//************************************************************************************************************************

	if (decision == 6)
	{

		//here is the function call that sort array of final term marks in descending order.

		sortArraysBasedOnFinalMarksDescendingly(finalTerm, rollNumber, midTerm, classOfStudent, grades, numberOfStudents);



		for (int i = 0; i < numberOfStudents; i++)
		{
			cout << "| Final term Marks : " << left << setw(5) << finalTerm[i] << setw(5) << "| Roll No : " << setw(5) << rollNumber[i] <<
				"| Mid term Marks : " << setw(5) << midTerm[i] << "| Class : " << setw(5) << classOfStudent[i]
				<< "| Grade : " << setw(5) << grades[i] << "|";
			cout << endl;

		}

	}



	//************************************************************************************************************************
		// task 7
		// Sort and display all records in ascending order based on Grade 

	//************************************************************************************************************************

	if (decision == 7)
	{

		//here is the function call that sort array of grades marks in ascending order.

		sortArraysBasedOnGradesAscendingly(grades, rollNumber, midTerm, finalTerm, classOfStudent, numberOfStudents);



		for (int i = 0; i < numberOfStudents; i++)
		{
			cout << "| Grade : " << left << setw(5) << grades[i] << "| Roll No : " << setw(5) << rollNumber[i]
				<< "| Mid term Marks : " << setw(5) << midTerm[i] <<
				"| Final term Marks : " << setw(5) << finalTerm[i] << "| Class : " << setw(5) << classOfStudent[i] << "|";
			cout << endl;

		}
	}


	//************************************************************************************************************************
		// task 8
		// Sort and display all records in descending order based on Grade 

	//************************************************************************************************************************

	if (decision == 8)
	{
		//here is the function call that sort array of grades marks in descending order.

		sortArraysBasedOnGradesDescendingly(grades, rollNumber, midTerm, finalTerm, classOfStudent, numberOfStudents);


		for (int i = 0; i < numberOfStudents; i++)
		{
			cout << "| Grade : " << left << setw(5) << grades[i] << "| Roll No : " << setw(5) << rollNumber[i]
				<< "| Mid term Marks : " << setw(5) << midTerm[i] <<
				"| Final term Marks : " << setw(5) << finalTerm[i] << "| Class : " << setw(5) << classOfStudent[i] << "|";
			cout << endl;

		}
	}

	//************************************************************************************************************************
		//task 9
		//Add a new entry of a student. 

	//************************************************************************************************************************

	if (decision == 9)
	{


		if (numberOfStudents != N)
		{
			cout << "Please Enter the record of new Student below.\n";
			cout << "Enter the Roll no. of student.";
			cin >> rollNumber[numberOfStudents];

			// check if the roll number is same or not if same then take the input again.

			for (int i = 0; i < numberOfStudents; i++)
			{
				while (rollNumber[numberOfStudents] == rollNumber[i])
				{
					cout << endl;
					cout << "Roll no. of the student should be unique.\n";
					cout << "Please ! Enter the Roll no. again. ";
					cin >> rollNumber[numberOfStudents];
				}

			}

			cout << "Enter the Mid Term  Marks of student " << rollNumber[numberOfStudents] << "  :";
			cin >> midTerm[numberOfStudents];

			cout << "Enter the Final Term  Marks of student " << rollNumber[numberOfStudents] << "  :";
			cin >> finalTerm[numberOfStudents];

			grades[numberOfStudents] = getGrades(finalTerm[numberOfStudents]);


			cout << "Enter class of student " << rollNumber[numberOfStudents] << "  :";
			cin >> classOfStudent[numberOfStudents];



			char EntryDecision;

			cout << "\nDo you wanted to add more students ? (Y/N) : ";
			cin >> EntryDecision;

			if (EntryDecision == 'N' || EntryDecision == 'n')
			{
				numberOfStudents++;
			}

			while (EntryDecision == 'Y' || EntryDecision == 'y')
			{
				numberOfStudents++;

				if (numberOfStudents != N || numberOfStudents < N)
				{
					cout << "Please Enter the record of new Student below.\n";
					cout << "Enter the Roll no. of student.";
					cin >> rollNumber[numberOfStudents];

					// check if the roll number is same or not if same then take the input again.

					for (int i = 0; i < numberOfStudents; i++)
					{
						while (rollNumber[numberOfStudents] == rollNumber[i])
						{
							cout << endl;
							cout << "Roll no. of the student should be unique.\n";
							cout << "Please ! Enter the Roll no. again. ";
							cin >> rollNumber[numberOfStudents];
						}

					}

					cout << "Enter the Mid Term  Marks of student " << rollNumber[numberOfStudents] << "  :";
					cin >> midTerm[numberOfStudents];

					cout << "Enter the Final Term  Marks of student " << rollNumber[numberOfStudents] << "  :";
					cin >> finalTerm[numberOfStudents];

					grades[numberOfStudents] = getGrades(finalTerm[numberOfStudents]);

					cout << "Enter class of student " << rollNumber[numberOfStudents] << "  :";
					cin >> classOfStudent[numberOfStudents];


					cout << "\nDo you wanted to add more students ? (Y/N) : ";
					cin >> EntryDecision;

				}
				else
				{
					cout << "Arrays are full.";
					cout << "More Data could not be inserted";
					cout << "\nif you wanted to see the record press N : ";
					cin >> EntryDecision;
				}


			}
		}
		else
		{
			cout << "Arrays are full.\n";
			cout << "More data could not be inserted.\n";

		}

		cout << "_________________________________________________________________________________________________\n";

		for (int i = 0; i < numberOfStudents; i++)
		{
			cout << "| Roll No : " << left << setw(5) << rollNumber[i] << "| Mid term Marks : " << setw(5) << midTerm[i] <<
				"| Final term Marks : " << setw(5) << finalTerm[i] << "| Class : " << setw(5) << classOfStudent[i] <<
				"| Grade : " << setw(5) << grades[i] << "|";
			cout << endl;

		}





	}

	//************************************************************************************************************************
				// task 10
				// Delete a student record based on his roll number.
	//************************************************************************************************************************

	if (decision == 10)
	{
		cout << "Enter Rollnumber which you want to delete the data of: ";
		cin >> roll;

		for (int i = 0; i < numberOfStudents; i++)
		{
			if (roll == rollNumber[i])
			{

				for (int j = i + 1; j < (numberOfStudents); j++)
				{
					rollNumber[i] = rollNumber[j];
					midTerm[i] = midTerm[j];
					finalTerm[i] = finalTerm[j];
					classOfStudent[i] = classOfStudent[j];
					grades[i] = grades[j];
					i++;
				}

				numberOfStudents--;  //because one student will be less now, you shoul do++ in task 9.


			}

		}
		cout << "\nRecord of Roll no." << roll << " is deleted\n";
		cout << "The New Record is :\n";

		cout << "_________________________________________________________________________________________________\n";

		for (int i = 0; i < numberOfStudents; i++)
		{
			cout << "| Roll No : " << left << setw(5) << rollNumber[i] << "| Mid term Marks : " << setw(5) << midTerm[i] <<
				"| Final term Marks : " << setw(5) << finalTerm[i] << "| Class : " << setw(5) << classOfStudent[i] <<
				"| Grade : " << setw(5) << grades[i] << "|";
			cout << endl;

		}


	}

	//************************************************************************************************************************
			//task 11

		// Display record of all the students greater than X marks in final exam
		// (in descending order with respect to marks obtained in final exam)

	//************************************************************************************************************************

	if (decision == 11)
	{
		cout << "Enter Final marks from which you want to get higher marks in descending order: ";
		cin >> marks;

		cout << "_________________________________________________________________________________________________\n";

		//here is the function call that sort array of final term marks in descending order.

		sortArraysBasedOnFinalMarksDescendingly(finalTerm, rollNumber, midTerm, classOfStudent, grades, numberOfStudents);

		for (int i = 0; i < numberOfStudents; i++)
		{
			if (finalTerm[i] >= marks)
			{
				counter++;

				cout << "| Final term Marks : " << left << setw(5) << finalTerm[i] << setw(5) << "| Roll No : " << setw(5) << rollNumber[i]
					<< "| Mid term Marks : " << setw(5) << midTerm[i] << "| Class : " << setw(5) << classOfStudent[i]
					<< "| Grade : " << setw(5) << grades[i] << "|";
				cout << endl;
			}
		}

		if (counter == 0)
		{
			cout << "\nthere is no student having marks greater than " << marks << " Marks";
			cout << endl;
		}

	}



	//************************************************************************************************************************
			//task 12

		//Display record of all the students greater than X marks in final exam
		//(in ascending order with respect to marks obtained in final exam).
	//************************************************************************************************************************



	if (decision == 12)
	{


		cout << "Enter the final term Marks ";
		cin >> marks;

		cout << "_________________________________________________________________________________________________\n";

		//here is the function call that sort array of final term marks in ascending order.

		sortArraysBasedOnFinalMarksAscendingly(rollNumber, midTerm, finalTerm, classOfStudent, grades, numberOfStudents);

		for (int i = 0; i < numberOfStudents; i++)
		{
			if (finalTerm[i] > marks)
			{

				counter++;

				cout << "| Final term Marks : " << left << setw(5) << finalTerm[i] << setw(5) << "| Roll No : " << setw(5) << rollNumber[i]
					<< "| Mid term Marks : " << setw(5) << midTerm[i] << "| Class : " << setw(5) << classOfStudent[i]
					<< "| Grade : " << setw(5) << grades[i] << "|";
				cout << endl;



			}


		}


		if (counter == 0)
		{
			cout << "\nthere is no student having marks greater than " << marks << " Marks";
			cout << endl;
		}

	}

	//************************************************************************************************************************
					//task 13
		//  Display record of all the students less than or equal to X marks in final exam
		// (in descending order with respect to marks obtained in final exam). 

	//************************************************************************************************************************

	if (decision == 13)
	{
		cout << "Enter Final marks from which you want to get lower marks in descending order: ";
		cin >> marks;

		cout << "_________________________________________________________________________________________________\n";

		//here is the function call that sort array of final term marks in descending order.

		sortArraysBasedOnFinalMarksDescendingly(finalTerm, rollNumber, midTerm, classOfStudent, grades, numberOfStudents);

		for (int i = 0; i < numberOfStudents; i++)
		{
			if (finalTerm[i] <= marks)
			{

				counter++;

				cout << "| Final term Marks : " << left << setw(5) << finalTerm[i] << setw(5) << "| Roll No : " << setw(5) << rollNumber[i]
					<< "| Mid term Marks : " << setw(5) << midTerm[i] << "| Class : " << setw(5) << classOfStudent[i]
					<< "| Grade : " << setw(5) << grades[i] << "|";
				cout << endl;



			}


		}


		if (counter == 0)
		{
			cout << "\nthere is no student having marks less than or Equal to " << marks << " Marks";
			cout << endl;
		}

	}

	//************************************************************************************************************************
				//task 14
		// Display record of all the students less than or equal to X marks in final exam. 
		// (in ascending order with respect to marks obtained in final exam). 

	//************************************************************************************************************************

	if (decision == 14)
	{


		cout << "Enter the final term Marks ";
		cin >> marks;

		cout << "_________________________________________________________________________________________________\n";

		//here is the function call that sort array of final term marks in ascending order.

		sortArraysBasedOnFinalMarksAscendingly(rollNumber, midTerm, finalTerm, classOfStudent, grades, numberOfStudents);

		for (int i = 0; i < numberOfStudents; i++)
		{
			if (finalTerm[i] <= marks)
			{

				counter++;

				cout << "| Final term Marks : " << left << setw(5) << finalTerm[i] << setw(5) << "| Roll No : " << setw(5) << rollNumber[i]
					<< "| Mid term Marks : " << setw(5) << midTerm[i] << "| Class : " << setw(5) << classOfStudent[i]
					<< "| Grade : " << setw(5) << grades[i] << "|";
				cout << endl;



			}


		}


		if (counter == 0)
		{
			cout << "\nthere is no student having marks Less than or Equal to " << marks << " Marks";
			cout << endl;
		}

	}


	//************************************************************************************************************************
						//task 15
		// Display record of all the students greater than X grade
		// (in descending order with respect to grade). 
	//************************************************************************************************************************
	if (decision == 15)
	{

		cout << "Enter the Grades \n";
		cout << "(Please Enter a Capital Character) : ";
		cin >> gradeMarks;

		cout << "_________________________________________________________________________________________________\n";

		//here is the function call that sort array of grades marks in descending order.

		sortArraysBasedOnGradesDescendingly(grades, rollNumber, midTerm, finalTerm, classOfStudent, numberOfStudents);

		for (int i = 0; i < numberOfStudents; i++)
		{
			if (grades[i] < gradeMarks)
			{
				counter++;


				cout << "| Grade : " << left << setw(5) << grades[i] << "| Roll No : " << setw(5) << rollNumber[i]
					<< "| Mid term Marks : " << setw(5) << midTerm[i] <<
					"| Final term Marks : " << setw(5) << finalTerm[i] << "| Class : " << setw(5) << classOfStudent[i] << "|";

				cout << endl;
			}
		}

		if (counter == 0)
		{
			cout << "\nThere is no student having Grades marks Greater than " << gradeMarks << "  grade  ";
			cout << endl;
		}



	}

	//************************************************************************************************************************
			// task 16
		// Display record of all the students greater than X grade 
		// (in ascending order with respect to grade).
	//************************************************************************************************************************


	if (decision == 16)
	{

		cout << "Enter the Grades \n";
		cout << "(Please Enter a Capital Character) : ";
		cin >> gradeMarks;

		cout << "_________________________________________________________________________________________________\n";

		//here is the function call that sort array of grade marks in ascending order.

		sortArraysBasedOnGradesAscendingly(grades, rollNumber, midTerm, finalTerm, classOfStudent, numberOfStudents);

		for (int i = 0; i < numberOfStudents; i++)
		{
			if (grades[i] < gradeMarks)
			{

				counter++;


				cout << "| Grade : " << left << setw(5) << grades[i] << "| Roll No : " << setw(5) << rollNumber[i]
					<< "| Mid term Marks : " << setw(5) << midTerm[i] <<
					"| Final term Marks : " << setw(5) << finalTerm[i] << "| Class : " << setw(5) << classOfStudent[i] << "|";

				cout << endl;



			}


		}


		if (counter == 0)
		{
			cout << "\nThere is no student having Grades marks less than or equal to " << gradeMarks << "  grade  ";
			cout << endl;
		}



	}

	//************************************************************************************************************************
						//task 17
		// Display record of all the students less than or equal to X grade
		// (in descending order with respect to grade).
	//************************************************************************************************************************

	if (decision == 17)
	{
		cout << "Enter the Grades \n";
		cout << "(Please Enter a Capital Character) : ";
		cin >> gradeMarks;

		cout << "_________________________________________________________________________________________________\n";

		//here is the function call that sort array of grade marks in descending order.

		sortArraysBasedOnGradesDescendingly(grades, rollNumber, midTerm, finalTerm, classOfStudent, numberOfStudents);

		for (int i = 0; i < numberOfStudents; i++)
		{
			if (grades[i] >= gradeMarks)
			{

				counter++;


				cout << "| Grade : " << left << setw(5) << grades[i] << "| Roll No : " << setw(5) << rollNumber[i]
					<< "| Mid term Marks : " << setw(5) << midTerm[i] <<
					"| Final term Marks : " << setw(5) << finalTerm[i] << "| Class : " << setw(5) << classOfStudent[i] << "|";

				cout << endl;



			}


		}


		if (counter == 0)
		{
			cout << "\nThere is no student having Grades marks less than or equal to " << gradeMarks << "  grade  ";
			cout << endl;
		}

	}

	//************************************************************************************************************************
						//task 18
		// Display record of all the students less than or equal to X grade
		// (in ascending order with respect to grade).

	//************************************************************************************************************************


	if (decision == 18)
	{

		cout << "Enter the Grades \n";
		cout << "(Please Enter a Capital Character) : ";

		cin >> gradeMarks;

		cout << "_________________________________________________________________________________________________\n";

		//here is the function call that sort array of grade marks in ascending order.

		sortArraysBasedOnGradesAscendingly(grades, rollNumber, midTerm, finalTerm, classOfStudent, numberOfStudents);

		for (int i = 0; i < numberOfStudents; i++)
		{
			if (grades[i] >= gradeMarks)
			{

				counter++;


				cout << "| Grade : " << left << setw(5) << grades[i] << "| Roll No : " << setw(5) << rollNumber[i]
					<< "| Mid term Marks : " << setw(5) << midTerm[i] <<
					"| Final term Marks : " << setw(5) << finalTerm[i] << "| Class : " << setw(5) << classOfStudent[i] << "|";

				cout << endl;



			}


		}


		if (counter == 0)
		{
			cout << "\nThere is no student having Grades marks less than or equal to " << gradeMarks << "  grade  ";
			cout << endl;
		}



	}








	cout << "_________________________________________________________________________________________________";








}
//*******************************************************************************************
// defination of functions.																	*
// here i define a function that accept array of roll number at its first index,			*
// array of mid term, final term, class of students, grades and at last number of students  *
// Sort  Array of Final Marks in Ascending Order. By using the concept of Parallel Arrays,  *
// all other arrays will also be sorted accordingly											*
//*******************************************************************************************

void sortArraysBasedOnFinalMarksAscendingly(int rollNumber[], float midTerm[], float finalTerm[],
	int classOfStudent[], char grades[], int numOfStudents)
{

	int  temp;
	float temp1;
	char temp3;

	for (int i = 0; i < numOfStudents - 1; i++)
	{



		for (int j = 0; j < numOfStudents - 1; j++)
		{
			if (finalTerm[j] > finalTerm[j + 1])
			{
				temp = rollNumber[j];
				rollNumber[j] = rollNumber[j + 1];
				rollNumber[j + 1] = temp;

				temp1 = midTerm[j];
				midTerm[j] = midTerm[j + 1];
				midTerm[j + 1] = temp1;

				temp1 = finalTerm[j];
				finalTerm[j] = finalTerm[j + 1];
				finalTerm[j + 1] = temp1;

				temp = classOfStudent[j];
				classOfStudent[j] = classOfStudent[j + 1];
				classOfStudent[j + 1] = temp;

				temp3 = grades[j];
				grades[j] = grades[j + 1];
				grades[j + 1] = temp3;

			}
		}
	}





}

//***********************************************************************************************
// defination of functions.																		*
// here i define a function that accept array of Grades at its first index,						*
// array of roll number, mid term, final term, class of students,and at last number of students *
// Sort  Array of Grades in Ascending Order. By using the concept of Parallel Arrays,			*
// all other arrays will also be sorted accordingly												*
//***********************************************************************************************

void sortArraysBasedOnGradesAscendingly(char grades[], int rollNumber[], float midTerm[], float finalTerm[],
	int classOfStudent[], int numOfStudents)
{

	int  temp;
	float temp1;
	char temp3;



	for (int i = 0; i < numOfStudents - 1; i++)
	{

		for (int j = 0; j < numOfStudents - 1; j++)
		{
			if (grades[j] > grades[j + 1])
			{
				temp = rollNumber[j];
				rollNumber[j] = rollNumber[j + 1];
				rollNumber[j + 1] = temp;

				temp1 = midTerm[j];
				midTerm[j] = midTerm[j + 1];
				midTerm[j + 1] = temp1;

				temp1 = finalTerm[j];
				finalTerm[j] = finalTerm[j + 1];
				finalTerm[j + 1] = temp1;

				temp = classOfStudent[j];
				classOfStudent[j] = classOfStudent[j + 1];
				classOfStudent[j + 1] = temp;

				temp3 = grades[j];
				grades[j] = grades[j + 1];
				grades[j + 1] = temp3;

			}
		}
	}

}

//********************************************************************************************
// defination of functions.																	 *
//																							 *
// here i define a function that accept array of final marks at its first index,			 *
// array of roll number, mid term, class of students, grades and at last number of students  *
// Sort  Array of final term in Descending Order. By using the concept of Parallel Arrays,   *
// all other arrays will also be sorted accordingly											 *
//********************************************************************************************

void sortArraysBasedOnFinalMarksDescendingly(float finalTerm[], int rollNumber[], float midTerm[],
	int classOfStudent[], char grades[], int numberOfStudents)
{
	int  temp;
	float temp1;
	char temp3;

	for (int i = 0; i < numberOfStudents; i++)
	{
		for (int j = i + 1; j < numberOfStudents; j++)
		{
			if (finalTerm[i] < finalTerm[j])
			{
				temp = rollNumber[i];
				rollNumber[i] = rollNumber[j];
				rollNumber[j] = temp;

				temp1 = midTerm[i];
				midTerm[i] = midTerm[j];
				midTerm[j] = temp1;

				temp1 = finalTerm[i];
				finalTerm[i] = finalTerm[j];
				finalTerm[j] = temp1;

				temp = classOfStudent[i];
				classOfStudent[i] = classOfStudent[j];
				classOfStudent[j] = temp;

				temp3 = grades[i];
				grades[i] = grades[j];
				grades[j] = temp3;
			}

		}
	}


}
//***********************************************************************************************
// defination of functions.																		*
// here i define a function that accept array of Grades at its first index,						*
// array of roll number, mid term, final term, class of students,and at last number of students *
// Sort  Array of Grades in Descending Order. By using the concept of Parallel Arrays,			*
// all other arrays will also be sorted accordingly												*
//***********************************************************************************************

void sortArraysBasedOnGradesDescendingly(char grades[], int rollNumber[], float midTerm[], float finalTerm[],
	int classOfStudent[], int numberOfStudents)
{
	int  temp;
	float temp1;
	char temp3;

	for (int i = 0; i < numberOfStudents; i++)
	{
		for (int j = i + 1; j < numberOfStudents; j++)
		{
			if (grades[i] < grades[j])
			{
				temp = rollNumber[i];
				rollNumber[i] = rollNumber[j];
				rollNumber[j] = temp;

				temp1 = midTerm[i];
				midTerm[i] = midTerm[j];
				midTerm[j] = temp1;

				temp1 = finalTerm[i];
				finalTerm[i] = finalTerm[j];
				finalTerm[j] = temp1;

				temp = classOfStudent[i];
				classOfStudent[i] = classOfStudent[j];
				classOfStudent[j] = temp;

				temp3 = grades[i];
				grades[i] = grades[j];
				grades[j] = temp3;
			}

		}
	}
}

//***********************************************************************************************
// defination of functions.																		*
// here i define a function that accept array of final term marks and assign Grades	and it.		*
//***********************************************************************************************

char getGrades(float finalTerm)
{
	char grades;

	if (finalTerm < 50)
	{
		grades = 'F';
	}
	if (finalTerm >= 50 && finalTerm <= 59)
	{
		grades = 'D';
	}
	if (finalTerm >= 60 && finalTerm <= 72)
	{
		grades = 'C';
	}
	if (finalTerm >= 73 && finalTerm <= 85)
	{
		grades = 'B';
	}
	if (finalTerm >= 86)
	{
		grades = 'A';
	}

	return grades;


}
