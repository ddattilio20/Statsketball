#include "Team.h"
#include <string>



Team::Team(std::string name)
{
    teamName = name;
}



Team::~Team()
{
    
}


std::string Team::getName()
{
    return teamName;
}



void Team::setName(std::string newName)
{
    teamName = newName;
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

int Team::getGames()
{
    return games;
}

void Team::setGames(int newGames)
{
    games = newGames;
}

float Team::getwinPerc()
{
    return winPercentage;
}

void Team::setwinPerc(float newWinPerc)
{
    winPercentage = newWinPerc;
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