/* Structures and Pointers
 * for using a structure with pointers and stuff read this code below
 * the general algo is intialize, allocate, deallocate(for *char and array types only)
 * the int types are usually taken care of
 * for more information refer to book: Understanding and Using Pointers by Richard Reese (page no: 136)
 */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct
{
	char *name;
	char *owner;
	unsigned int number;
}Car;

int main()
{
	void processCar();
}

void processCar()
{
	Car *ptrCar;
	ptrCar = (Car*)malloc(sizeof(Car));

	void initializeCar(Car *car, const char *car_name, const char *car_owner, uint num);
	void deallocateCar(Car *car);

	initializeCar(ptrCar, "Bentley", "Harsh Kumar", 1995);
	deallocateCar(ptrCar);
	free(ptrCar);
}

void initializeCar(Car *c_one, const char *cn, const char *co, uint num)
{
	c_one->name = (char*)malloc(sizeof(strlen(cn))+1);
	strcpy(c_one->name, cn);

	c_one->owner = (char*)malloc(sizeof(strlen(co))+1);
	strcpy(c_one->owner, co);

	c_one->number = num;
}

void deallocateCar(Car *c_one)
{
	free(c_one->name);
	free(c_one->owner);
}
