///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file updateCats.cpp
/// @version 1.0
///
/// @author  Trevor Chang <@trevorkw@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <string.h>

#include "updateCats.h"
#include "catDatabase.h"


int updateCatName(int index, char newName[]) {
    for(int i = 0; i < catCount; i++){
        if(strcmp(newName, cats[i].name) == 0){
            printf("Failure: name needs to be unique\n");  //test
            return 1;
        }
        if(strlen(newName) == 0) {
            return 1;
        }
    }
    strcpy(cats[index].name, newName);
    return 0;
}

void fixCat(const int index){
    cats[index].isFixed = true;
}

int updateCatWeight(int index, float newWeight){
    if(newWeight < 0) {
        printf("Failure: weight needs to be greater than 0\n"); ///test
        return 1;
    }
    cats[index].weight = newWeight;
    return 0;
}


