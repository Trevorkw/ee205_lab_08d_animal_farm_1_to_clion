///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file addCats.h
/// @version 1.0
///
/// @author  Trevor Chang <@trevorkw@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

extern int valid(char catName[], float catWeight);
extern int addCat(char addName[],
                  const char realGender,
                  const enum Breed addBreed,
                  const enum Color addCollarColor1,
                  const enum Color addCollarColor2,
                  const unsigned long long addLicense,
                  const bool addFixed,
                  const float addWeight);