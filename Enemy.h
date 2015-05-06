/*******************************************************************************
 *
 * CS 360 Spring 2015 Program 2
 * File: Enemy.h
 * Author: Mitch Montchalin
 * Last Edit: 04/24/2015
 * Description: This is the header file for the Enemy class. The enemy class is 
 * 	is the superclass for Goblins, Trolls Orcs. 
 *
 ******************************************************************************/

#ifndef ENEMY_H
#define ENEMY_H


class Enemy
	{
	protected:
		int enemyID;		//This is unique to all Enemy children
		int currentHealth; 	//The Health of the child enemy
		int strength;		//The Strength of the Enemy
		int constitution;	//the constitution of the enemy
		int xPos;		//starting x location
		int yPos;		// starting y location
		bool alive;		// boolean for if the Enemy is alive(true)

	public:
		
		/* The constructor recieves the health, strength, constitution, 
		 * x position, and y position. and creates the enemy. Then print is called.
		 *
		 * Returns: none
		 */
		Enemy();
		virtual ~Enemy() = 0;

		/* isAlive checks to see if the enemy is alive.
		 * 
		 * Parameters: none
		 * Returns: boolean True if alive
		 */
		 bool isAlive();


		 virtual void update() =0;
		 virtual void attack() = 0;
		 virtual void injure(int injureAmount) = 0;
		 virtual void print() = 0;
	};

#endif
