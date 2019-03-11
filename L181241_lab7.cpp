#include "bankAccount.h"

bankAccount** readFile(string, int);

int main()
{
	//task 1
	bankAccount *b1;
	b1 = new bankAccount(10, 13000, 15000);

	//task 2
	b1->print();
	b1->deposit(1000);
	b1->deposit(3000);
	b1->withdraw(10000);
	b1->withdraw(6000);
	b1->print();

	//task 3
	float array[3] = { 3000,5000,6000 };
	bankAccount *b2[2];
	b2[0] = new bankAccount(30, 2000, array, 3);
	b2[1] = new bankAccount(40, 255000, 400000);
	b2[0]->print();
	b2[1]->print();

	//task 4
	bankAccount **b3 = new bankAccount*[2];
	float array1[2] = { -5000,5000 };
	b3[0] = new bankAccount(50, 2000, array1, 2);
	b3[1] = new bankAccount(60, 6000, 400000);
	b3[0]->withdraw(1000);
	b3[0]->print();
	b3[1]->print();

	//task 5

	delete[] b1;
	delete[] b2;
	for (int i = 0; i < 2; i++)
		delete[] b3[i];
	delete[] b3;

	//task 6
	bankAccount** ptr=readFile("data.txt", 4);

}

bankAccount** readFile(string fileName,int size)
{

}













