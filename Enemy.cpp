/*******************************************************************************
 *
 * CS 360 Spring 2015 Program 2
 * File: Enemy.cpp
 * Author: Mitch Montchalin
 * Last Edit: 05/4/2015
 * Description: This is the Enemy.cpp file. The functions are of the Enemy class
 *	are in this file.
 ******************************************************************************/
#include "Enemy.h"
#include <iostream>
#include <cstdlib>
#include <time.h>


using namespace std;
static int id = 0; //id 

Enemy::Enemy()
	{
	id++;
	enemyID=id;

	alive = true;
	srand(time(NULL));
	
	}
Enemy::~Enemy(){}

 /*****************************************************************************/

bool Enemy::isAlive ()
	{
	return alive;
	}
