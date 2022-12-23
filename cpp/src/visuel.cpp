#include <iostream>
#include <cstdlib>
#include <visuel.hpp>

using namespace std;

Visuel::Visuel()
{
    this->setSize(130,35);
    this->initScreen();
}

Visuel::Visuel(int longeur, int largeur)
{
    this->setSize(longeur,largeur);
    this->initScreen();
}

void Visuel::initScreen(void)
{
    this->mScreen = (char**)malloc(sizeof(char*)*this->getLarg());
    int i,j;
    
    for(i = 0; i < this->getLarg(); i++)
        this->mScreen[i] = (char*)malloc(sizeof(char)*this->getLong());

    char msg =' ';
    for(i = 0; i < this->getLarg(); i++)
        for(j = 0; j < this->getLong() ; j++)
        {
            if( ((i == 0) && (0 < j && j < this->getLong()-1)) || ((i == this->getLarg() - 1) && (0 < j && j < this->getLong()-1)))
                msg = '-';
            else
                if( ((j == 0) && (0 < i && i < this->getLarg()-1)) || ((j == this->getLong()) && (0 < i && i < this->getLarg()-1)))
                    msg = '|';
        }


    return;

}

void Visuel::setSize(int longeur, int largeur)
{
    this->mLarg = largeur;
    this->mLong = longeur;
    return;
}

int Visuel::getLong(void)
{
    return this->mLong;
}

int Visuel::getLarg(void)
{
    return this->mLarg;
}
void Visuel::present(void)
{
    int i,j;
    if(this->mScreen != NULL)
    {
        for(i = 0; i < this->getLarg(); i++)
        {
            for(j = 0; j < this->getLong() ; j++)
                cout << this->mScreen[i][j];
            cout << "\n";
        }
            
    }

    return;
}
Visuel::~Visuel()
{
    int i;
    
    if(this->mScreen != NULL)
    {
        for(i = 0; i < this->getLarg(); i++)
            free(this->mScreen[i]);
        free(this->mScreen);
    }
    
}