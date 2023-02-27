#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include <Team.h>
#include <vector.h>
#include <string>

class Executive
{
    public:
        Executive(char*& file);

        ~Executive();

        void readFile();

        void run();

    private:
    std::vector<Team> teamVector;

    std::string fileName;


};
#endif