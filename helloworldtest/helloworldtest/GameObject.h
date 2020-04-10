#pragma once
#include <string>

using namespace std;

//#SimonM A parent class that contains common fields for game objects
class GameObject
{
private:

	//identifier for a game object
	string ID;

	//height of object in pixels
	int height;

	//width of object in pixels
	int width;

	//x-axis location
	int xLocation;

	//y-axis location
	int yLocation;

	//speed at which the object moves
	double speed;

public:
	//Constructor
	GameObject();

	//getters
	int getHeight();
	int getWidth();
	int getX();
	int getY();
	string getID();
	double getSpeed();

	//setters
	void setHeight(int h);
	void setWidth(int w);
	void setX(int x);
	void setY(int y);
	void setID(string name);
	void setSpeed(double newSpeed);
};

