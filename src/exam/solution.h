/*! \file       solution.h
 *  \author     ---=Put your name here=---
 *  \version    1.0
 *  \date       29.06.2022
 *
 *  Final Exam. Solution module. Put ALL the declarations and definitions right here.
 *  All the class methods must be defined here (do not put their in a separated
 *  file). If you need to create a non-member auxilliary function, put its defintion
 *  here as well.
 *
 *      → Provide your solution here and upload this only file to Ya.Contest! ←
 *
 */

#ifndef SOLUTION_H
#define SOLUTION_H

#include <string>
#include <iostream>
#include <memory>
#include <vector>
#include <stdexcept>

//========================================
//==========< Problem 1 [3pts] >==========

class Teacher
{
public:
    Teacher(const std::string& name)
        : _name(name)
    {
    }

    virtual ~Teacher() {}

    const std::string& getName() const { return _name; }
    virtual double calcWages() const = 0;

    // TODO: For the Problem 4 add a pure virtual function Teacher* cloneMe() here and override
    // it properly in the descendant classes.

protected:
    std::string _name;
};

class AssociateTeacher : public Teacher
{
public:
    static const int BASE_SALARY = 1500;
    // TODO: To complete...
};

class InvitedTeacher : public Teacher
{
public:
    static const int GROUP_TAX = 2000;
    // TODO: To complete...
};

//========================================
//==========< Problem 2 [3pts] >==========

class TArray {
public:
    // TODO: To complete...
    size_t getSize() const
    {
        return _arr.size();
    }
protected:
    std::vector<Teacher*> _arr;
};

std::ostream& operator << (std::ostream& os, const TArray& tArr)
{
    // TODO: To complete...
}

//========================================
//==========< Problem 3 [2pts] >==========

std::pair<int,int> totalWagesOfTopTeachers(const TArray& tArr, int minGroups, int minBonus)
{
    // TODO: To complete...
}

//========================================
//==========< Problem 4 [2pts] >==========

    // TODO: Add all the stuff needed for the TArray class to comply with the Rule Of Three.
    // What do you have to add into the class for that?

//========================================

#endif
