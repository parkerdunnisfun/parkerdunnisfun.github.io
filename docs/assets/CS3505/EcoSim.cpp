/* TO-DO */
#include <iostream>
using namespace std;

static const double rabbitGrowth = 0.2; // g
static const double predationRate = 0.0022; // p
static const double foxPreyConversion = 0.6; // c
static const double foxMortalityRate = 0.2; // m
static const double carryCapacity = 1000.0; // K

static const char rabbitChar = 'r';
static const char foxChar = 'F';
static const char samePopChar = '*';

void runSimulation(int iterations, double numRabbits, double numFoxes)
    {
        // TO-DO: print first line

        // printing iterations lines
        int counter = 0;
        while (counter != iterations || numRabbits > 1 || numFoxes > 1)
            {
                updatePopulations(rabbitGrowth, predationRate, foxPreyConversion,
                 foxMortalityRate, carryCapacity, numRabbits, numFoxes);
                // TO-DO: print

            }
    }

void updatePopulations(double rabbitGrowth, double predationRate, double foxPreyConversion,
 double foxMortalityRate, double carryCapacity, double& numRabbits, double& numFoxes)
    {
        // deltaRabbit = gR(1-R/K) - pRF
        double deltaRabbit = (rabbitGrowth * numRabbits)*(1 - numRabbits / carryCapacity)
         - (predationRate * numRabbits * numFoxes);
        // deltaFoxes = cpRF - mF
        double deltaFoxes = (foxPreyConversion * predationRate * numRabbits * numFoxes) - (foxMortalityRate * numFoxes);
        // update
        numRabbits = numRabbits + deltaRabbit;
        numFoxes = numFoxes + deltaFoxes;
    }

void plotCharacter(int spaces, char animal)
    {
        // TO-DO: replace '-' with ' '
        std::string blank = "";
        for(int i = 0; i < spaces; i++)
            {

            }
        std::cout << 
    }

void plotPopulations(double numRabbits, double numFoxes, double scaleFactor)
    {
        int rabbitsPosition = floor(numRabbits * scaleFactor);
        int foxesPosition = floor(numFoxes * scaleFactor);

        if (rabbitsPosition == foxesPosition)
            {
                // one print
                plotCharacter(rabbitsPosition, samePopChar);
            } else
                {
                    // two print
                }
    }

void incrementCounter(int counter)
    {

    }