/*
-----------------------------------------------------------------------------
Filename:    TutorialApplication.h
-----------------------------------------------------------------------------

This source file is part of the
   ___                 __    __ _ _    _ 
  /___\__ _ _ __ ___  / / /\ \ (_) | _(_)
 //  // _` | '__/ _ \ \ \/  \/ / | |/ / |
/ \_// (_| | | |  __/  \  /\  /| |   <| |
\___/ \__, |_|  \___|   \/  \/ |_|_|\_\_|
      |___/                              
      Tutorial Framework
      http://www.ogre3d.org/tikiwiki/
-----------------------------------------------------------------------------
*/


#ifndef __TutorialApplication_h_
#define __TutorialApplication_h_

#include "stdafx.h"
#include "BaseApplication.h"
#include <Terrain/OgreTerrain.h>
#include <Terrain/OgreTerrainGroup.h>


//////////////////////////////////////////////////////////////////////////

class BasicTutorial4 : public BaseApplication
{
public:
	BasicTutorial4(void);
	virtual ~BasicTutorial4(void);
protected:
	virtual void createScene(void);
	virtual bool frameRenderingQueued(const Ogre::FrameEvent& evt);
private:
	bool processUnbufferedInput(const Ogre::FrameEvent& evt);
};

class BasicTutorial3 : public BaseApplication
{
private:
	Ogre::TerrainGlobalOptions* mTerrainGlobals;
	Ogre::TerrainGroup* mTerrainGroup;
	bool mTerrainsImported;
	OgreBites::Label* mInfoLabel;

	void defineTerrain(long x, long y);
	void initBlendMaps(Ogre::Terrain* terrain);
	void configureTerrainDefaults(Ogre::Light* light);
public:
	BasicTutorial3(void);
	virtual ~BasicTutorial3(void);

protected:
	virtual void createScene(void);
	virtual void createFrameListener(void);
	virtual void destroyScene(void);
	virtual bool frameRenderingQueued(const Ogre::FrameEvent& evt);
};


#endif // #ifndef __TutorialApplication_h_
