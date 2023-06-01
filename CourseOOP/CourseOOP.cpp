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
    int proficiencyBonus = 0;

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

    //Тут будут конструкторы
    // 
    //этот конструктор собрала мне VS
    /*Character(const string& name, const string& playerClass, int level, int proficiencyBonus, int hitPoints, int armorClass,
        int constitution, int constitutionModifier, int strenght, int strenghtModifier, int dexterity, int dexterityModifier, int intelligence,
        int intelligenceModifier, int wisdom, int wisdomModifier, int charisma, int charismaModifier)
        : name(name),
        playerClass(playerClass),
        level(level), proficiencyBonus(proficiencyBonus),
        hitPoints(hitPoints), armorClass(armorClass),
        constitution(constitution),
        constitutionModifier(constitutionModifier),
        strenght(strenght),
        strenghtModifier(strenghtModifier),
        dexterity(dexterity),
        dexterityModifier(dexterityModifier),
        intelligence(intelligence),
        intelligenceModifier(intelligenceModifier),
        wisdom(wisdom),
        wisdomModifier(wisdomModifier),
        charisma(charisma),
        charismaModifier(charismaModifier)
    {
    }*/

    //Конструктор для сбора персонажа пользователем вручную, без генерации
    //Подразумевается, что персонаж уже сгенерирован
    Character() {
        const int SIZE = 9;
        string userString;
        string stats[SIZE] = {
            "Введите имя: ",
            "Введите класс: ",
            "Введите уровень: ",
            "Введите показатель телосложения: ",
            "Введите показатель силы: ",
            "Введите показатель ловкости : ",
            "Введите показатель интеллекта: ",
            "Введите показатель мудрости: ",
            "Введите показатель харизмы: "
        };

        cout << "Перенесите сгенерированного персонажа сюда" << endl;

        for (int i = 0; i < SIZE; i++) {
            cout << stats[i];
            if (i == 0) {
                setName(userString);
            }
            if (i == 1) {
                setClass(userString);
            }
            if (i == 2) {
                setLevel(userString);
            }
            if (i == 3) {
                setConstitution(userString);
            }
            if (i == 4) {
                setStrenght(userString);
            }
            if (i == 5) {
                setDexterity(userString);
            }
            if (i == 6) {
                setIntelligence(userString);
            }
            if (i == 7) {
                setWisdom(userString);
            }
            if (i == 8) {
                setCharisma(userString);
            }
        }

        setProficiencyBonus(level);

        setConstitutionModifier(constitution);
        setStrenghtModifier(strenght);
        setDexterityModifier(dexterity);
        setIntelligenceModifier(intelligence);
        setWisdomModifier(wisdom);
        setCharismaModifier(charisma);

    }


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
        if (level > 20 or level < 1) {
            cout << "Недопустимое значение уровня";
        }
    }

    void setProficiencyBonus(int level) {
        if (level == 1 && level <= 4) {
            proficiencyBonus = 2;
        }
        else if (level == 5 && level <= 8) {
            proficiencyBonus = 3;
        }
        else if (level == 9 && level <= 12) {
            proficiencyBonus = 4;
        }
        else if (level == 13 && level <= 16) {
            proficiencyBonus = 5;
        }
        else if (level == 17 && level <= 20) {
            proficiencyBonus = 6;
        }
        else {
            cout << "Уровень выше 20 быть не может";
        }
    }

    //void setHitPoints(){}

    //void setArmorClass(){}

    void setConstitution(string userString) {
        getline(cin, userString);
        constitution = stoi(userString);
    }

    void setConstitutionModifier(int constitution) {
        constitutionModifier = floor((constitution - 10) / 2);
    }

    void setStrenght(string userString) {
        getline(cin, userString);
        strenght = stoi(userString);
    }

    void setStrenghtModifier(int strenght) {
        strenghtModifier = floor((strenght - 10) / 2);
    }

    void setDexterity(string userString) {
        getline(cin, userString);
        dexterity = stoi(userString);
    }

    void setDexterityModifier(int dexterity) {
        dexterityModifier = floor((dexterity - 10) / 2);
    }

    void setIntelligence(string userString) {
        getline(cin, userString);
        intelligence = stoi(userString);
    }

    void setIntelligenceModifier(int intelligence) {
        intelligenceModifier = floor((intelligence - 10) / 2);
    }

    void setWisdom(string userString) {
        getline(cin, userString);
        wisdom = stoi(userString);
    }

    void setWisdomModifier(int wisdom) {
        wisdomModifier = floor((wisdom - 10) / 2);
    }

    void setCharisma(string userString) {
        getline(cin, userString);
        charisma = stoi(userString);
    }

    void setCharismaModifier(int charisma) {
        charismaModifier = floor((charisma - 10) / 2);
    }

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

    int getProficiencyBonus() {
        return proficiencyBonus;
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
        cout << "Бонус мастрества: " << proficiencyBonus << endl;
        cout << "Телосложение: " << constitution << " " << "Модификатор: " << constitutionModifier << endl;
        cout << "Сила: " << strenght << " " << "Модификатор: " << strenghtModifier << endl;
        cout << "Ловкость: " << dexterity << " " << "Модификатор: " << dexterityModifier << endl;
        cout << "Интеллект: " << intelligence << " " << "Модификатор: " << intelligenceModifier << endl;
        cout << "Мудрость: " << wisdom << " " << "Модификатор: " << wisdomModifier << endl;
        cout << "Харизма: " << charisma << " " << "Модификатор: " << charismaModifier << endl;
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



    Character first;


    first.printCharacter();









}

