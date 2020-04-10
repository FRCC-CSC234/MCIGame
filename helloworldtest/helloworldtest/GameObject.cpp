#include "GameObject.h"
// Team: Logic
// Author: Simon Martin


//Parent class containing common fields for game objects

/***********************************************************
#SimonM
Name: GameObject
Description: Constructor
**********************************************************/
GameObject::GameObject()
{
	string ID = NULL;
	int height = 0;
	int width = 0;
	int xLocation = 0;
	int yLocation = 0;
	double speed = 0;
}

/***********************************************************
#SimonM
Name: getHeight
Description: getter, returns height
**********************************************************/
int GameObject::getHeight()
{
	return height;
}

/***********************************************************
#SimonM
Name: getWidth
Description: getter, returns width
**********************************************************/
int GameObject::getWidth()
{
	return width;
}


/***********************************************************
#SimonM
Name: getX
Description: getter, returns xLocation
**********************************************************/
int GameObject::getX()
{
	return xLocation;
}

/***********************************************************
#SimonM
Name: getY
Description: getter, returns yLocation
**********************************************************/
int GameObject::getY()
{
	return yLocation;
}

/***********************************************************
#SimonM
Name: getID
Description: getter, returns ID
**********************************************************/
string GameObject::getID()
{
	return ID;
}

/***********************************************************
#SimonM
Name: getSpeed
Description: getter, returns speed
**********************************************************/
double GameObject::getSpeed()
{
	return speed;
}

//setters
/***********************************************************
#SimonM
Name: setHeight
Description: setter, takes int parameter and sets to height
**********************************************************/
void GameObject::setHeight(int h)
{
	this->height = h;
}

/***********************************************************
#SimonM
Name: setWidth
Description: setter, takes int parameter and sets to width
**********************************************************/
void GameObject::setWidth(int w)
{
	this->width = w;
}

/***********************************************************
#SimonM
Name: setX
Description: setter, takes int parameter and sets to xLocation
**********************************************************/
void GameObject::setX(int x)
{
	this->xLocation = x;
}

/***********************************************************
#SimonM
Name: setY
Description: setter, takes int parameter and sets to yLocation
**********************************************************/
void GameObject::setY(int y)
{
	this->yLocation = y;
}

/***********************************************************
#SimonM
Name: setID
Description: setter, takes string parameter and sets to ID
**********************************************************/
void GameObject::setID(string name)
{
	this->ID = name;
}

/***********************************************************
#SimonM
Name: setSpeed
Description: setter, takes double parameter and sets to speed
**********************************************************/
void GameObject::setSpeed(double newSpeed)
{
	this->speed = newSpeed;
}
