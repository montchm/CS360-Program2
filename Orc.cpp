/*******************************************************************************
 *
 * CS 360 Spring 2015 Program 2
 * File: Orc.cpp
 * Author: Mitch Montchalin
 * Last Edit: 05/4/2015
 * Description: This is the Orc cpp file. The Orc class is a child class 
 * 	of Enemy. The Orc functions are defined here.
 ******************************************************************************/
 #include "Orc.h"
  #include "Enemy.h"

 #include <iostream>




 using namespace std;

 Orc::Orc(int hpIn, int strIn, int conIn, int xPosIn, int yPosIn):Enemy()
	{
		currentHealth = hpIn;
		strength = strIn;
		constitution = conIn;
		xPos = xPosIn;
		yPos = yPosIn;
		print();
 	}
 	
 /*******************************************************************************/
void Orc::update()
	{
		int x = rand()%11 - 5;	//number between 7 and 10.

			xPos += x;
			yPos += x;
		
	}

 /*******************************************************************************/

void Orc::attack()
	{

	int damage = (rand()%6+1) + strength;
	cout<<"Orc "<<enemyID<<" attacks a random passerby for "<<damage<<" damage!\n";


	}

 /*******************************************************************************/
void Orc::injure(int damage)
	{
		int totalDamage = damage - constitution;
		if(totalDamage> 0)
			{
			currentHealth -= totalDamage;
			cout<<"Orc "<<enemyID<<" takes "<<totalDamage<<" damage!"<<" current hp = "
				<<currentHealth<<"\n";
			if(currentHealth<=0)
				{
				alive = false;
				cout<<"Orc "<<enemyID<<" is slain!\n";
				}

			}
		else
			cout<<"The Passerby tries to attack Orc "<<enemyID<<" but it is not effective\n";
	}	

 /*******************************************************************************/

 void Orc::print()
 	{
 	cout<<"Orc "<< enemyID << " @ (" <<xPos << "," <<yPos<<") "<<currentHealth<<"\n" ;
 	}
