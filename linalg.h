/*!
 * \file linalg.h
 * \brief Linear Algebraic Transformations using Eigen3
 * \author Mira Kabra
 * \version 1.0
 * \date 04-03-2018
 * \note The current proposed structure. Implementation yet to be started.
 */
#ifndef CAD_LINALG_H
#define CAD_LINALG_H

#include <vector>
#include<Eigen/Dense>

#include "Point.h"

using namespace std;

/*!
 * For evaluating the projection of 3D points on specified plane
 * \param points list of 3D points
 * \param perpendicular perpendicular to the plane
 * \return list of 2D projections of points on to the plane
 */
vector<point2D> Projection(vector<point3D> points, point3D perpendicular);


/*!
 * For evaluating 3D points from the projected points on two different planes
 * \param setOne list of 2D projections of points on to the first plane
 * \param setTwo list of 2D projections of points on to the second plane
 * \param Ori1 array containing projection of 3D points on the first plane
 * \param Ori2 array containing projection of 3D points on the second plane
 * \return will return the evaluated 3D points corresponding to the projected points
 */
vector<point3D> Build3D(vector<point2D> projList1, vector<point2D> projList2, point2D Ori1[3] , point2D Ori2[3]);

#endif ///CAD_LINALG_H