/*******************************************************************************
 *
 * CS 360 Spring 2015 Program 2
 * File: Orc.h
 * Author: Mitch Montchalin
 * Last Edit: 05/4/2015
 * Description: This is the Orc Header file. The Orc class is a child class 
 * 	of Enemy. The Orc has 4 functions that are define pure virtual in the Enemy 
 * class attack, injure, update, and print.
 * 	
 *******************************************************************************/

#ifndef Orc_H
#define Orc_H

#include "Enemy.h"

class Orc: public Enemy{
 	private:

 	public:
	/* The constructor recieves the health, strength, constitution, 
	 * x position, and y position. and creates the enemy.
	 *
	 * Returns: none
	 */
 	Orc(int hpIn, int strIn, int conIn, int xPosIn, int yPosIn);
 	~Orc(){};

	/* update updates the enemy's location. Orc's move on the diagonal 
	 * 	in intervals between -5 and 5 per turn. 
	 *
	 * paramters: none
	 * Returns: none
	 */
	 void update();
	 


	 /* Attack does damage to a passerby calculated with a random integer
	 * from  1 to 6 plus the strength of the Orc.
	 *
	 * paramters: none
	 * Returns: none
	 */
	 void attack();
	 	

	 /* Injure takes damage from the health of the enemy by the bystander. 
	 * The damage is a passed random integer between 0 and 10. The damage 
	 * taking from the enemy is damage - costitution for Orcs.
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
