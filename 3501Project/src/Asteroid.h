#ifndef ASTEROID_H_
#define ASTEROID_H_
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

namespace AsteroidGame {

	class Asteroid{

		//Variables
	private:
		//Private Variables
		Ogre::SceneNode* iNode;
		Ogre::Vector3 iVelocity;

		int iTier;
		int iValue;
		int iHealth;
		double iRadius;
		double iSpeed;


	public:
		//Public Variables

		//
		//Methods
		//
	private:
		//Private Methods

	public:
		//Public Methods

		//Constructors
		Asteroid(Ogre::SceneNode* aNode, int aTier);
		Asteroid(Ogre::SceneNode* aNode, int aTier, int aValue, int aHealth, double aRadius);

		void update();
		
		Ogre::SceneNode* getNode() { return iNode; }
		int getTier() { return iTier; }
		int getValue() { return iValue; }
		int getHealth() { return iHealth; }
		double getRadius() { return iRadius; }
		
		void setNode(Ogre::SceneNode* aNode) { iNode = aNode; }
		void setTier(int aTier) { iTier = aTier; }
		void setValue(int aValue) { iValue = aValue; }
		void setHealth(int aHealth) { iHealth = aHealth; }
		void setRadius(double aRadius) { iRadius = aRadius; } 
		

	};

}

#endif//ASTEROID_H_