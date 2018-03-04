/*!
 * \file util.h
 * \brief Utility Functions
 * \author Mira Kabra
 * \note To be implemented.
 */

#ifndef CAD_UTIL_H
#define CAD_UTIL_H

#include <vector>
#include <string>
#include "Point.h"

using namespace std;
/*!
 * Utility function for reading projection specification from given file.
 * @param projFilePath path to file containing projection specification
 * @return List of 2D coordinates of points
 */
vector<point2D> read2DProj(string projFilePath);

/*!
 * Utility function for reading projection specification from given file.
 * @param projFilePath path to file containing projection specification
 * @return List of 2D coordinates of points
 */
vector<point2D> read2DProj(string projFilePath);


/*!
 * Utility function for reading 3D model specification from given file.
 * @param modelFilePath path to file containing projection specification
 * @return List of 3D coordinates of points
 */
vector<point3D> read3DModel(string modelFilePath);

/*!
 * Utility function for reading adjacency list from given file.
 * @param adjFilePath path to file containing projection specification
 * @return adjacency list
 */
vector<vector<int>> readAdjacencyList(string adjFilePath);

#endif //CAD_UTIL_H
