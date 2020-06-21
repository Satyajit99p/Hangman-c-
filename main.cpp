#include <iostream>
# include<fstream>
#include <ctime>
#include <string>

using namespace std;

int main()
{
    // START SCREEN
    char start{};

    std::cout<<"HANGMAN"<<std::endl;
    std::cout<<"______________________"<<std::endl;
    std::cout<<"|         }            "<<std::endl;
    std::cout<<"|         0            "<<std::endl;
    std::cout<<"|         |            "<<std::endl;
    std::cout<<"|        /|\\            "<<std::endl;
    std::cout<<"|       / | \\           "<<std::endl;
    std::cout<<"|         |            "<<std::endl;
    std::cout<<"|        / \\           "<<std::endl;
    std::cout<<"|       /   \\         "<<std::endl;
    std::cout<<"|                      "<<std::endl;
    std::cout<<"|______________________"<<std::endl;
    std::cout<<"\nPress any key(and enter) to start\n";

    std::cin>>start;


    //GAME
    //set variables used throughout the tries

    int Tries(6); //attempts available
    char guess;
    bool correct=false;
    std::string word;
    std::string wordlist[99];
    srand(time(NULL));

    std::ifstream RandomWord;
    RandomWord.open("text.txt");

    for(int i=0;i<99;i++)
    {
        RandomWord >> wordlist[i];
      //  std::cout<<wordlist[i]<<std::endl; //test purpose to check the wordlist
    }
    int RandomNum=rand()%100; //returns random number between 0 and 100
    word=wordlist[RandomNum];
    std::cout<<word<<std::endl; // testing purpose
   RandomWord.close();

   std::string mystery(word.length(),'*');  //replacing each letter with an asterisk



    while(Tries>=0)
    {
        correct=false;
        std::cout<<" The word you have to guess is\n\n ";
        std::cout<<mystery<<std::endl;
        std::cout<<"\nThere are "<<mystery.length()<<" letters in the word\n\n";
        std::cout<<" you have "<<Tries<<" guesses left\n";
        std::cout<<"\nguess a letter ";
        std::cin>>guess;

    for(int i=0;i< mystery.length();i++)
    {
        if(word[i]==guess)
        {
            mystery[i]=guess;

            correct=true;
        }
    }
    if(word==mystery)
    {
        std::cout<<"\n\n congratulation you have got the word correct "<<mystery<<std::endl;
        break;
    }
    if(correct==false)
    {
        Tries--;
        std::cout<<" sorry, "<<guess<<" is not part of word "<<std::endl;
    }
    else
    {
         std::cout<<" congratulation "<<guess<<" is one of the letters.\n"<<std::endl;
    }

        switch(Tries)
        {
        case 6:
            {
    std::cout<<"______________________"<<std::endl;
    std::cout<<"|         }            "<<std::endl;
    std::cout<<"|                     "<<std::endl;
    std::cout<<"|                     "<<std::endl;
    std::cout<<"|                     "<<std::endl;
    std::cout<<"|                     "<<std::endl;
    std::cout<<"|                     "<<std::endl;
    std::cout<<"|                   "<<std::endl;
    std::cout<<"|               "<<std::endl;
    std::cout<<"|                      "<<std::endl;
    std::cout<<"|______________________"<<std::endl;

                break;
            }
        case 5:
            {
    std::cout<<"______________________"<<std::endl;
    std::cout<<"|         }            "<<std::endl;
    std::cout<<"|         0            "<<std::endl;
    std::cout<<"|                     "<<std::endl;
    std::cout<<"|                     "<<std::endl;
    std::cout<<"|                     "<<std::endl;
    std::cout<<"|                     "<<std::endl;
    std::cout<<"|                   "<<std::endl;
    std::cout<<"|               "<<std::endl;
    std::cout<<"|                      "<<std::endl;
    std::cout<<"|______________________"<<std::endl;

                break;
            }
        case 4:
            {
    std::cout<<"______________________"<<std::endl;
    std::cout<<"|         }            "<<std::endl;
    std::cout<<"|         0            "<<std::endl;
    std::cout<<"|         |            "<<std::endl;
    std::cout<<"|         |            "<<std::endl;
    std::cout<<"|         |            "<<std::endl;
    std::cout<<"|         |            "<<std::endl;
    std::cout<<"|                   "<<std::endl;
    std::cout<<"|                "<<std::endl;
    std::cout<<"|                      "<<std::endl;
    std::cout<<"|______________________"<<std::endl;

                break;
            }
        case 3:
            {
    std::cout<<"______________________"<<std::endl;
    std::cout<<"|         }            "<<std::endl;
    std::cout<<"|         0            "<<std::endl;
    std::cout<<"|         |            "<<std::endl;
    std::cout<<"|        /|            "<<std::endl;
    std::cout<<"|       / |            "<<std::endl;
    std::cout<<"|         |            "<<std::endl;
    std::cout<<"|                    "<<std::endl;
    std::cout<<"|                   "<<std::endl;
    std::cout<<"|                      "<<std::endl;
    std::cout<<"|______________________"<<std::endl;

                break;
            }
        case3:
            {
    std::cout<<"______________________"<<std::endl;
    std::cout<<"|         }            "<<std::endl;
    std::cout<<"|         0            "<<std::endl;
    std::cout<<"|         |            "<<std::endl;
    std::cout<<"|        /|\\            "<<std::endl;
    std::cout<<"|       / | \\           "<<std::endl;
    std::cout<<"|         |           "<<std::endl;
    std::cout<<"|                  "<<std::endl;
    std::cout<<"|                "<<std::endl;
    std::cout<<"|                      "<<std::endl;
    std::cout<<"|______________________"<<std::endl;
    Tries--;
                break;
            }
        case 2:
            {
    std::cout<<"______________________"<<std::endl;
    std::cout<<"|         }            "<<std::endl;
    std::cout<<"|         0            "<<std::endl;
    std::cout<<"|         |            "<<std::endl;
    std::cout<<"|        /|\\            "<<std::endl;
    std::cout<<"|       / | \\           "<<std::endl;
    std::cout<<"|         |            "<<std::endl;
    std::cout<<"|                   "<<std::endl;
    std::cout<<"|                   "<<std::endl;
    std::cout<<"|                      "<<std::endl;
    std::cout<<"|______________________"<<std::endl;

                break;
            }
        case 1:
            {
    std::cout<<"______________________"<<std::endl;
    std::cout<<"|         }            "<<std::endl;
    std::cout<<"|         0            "<<std::endl;
    std::cout<<"|         |            "<<std::endl;
    std::cout<<"|        /|\\            "<<std::endl;
    std::cout<<"|       / | \\           "<<std::endl;
    std::cout<<"|         |            "<<std::endl;
    std::cout<<"|        /            "<<std::endl;
    std::cout<<"|       /            "<<std::endl;
    std::cout<<"|                      "<<std::endl;
    std::cout<<"|______________________"<<std::endl;

                break;
            }
        case 0:
            {
    std::cout<<"______________________"<<std::endl;
    std::cout<<"|         }            "<<std::endl;
    std::cout<<"|         0            "<<std::endl;
    std::cout<<"|         |            "<<std::endl;
    std::cout<<"|        /|\\            "<<std::endl;
    std::cout<<"|       / | \\           "<<std::endl;
    std::cout<<"|         |            "<<std::endl;
    std::cout<<"|        / \\           "<<std::endl;
    std::cout<<"|       /   \\         "<<std::endl;
    std::cout<<"|                      "<<std::endl;
    std::cout<<"|______________________"<<std::endl;
    std::cout<<"\nGAME OVER\n"<<std::endl;
    Tries=-1;
                break;
            }
        default:
            {
                std::cout<<"ERROR";
                break;
            }
        }
    }
return 0;


}
