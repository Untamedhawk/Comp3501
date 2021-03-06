#ifndef LEVEL_MANAGER_H_
#define LEVEL_MANAGER_H_
//
//
//
#include <exception>
#include <string>

#include "OGRE/OgreRoot.h"
#include "OGRE/OgreRenderSystem.h"
#include "OGRE/OgreRenderWindow.h"
#include "OGRE/OgreWindowEventUtilities.h"
#include "OGRE/OgreManualObject.h"
#include "OGRE/OgreEntity.h"
#include "OIS/OIS.h"

namespace AsteroidGame{
	class AsteroidGame; //Forward Declaration

	class LevelManager{
		//
		//Public Variables
	public:

		//
		//Private Variables
	private:
		AsteroidGame* iApplication;

		//
		//Public Methods
	public:
		LevelManager(AsteroidGame* aApplication);
		//
		//Private Methods
	private:
	};
}

#endif//LEVEL_MANAGER_H_