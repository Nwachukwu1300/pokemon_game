#ifndef POKEMON_H
#define POKEMON_H

#include <iostream>
#include <string>

using namespace std;

class Moves {
protected:
    string move_name;
    int damage;
public:
    Moves() {
        move_name = "name";
        damage = 0;
    }

    int getDamage() {
        return damage;
    }

    string getMoveName() {
        return move_name;
    }
};

class Electric : public Moves {
public:
    Electric() : Moves() {}

    void electricMove1() {
        move_name = "Zippy zap";
        damage = 50;
    }

    void electricMove2() {
        move_name = "Thunder punch";
        damage = 75;
    }

    void electricMove3() {
        move_name = "Wild charge";
        damage = 90;
    }
};

class Normal : public Moves {
public:
    Normal() : Moves() {}

    void normalMove1() {
        move_name = "Vice grip";
        damage = 55;
    }

    void normalMove2() {
        move_name = "Slash";
        damage = 70;
    }

    void normalMove3() {
        move_name = "Rock climb";
        damage = 90;
    }

    void normalMove4() {
        move_name = "Judgement";
        damage = 100;
    }
};

class Dragon : public Moves {
public:
    Dragon() : Moves() {}

    void dragonMove1() {
        move_name = "Dual chop";
        damage = 40;
    }

    void dragonMove2() {
        move_name = "Dragon claw";
        damage = 80;
    }

    void dragonMove3() {
        move_name = "Dragon hammer";
        damage = 90;
    }
};

class Water : public Moves {
public:
    Water() : Moves() {}

    void waterMove1() {
        move_name = "Water gun";
        damage = 40;
    }

    void waterMove2() {
        move_name = "Hydro pump";
        damage = 110;
    }

    void waterMove3() {
        move_name = "Aqua tail";
        damage = 90;
    }
};

class Fighting : public Moves {
public:
    Fighting() : Moves() {}

    void fightingMove1() {
        move_name = "Karate chop";
        damage = 50;
    }

    void fightingMove2() {
        move_name = "Brick break";
        damage = 75;
    }

    void fightingMove3() {
        move_name = "Superpower";
        damage = 120;
    }
};

class Grass : public Moves {
private:
    string type;
public:
    Grass() : Moves(), type("Grass") {}

    string getType() {
        return type;
    }

    void grassMove1() {
        move_name = "Vine whip";
        damage = 45;
    }

    void grassMove2() {
        move_name = "Razor leaf";
        damage = 55;
    }

    void grassMove3() {
        move_name = "Solar beam";
        damage = 120;
    }
};

#endif  // POKEMON_H
