#include "Team.h"

Team::Team()
{

}



Team::~Team()
{

}



double Team::getPPG()
{
    return PPG;
}

void Team::setPPG(double newPPG)
{
    PPG = newPPG;
}


double Team::getdefPPG()
{
    return defPPG;
}

void Team::setdefPPG(double newDefPPG)
{
    defPPG = newDefPPG;
}


int Team::getWins()
{
    return wins;
}

void Team::setWins(int newWins)
{
    wins = newWins;
}

int Team::getLoss()
{
    return losses;
}

void Team::setLoss(int newLoss)
{
    losses = newLoss;
}


int Team::gethomeWins()
{
    return homeWins;
}

void Team::sethomeWins(int newHWins)
{
    homeWins = newHWins;
}

int Team::gethomeLoss()
{
    return homeLoss;
}

void Team::sethomeLoss(int newLoss)
{
    homeLoss = newLoss;
}


int Team::getroadWins()
{
    return roadWins;
}

void Team::setroadWins(int newRWins)
{
    roadWins = newRWins;
}

int Team::getroadLoss()
{
    return roadLoss;
}

void Team::setroadLoss(int newLoss)
{
    roadLoss = newLoss;
}