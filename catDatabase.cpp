///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file catDatabase.cpp
/// @version 1.0
///
/// @author  Trevor Chang <@trevorkw@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include <string.h>
#include <stdbool.h>

#include "catDatabase.h"
#include "addCats.h"

//make the max size of the array to be only 30 cats
int catCount;

const enum Gender catGender[MAX_CATS];
const enum Breed catBreed[MAX_CATS];
const enum Color catCollarColor1[MAX_CATS];
const enum Color catCollarColor2[MAX_CATS];

const char name[MAX_CATS][MAX_CAT_NAME];
const bool isFixed[MAX_CATS];
const float weight[MAX_CATS];
const unsigned long long license[MAX_CATS];

struct Cat cats[1];  //warning if don't include
