//
//  Controls.hpp
//  Project
//
//  Created by Trident on 16/03/2018.
//

#ifndef Controls_h
#define Controls_h
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glew.h>
#include <GL/glut.h>
#endif
#include <string>
#include <vector>
#include <math.h>
#include "Group.hpp"
#include </usr/local/Cellar/devil/1.8.0_1/include/IL/il.h>
#define _USE_MATH_DEFINES
#define LINE 1
#define FILL 2
#define BACK 3
#define FRONT 4
#define ROUTES 5

typedef struct controls {
    float rad = 5.0;
    float theta = 90*(2*M_PI)/360;
    float phi = 0;
    float x,y,z;
    int frame=0;
    int time;
    int timebase=0;
    int routes = 0;
    Group *scene;
}Controls;

#endif /* Controls_h */
