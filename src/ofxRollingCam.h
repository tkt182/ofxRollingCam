/*
 *  ofxRollingCam.h
 *
 *  Copyright (c) 2014, saebashi, https://twitter.com/saebashi
 *  All rights reserved.
*/
#pragma once


#ifndef __ofxRollingCam__
#define __ofxRollingCam__

#include <iostream>
#include "ofMain.h"
#define DEFAULT_CAM_SP 0.1
class ofxRollingCam : public ofCamera{
public:
    ofxRollingCam();
    void setup(float _camSpeed=DEFAULT_CAM_SP,float _distance=1.0);
    void update();
    void begin(ofRectangle viewport = ofRectangle());
    void end();
    void setCamSpeed(float _camSpeed);
    void setRandomPos(float _randomAngle=180);
    void setPos(float _x,float _y,float _z);
    void setRandomScale(float _min,float _max);
    void setScale(float _dist);
    void reset();

    ofVec3f getPosN(void);
    ofVec3f getPosT(void);
    ofVec3f getPosS(void);

    int _angle;
    float getAngle(void);

//    ofEasyCam cam;
    
    ofVec3f posN,posT,posS;
    ofLight lig;
    float camSpeed;
    float scaleN,scaleT,scaleS;
};
#endif
