#ifndef ORDER_H
#define ORDER_H

#include <iostream>
#include <string>
#include <vector>
#include "Student.h"
#include "ClassUc.h"

/**
 * Classe que representa o objeto de um pedido
 */
class Order{
private:
    Student student;
    int type;
    ClassUc classUc, classUcRem;

public:
    Order();
    Order(Student student, ClassUc classUc,int type);
    Order(Student student, ClassUc classUcRem, ClassUc classUc, int type);
    ClassUc getClassUc() const;
    void setClassUc(const ClassUc& classUc);
    Student& getStudent();
    void setStudent(const Student &student);
    int getType() const;
    void setType(int type);
    ClassUc getClassUcRem() const;
    void setClassUcRem(const ClassUc &classUcRem);
};

#endif
