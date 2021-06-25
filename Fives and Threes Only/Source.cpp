#include<iostream>
using namespace std;
//Fivesand Threes Only
//Starting with either 3 or 5 and given these operations :
//add 5
//multiply by 3

//You should say if it is possible to reach the target number n.

bool only5and3(int num)
{


	//check if num is a multiple of 5
	if (num % 5 == 0)
	{
		num -= 5;
		return true;
		
	}
	//check if num is a multiple of 3
	else if (num % 3 == 0)
	{
		num /= 3;
		return true;
		
	}
	//check if num equal 3 or 5 after subtracting 5 from the orignal num
	if (num < 3)
	{
			return false;
	}
	if (num == 3 || num == 5)
	{
			return true;
	}
	num -= 5;
	only5and3(num);
}

int main()
{
	int num;
	bool isit5or3;
	cout << "Please enter a number ";
	cin >> num;
	isit5or3 = only5and3(num);
	if (isit5or3 == true)
	{
		cout << "It is possible to reach the target number " << num << endl;

	}
	else
	{
		cout << "It is not possible to reach the target number " <<num << endl;
	}
	

}