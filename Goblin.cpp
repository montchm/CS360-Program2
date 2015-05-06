/*******************************************************************************
 *
 * CS 360 Spring 2015 Program 2
 * File: Goblin.cpp
 * Author: Mitch Montchalin
 * Last Edit: 05/4/2015
 * Description: This is the Goblin cpp file. The goblin class is a child class 
 * 	of Enemy. The Goblin functions are defined here.
 ******************************************************************************/
 #include "Goblin.h"
  #include "Enemy.h"

 #include <iostream>




 using namespace std;

 Goblin::Goblin(int hpIn, int strIn, int conIn, int xPosIn, int yPosIn):Enemy()
	{
		currentHealth = hpIn;
		strength = strIn;
		constitution = conIn;
		xPos = xPosIn;
		yPos = yPosIn;

		print();
 	}

 /*******************************************************************************/
void Goblin::update()
	{
		int x = (rand()%7) - 3;	//range between +3 and -3
		int y = (rand()%5) - 2; //range between +2 and -2
		xPos += x;
		yPos -= y;
	}

 /*******************************************************************************/

void Goblin::attack()
	{

	int damage = (rand()%4+1) + strength;
	cout<<"Goblin "<<enemyID<<" attacks a random passerby for "<<damage<<" damage!\n";


	}

 /*******************************************************************************/
void Goblin::injure(int damage)
	{
		int totalDamage = damage - constitution/2;
		if(totalDamage> 0)
			{
			currentHealth -= totalDamage;
			cout<<"Goblin "<<enemyID<<" takes "<<totalDamage<<" damage!"<<" current hp = "
				<<currentHealth<<"\n";
			if(currentHealth<=0)
				{
				alive = false;
				cout<<"Goblin "<<enemyID<<" is slain!\n";
				}

			}
		else
			cout<<"The Passerby tries to attack Goblin "<<enemyID<<" but it is not effective\n";
	}	

 /*******************************************************************************/

 void Goblin::print()
 	{
 	cout<<"Goblin "<< enemyID << " @ (" <<xPos << "," <<yPos<<") "<<currentHealth<<"\n" ;
 	}
