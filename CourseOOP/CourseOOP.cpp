#include <windows.h>
#include <conio.h>
#include <vector>
#include <algorithm>
#include <iostream>
#include <cmath>
#include <string>
using namespace std;


class Character {
private:

    string name;
    string playerClass;
    
    int level = 0;

    int hitPoints = 0;
    int armorClass = 0;

    int constitution = 0;
    int constitutionModifier = 0;

    int strenght = 0;
    int strenghtModifier = 0;

    int dexterity = 0;
    int dexterityModifier = 0;

    int intelligence = 0;
    int intelligenceModifier = 0;

    int wisdom = 0;
    int wisdomModifier = 0;

    int charisma = 0;
    int charismaModifier = 0;


public:
    //сеттеры
    void setName(string userString) {
        getline(cin, userString);
        name = userString;
    }

    void setClass(string userString) {
        getline(cin, userString);
        playerClass = userString;
    }

    void setLevel(string userString) {
        getline(cin, userString);
        level = stoi(userString);
    }

    //void setHitPoints(){}

    //void setArmorClass(){}

    void setConstitution(string userString) {
        getline(cin, userString);
        constitution = stoi(userString);
    }

    //void setConstitutionModifier(){}

    void setStrenght(string userString) {
        getline(cin, userString);
        strenght = stoi(userString);
    }

    //void setStrenghtModifier(){}

    void setDexterity(string userString) {
        getline(cin, userString);
        dexterity = stoi(userString);
    }

    //void setDexterityModifier(){}

    void setIntelligence(string userString) {
        getline(cin, userString);
        intelligence = stoi(userString);
    }

    //void setIntelligenceModifier(){}

    void setWisdom(string userString) {
        getline(cin, userString);
        wisdom = stoi(userString);
    }

    //void setWisdomModifier() {}

    void setCharisma(string userString) {
        getline(cin, userString);
        charisma = stoi(userString);
    }

    //void setCharismaModifier() {}

    //геттеры
    string getName() {
        return name;
    }

    string getClass() {
        return playerClass;
    }

    int getLevel() {
        return level;
    }

    int getHitPoints() {
        return hitPoints;
    }

    int getArmorClass() {
        return armorClass;
    }

    int getConstitution() {
        return constitution;
    }

    int getConstitutionModifier() {
        return constitutionModifier;
    }

    int getStrenght() {
        return strenght;
    }

    int getStrenghtModifier() {
        return strenghtModifier;
    }

    int getDexterity() {
        return dexterity;
    }

    int getDexterityModifier() {
        return dexterityModifier;
    }

    int getIntelligence() {
        return intelligence;
    }

    int getIntelligenceModifier() {
        return intelligenceModifier;
    }

    int getWisdom() {
        return wisdom;
    }

    int getWisdomModifier() {
        return wisdomModifier;
    }

    int getCharisma() {
        return charisma;
    }

    int getCharismaModifier() {
        return charismaModifier;
    }

    //Показать
    void printCharacter() {
        cout << "Имя: " << name << endl;
        cout << "Класс: " << playerClass << endl;
        cout << "Уровень: " << level << endl;
        cout << "Телосложение: " << constitution << endl;
        cout << "Сила: " << strenght << endl;
        cout << "Ловкость: " << dexterity << endl;
        cout << "Интеллект: " << intelligence << endl;
        cout << "Мудрость: " << wisdom << endl;
        cout << "Харизма: " << charisma << endl;
    }
    
    
};


//Генератор
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

    const int SIZE = 9;
    string userString;
    string stats[SIZE] = {
        "Введите имя: ",
        "Введите класс: ",
        "Введите уровень: ",
        "Введите показатель телосложения: ",
        "Введите показатель силы: ",
        "Введите показатель ловкости :",
        "Введите показатель интеллекта: ",
        "Введите показатель мудрости :",
        "Введите показатель харизмы: "
    };

    Character first;

    cout << "Перенесите сгенерированного персонажа сюда" << endl;

    for (int i = 0; i < SIZE; i++) {
        cout << stats[i];
        if (i == 0) {
            first.setName(userString);
        }
        if (i == 1) {
            first.setClass(userString);
        }
        if (i == 2) {
            first.setLevel(userString);
        }
        if (i == 3) {
            first.setConstitution(userString);
        }
        if (i == 4) {
            first.setStrenght(userString);
        }
        if (i == 5) {
            first.setDexterity(userString);
        }
        if (i == 6) {
            first.setIntelligence(userString);
        }
        if (i == 7) {
            first.setWisdom(userString);
        }
        if (i == 8) {
            first.setCharisma(userString);
        }
    }

    cout << endl << endl;
    first.printCharacter();


    




    

}

