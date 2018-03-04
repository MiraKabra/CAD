/*!
 * \file graphics.h
 * \brief Functions for displaying 2D projections and 3D Model
 * \author Mira Kabra
 * \version 1.0
 * \date 04-03-2018
 * \note The current proposed structure. Implementation yet to be started.
 */
#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <vector>
#include<GL/glut.h> ///GLUT, include glu.h and gl.h
#include "Point.h"

using namespace std;


/*!
 * \brief Display 2D projection
 * \param points list of 2D points
 * \param adjList Shows the connectivity in terms of point number
*/
void Display2DProj(vector<point2D> points, vector<vector<int>> adjList);

/*!
 * \brief Display 3D model
 * \param points list of 3D points
 * \param adjList Shows connectivity in terms of point number
*/
void Display3D(vector<point3D> points, vector<vector<int>> adjList);

#endif ///GRAPHICS_H