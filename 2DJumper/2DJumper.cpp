#include <iostream>
#include "GameObject.h"
#include <stdio.h>

int main()
{
    bool session = true;

    GameObject* field = new GameObject;
    field->emptying();


    while ( session == true) {
        session = false;

        field->print();
    }

    std::cout << "Hello World!\n";
}