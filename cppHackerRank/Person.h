#pragma once
#include <iostream>
#include <vector>
#include <string>

#pragma region DAY 4 
/*
class Person {
public:
	int age;
	Person(int initialAge);
	void amIOld();
	void yearPasses();
};
*/
#pragma endregion DAY 4 

#pragma region DAY 12
/*
using namespace std;

class Person {
protected:
	string firstName;
	string lastName;
	int id;
public:
	Person(string firstName, string lastName, int identification);
		void printPerson();
};

class Student : public Person {
private:
	vector<int> testScores;
	char grade;
public:
	
	*   Class Constructor
	*
	*   Parameters:
	*   firstName - A string denoting the Person's first name.
	*   lastName - A string denoting the Person's last name.
	*   id - An integer denoting the Person's ID number.
	*   scores - An array of integers denoting the Person's test scores.
	
	// Write your constructor here
	Student(string firstName, string lastName, int identification, vector<int> testScores);
	char calculate();
	
	*   Function Name: calculate
	*   Return: A character denoting the grade.
	
	// Write your function here
};
*/
#pragma endregion DAY 12

#pragma region DAY 13 
/*
using namespace std;
class Book {
protected:
	string title;
	string author;
public:
	Book(string t, string a);
	virtual void display() = 0;

};

class MyBook : Book
{
private:
	int price;
public:
	MyBook(string t, string a, int price);
	void display() override

};
*/
#pragma endregion DAY 13

#pragma region DAY 14
/*
using namespace std;


class Difference {
private:
	vector<int> elements;

public:
	int maximumDifference;
	Difference(vector<int> elements);

	void computeDifference();

};
*/
#pragma endregion DAY 14

#pragma region DAY 15
/*
using namespace std;

class Node
{
public:
	int data;
	Node *next;
	Node(int d);
};

class Solution
{
public:
	Node* insert(Node *head, int data);
	void display(Node *head);
	
};
*/
#pragma endregion DAY 15