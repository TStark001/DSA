#include <iostream>
using namespace std;

class Player
{
private:
    int health;
    int age;
    int score;
    bool alive;

    // creating getter and setter
public:
    int getHealth()
    {
        return health;
    }
    int getAge()
    {
        return age;
    }
    int getScore()
    {
        return score;
    }
    int isAlive()
    {
        return alive;
    }
    void setHealth(int health)
    {
        this->health = health;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    void setScore(int score)
    {
        this->score = score;
    }
    void setIsAlive(bool isAlive)
    {
        this->alive = alive;
    }
};

int addScore(Player a, Player b)
{
    return a.getScore() + b.getScore();
}

Player getMaxScorePlayer(Player a, Player b)
{
    if (a.getScore() > b.getScore())
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    Player stark;
    Player flames;

    stark.setAge(20);
    stark.setHealth(70);
    stark.setIsAlive(true);
    stark.setScore(100);

    flames.setAge(20);
    flames.setHealth(100);
    flames.setIsAlive(true);
    flames.setScore(20);

    cout << addScore(stark, flames) << endl;
    Player devil = getMaxScorePlayer(stark, flames);
    cout << devil.getScore() << endl;
    cout << devil.getHealth();
}