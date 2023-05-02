#include <windows.h>
#include <conio.h>
#include <vector>
#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;

class Generator;

class Character {
private:

    int hitpoints;
    int armorClass;

    int constitution;
    int constitutionModifier;

    int strenght;
    int strenghtModifier;

    int dexterity;
    int dexterityModifier;

    int intelligence;
    int intelligenceModifier;


public:

    //Конструктор


    //ф-ии:
    //ходить влево
    //ходить вправо

    //Сеттеры
    void setConstitution(const Generator &generatedValue) {
        constitution = generatedValue.getValue();
    }
    void setDexterity(const Generator &generatedValue) {
        dexterity = generatedValue.getValue();
    }
    void setIntelligence(const Generator &generatedValue) {
        intelligence = generatedValue.getValue();
    }
    void setArmorCalss() {
        armorClass = 10 + dexterityModifier;
    }
    void setModifiers() {
        constitutionModifier = round((constitution - 10) / 2);
        strenghtModifier = round((strenght - 10) / 2);
        intelligenceModifier = round((intelligence - 10) / 2);
    }

    //Геттеры
    /*int getConstitution(){
        return constitution;
    }
    int getConstitutionModifier() {
        return constitutionModifier;
    }*/

    //Персонаж напечатайся
    void printCharacter() {
        cout << "Сила: " << strenght << " " << "Модификатор: " << strenghtModifier << endl;
        cout << "Ловкость: " << dexterity << " " << "Модификатор: " << dexterityModifier << endl;
        cout << "Интеллект: " << intelligence << " " << "Модификатор: " << intelligenceModifier << endl;
        cout << "Класс доспеха: " << armorClass << endl;
        cout << "Здоровье: " << hitpoints << endl;
    }
    
};

class Generator {
private:

    int generatedValue;
    vector<int>rolls;

public:

    void setD4() {
        generatedValue = rand() % 4 + 1;
    }
    void setD6() {
        generatedValue = rand() % 6 + 1;
    }
    void setD8() {
        generatedValue = rand() % 8 + 1;
    }
    void setD10() {
        generatedValue = rand() % 10 + 1;
    }
    void setD12() {
        generatedValue = rand() % 12 + 1;
    }
    void setD20() {
        generatedValue = rand() % 20 + 1;
    }
    int getValue() const {
        return generatedValue;
    }

    void fillWithD6Rolls() {
        for (int i = 0; i < 4; i++) {
            rolls.push_back(1 + rand() % 6);
        }
    }

    void sortRolls() {
        sort(rolls.begin(), rolls.end());
    }

    void deleteFirst() {
        rolls.erase(rolls.begin() + 0);
    }

    //показать броски
    void printRolls() {
        for (int i : rolls) {
            cout << i << " ";
        }
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    Character first{};
    Generator roll;

    

}

