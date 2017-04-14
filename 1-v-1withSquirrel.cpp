
// Copyright (c) 2013 Fatima Zenine Villanueva. All Rights Reserved.
//1-v-1: Monster and Player
//Homework for Code Libertion Foundation

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int playerHP = 100;
    int enemyHP = 60;
    string Name;
    
    cout << "And what name do you go by in this side of the universe?nn" << endl;
    cin >> Name;
    
    cout << "nnn-------------------------------------nnn";
    cout << "nnWelcome,"  << Name <<endl;
    cout << "You have just encountered a dying cicada in the Nolan Woods.n";
    cout << "Slowly, you crouch down and sniff the padded soil.n";
    cout << "You hear some shuffling to your right and see a squirrel.nn" << endl;
    
    cout << "Do you want to follow the squirrel? nn";
    
    
    int choice;
    cout << "Press '1' for YES or Press '2' NO: ";
    cin>> choice;
    cin.ignore();
    if ( choice == 1 ) {
        cout << "nnThe squirrel noticed your heavy movements. It stands erect and raises an armn";
        cout << ",only to gouge itself in the stomach with its needle-pointed claws!n";
        cout << "The squirrel disintegrates and fizzes into thin air.nn";
        cout << "Prepare yourself, " << Name << " the ground is shaking. Something is coming!nn";
    }
    else if ( choice == 2 ) {
        cout << "nnYou patted your knees and begrudgingly cracked your neck.n";
        cout << "The squirrel scurried away and now your stomach grumbles.n";
        cout << "You felt your stomach and bit into an apple from your satchel.n";
        cout << "GRRRLLURRK. GLUUURGGH. GRRUGHHGHRLK.n";
        cout << "Something else is making those sounds. nn";
        cout << "Prepare yourself, " << Name << ". The ground is shaking. Something is coming!nn";
    }
    cin.get();
    
    cout << "nnn-------------------------------------nnn";
    cout << "Player Name: " << Name << "n";
    cout << "HP: " << playerHP << "nn";
    cout << "Monster: Mutated Suirreln";
    cout << "HP: " << enemyHP << "nn";
    cout << "*************************nn";
    
    do {
        cout << "Do you want to ATTACK or DEFEND?nn";
        cout << "Press '1' to ATTACK or Press '2' to DEFEND: nn";
        cin >> choice;
        cout << "nnn-------------------------------------nnn";
        cin.ignore();
        
        if ( choice == 1 ) {
            playerHP -= 10;
            enemyHP -= 20;
            cout << "Player Name: " << Name << "n";
            cout << "HP: " << playerHP << "nn";
            cout << "Monster: Mutated Suirreln";
            cout << "HP: " << enemyHP << "nn";
            cout << "*************************nn";
        }
        else if (choice == 2) {
            playerHP -= 35;
            enemyHP -= 0;
            cout << "Player Name: " << Name << "n";
            cout << "HP: " << playerHP << "nn";
            cout << "Monster: Mutated Suirreln";
            cout << "HP: " << enemyHP << "nn";
            cout << "*************************nn";
        }
    } while ( playerHP > 0 && enemyHP > 0 );
    
    
    if ( playerHP <= 0 && enemyHP > 0 ){
        cout << "YOU DIED. GAME OVER.nnn";
    }
    else if ( playerHP > 0 && enemyHP <= 0){
        cout << "YOU WON. YOU JUST EARNED 10XP!nnn";
    }
    else if (playerHP == 0 && enemyHP == 0 );
    cout << "YOU FOUGHT THE GOOD FIGHT.nnn";
    
    return 0;
    
}
