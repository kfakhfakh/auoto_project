/*
 * navigation.h
 *
 *  Created on: Oct 3, 2024
 *      Author: User
 */

#ifndef INC_NAVIGATION_H_
#define INC_NAVIGATION_H_
void init (void);
void rotate(float angle, float speed); //angle (degree) ; speed (mm/s) (Wheel linear speed)
void move_distance(float distance,float speed);

#endif /* INC_NAVIGATION_H_ */
