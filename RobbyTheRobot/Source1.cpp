#include <iostream>
#include "GraphicsManager.h"	

//Ignore this!!
Room* room;
Robot* robby;
GraphicsManager* picture;
//

int main()
{
	//declare the room, robby and picture objects here
	room = new Room(0);
	robby = new Robot();
	picture = new GraphicsManager(room, robby);

	picture->draw();
	robby->right();
	picture->draw();
	

	
	for (int steps = 0; steps < 17; steps++)
	{
		robby->move();
		picture->draw();
		for (int i = 0; i < 4; i++)
			{ }
	}

	
	robby->right();
	picture->draw();

	robby->right();
	picture->draw();


	//we need system pause so that we can see where robby ends up
	system("pause");


	
}