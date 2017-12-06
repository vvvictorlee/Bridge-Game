#ifndef FINAL_TEAM_H
#define FINAL_TEAM_H

#include <array>
#include "Player.h"
#include "Trick.h"

class Team {
private:
    array<Player *, 2> _players;
    list<Trick *> _tricksWon;
    int _gameScore;
public:
    int winTrick(Trick *t);

    int getGameScore();

    void addToGameScore(int n);

    void newDeal();

    list<Trick *> getWonTricks();

    Team(Player *player1, Player *player2);
};


#endif //FINAL_TEAM_H