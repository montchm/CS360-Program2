/*******************************************************************************
 *
 * CS 360 Spring 2015 Program 2
 * File: Goblin.h
 * Author: Mitch Montchalin
 * Last Edit: 05/4/2015
 * Description: This is the Goblin Header file. The goblin class is a child class 
 * 	of Enemy. The Goblin has 4 functions that are define pure virtual in the Enemy 
 * class attack, injure, update, and print.
 ******************************************************************************/

#ifndef GOBLIN_H
#define GOBLIN_H

#include "Enemy.h"



class Goblin: public Enemy{
 	private:


 	public:
	/* The constructor recieves the health, strength, constitution, 
	 * x position, and y position. and creates the enemy.
	 *
	 * Returns: none
	 */
 	Goblin(int hpIn, int strIn, int conIn, int xPosIn, int yPosIn);
 	~Goblin(){};

	/* update updates the enemy's location. Goblin's move in the x direction
	 *	between -3 and 3 units and in the y direction between -2 and 2 units
	 * 	per turn. This updates the xPos and yPos.
	 *
	 * paramters: none
	 * Returns: none
	 */
	 void update();
	 


	 /* Attack does damage to a passerby calculated with a random integer
	 * from  1 to 4 plus the strength of the Goblin.
	 *
	 * paramters: none
	 * Returns: none
	 */
	 void attack();
	 	

	 /* Injure takes damage from the health of the enemy by the bystander. 
	 * The damage is a passed random integer between 0 and 10. The damage 
	 * taking from the enemy is damage - costitution/2.
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
