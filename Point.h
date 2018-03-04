/*!
 * \file Point.h
 * \brief Definitions of Point classes.
 * \author Mira Kabra
 * \version 1.0
 * \date 04-03-2018
 * \note The current proposed structure. Implementation yet to be started.
 */

#ifndef POINT_H
#define POINT_H

/*!
 * \struct point3D
 * \brief Points with 3 coordinates
 */
struct point3D {
    double x, y, z;
};

/*!
 * \struct point2D
 * \brief Points with 2 coordinates
 */
struct point2D {
    double x, y;
};

#endif ///POINT_H