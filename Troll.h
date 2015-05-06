/*******************************************************************************
 *
 * CS 360 Spring 2015 Program 2
 * File: Troll.h
 * Author: Mitch Montchalin
 * Last Edit: 05/4/2015
 * Description: This is the Troll Header file. The Troll class is a child class 
 * 	of Enemy. The Troll has 4 functions that are define pure virtual in the Enemy 
 * class attack, injure, update, and print.
 * 	
 *******************************************************************/

#ifndef TROLL_H
#define TROLL_H

#include "Enemy.h"

class Troll: public Enemy{
 	private:
 		int initialHealth;

 	public:
	/* The constructor recieves the health, strength, constitution, 
	 * x position, and y position. and creates the enemy.
	 *
	 * Returns: none
	 */
 	Troll(int hpIn, int strIn, int conIn, int xPosIn, int yPosIn);
 	~Troll(){};

	/* update updates the enemy's location. Troll's move in the x direction
	 *	between -7 and -10 units or between 7 and 10 units
	 * 	per turn. This updates the xPos and yPos. They also regenerate Health
	 * equal to their constitution score with out exceeding their original health.
	 *
	 * paramters: none
	 * Returns: none
	 */
	 void update();
	 


	 /* Attack does damage to a passerby calculated with a random integer
	 * from  1 to 8 plus the strength of the Troll.
	 *
	 * paramters: none
	 * Returns: none
	 */
	 void attack();
	 	

	 /* Injure takes damage from the health of the enemy by the bystander. 
	 * The damage is a passed random integer between 0 and 10. The damage 
	 * taking from the enemy is damage - costitution*1.5 for Trolls.
	 * 
	 * paramters: int damage 
	 * Returns: none
	 */
	 void injure(int damage);

	 /* print() will print out the enemy information in the following format
	 *	type id @ (xLocation, yLocation) hp = currentHealth
	 *
	 * paramters: none
	 * Returns: none
	 */
	 void print();	
	 

 };

#endif
