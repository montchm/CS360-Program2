/*******************************************************************************
 *
 * CS 360 Spring 2015 Program 2
 * File: Troll.cpp
 * Author: Mitch Montchalin
 * Last Edit: 05/4/2015
 * Description: This is the Troll cpp file. The Troll class is a child class 
 * 	of Enemy. The Troll functions are defined here.
 ******************************************************************************/
 #include "Troll.h"
  #include "Enemy.h"

 #include <iostream>




 using namespace std;

 Troll::Troll(int hpIn, int strIn, int conIn, int xPosIn, int yPosIn):Enemy()
	{
		initialHealth = hpIn;
		currentHealth = hpIn;
		strength = strIn;
		constitution = conIn;
		xPos = xPosIn;
		yPos = yPosIn;
		print();
 	}
 	
 /*******************************************************************************/
void Troll::update()
	{
		int x = 10 - (rand()%4) ;	//number between 7 and 10.
		if(rand()%2 == 0) 	//if integer is even add x.
			xPos += x;
		else
			xPos -= x;		//else subtract x.

		cout<<"Troll "<<enemyID<<" regenerates "<<constitution<<" health.\n";
		//regenerate health
		if(currentHealth + constitution > initialHealth)
			currentHealth=initialHealth;
		else
			currentHealth += constitution;

			

	}

 /*******************************************************************************/

void Troll::attack()
	{

	int damage = (rand()%8+1) + strength;
	cout<<"Troll "<<enemyID<<" attacks a random passerby for "<<damage<<" damage!\n";


	}

 /*******************************************************************************/
void Troll::injure(int damage)
	{
		int totalDamage = damage - constitution*1.5;
		if(totalDamage> 0)
			{
			currentHealth -= totalDamage;
			cout<<"Troll "<<enemyID<<" takes "<<totalDamage<<" damage!"<<" current hp = "
				<<currentHealth<<"\n";
			if(currentHealth<=0)
				{
				alive = false;
				cout<<"Troll "<<enemyID<<" is slain!\n";
				}

			}
		else
			cout<<"The Passerby tries to attack Troll "<<enemyID<<" but it is not effective\n";
	}	

 /*******************************************************************************/

 void Troll::print()
 	{
 	cout<<"Troll "<< enemyID << " @ (" <<xPos << "," <<yPos<<") "<<currentHealth<<"\n" ;
 	}
