#include "OGL3D/Game/OGame.h"
#include <iostream>

int main()
{
	try
	{
		OGame game;
		game.Run();
	}
	catch (const std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
		return -1;
	}

	return 0;
}