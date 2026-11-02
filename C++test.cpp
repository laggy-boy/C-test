#include <iostream>
#include <ctime>
#include <windows.h>
#include <cstdlib>	
using namespace std;

int main() {
    int x, choice, no1, y;
    int playerscore = 0;
    int npcscore = 0;
    
    
      string name;
     
     cout << "enter player name : ";
     cin >> name;
     cout <<" =============== " << endl;
     cout << "Hello " << name << " are you ready to play?" << endl;
     cout << " ==============  " << endl;
     cout << "press 1 to start" << endl;
     cout << "press 2 to exit" << endl;
     cout << " : ";
     cin >> choice;
     
     
     
     switch(choice)
	 {
     	case 1:
			break;
     		cout << "game is starting";
     		break;
     	
		 
		 case 2:
		 	return 0;
	 }
     
     cout << " game is starting...";
     Sleep(2000);
     
     while(playerscore < 5 && npcscore < 5 )
     {
	 
     system("cls");
     cout << "               " << " player score : " << playerscore << endl;
	 cout << "                 " << " npc  score : " << npcscore << endl;   
     cout << "3 for rock" << endl;
     cout << "2 for paper" << endl;
     cout << "1 for scissors" << endl;
     cout << " =========== " << endl;
     cout  << " : ";
     cin >> no1;  
    cout << "player choose : ";
     switch(no1){
   
   case 3:
   	cout << "rock" << endl;
   break;
   case 2:
   
   	cout << "paper" << endl;
   
   break;
   case 1:
   
   	cout << "scissors" << endl;
   	break;
 }
     
     
     
     cout << "npc choose : ";
     srand(time(0));
      int npc = rand() % 3 + 1;
   switch(npc){
   
   case 3:
   	cout << "rock" << endl;
   break;
   case 2:
   
   	cout << "paper" << endl;
   
   break;
   case 1:
   
   	cout << "scissors" << endl;
   break;
}

cout << no1 << endl;
cout << npc << endl;

if(no1 == 1 && npc == 2)
{
	cout << "player wins" << endl;
	playerscore++;
}
if(no1 == 1 && npc == 3)
{
	cout << "npc wins" << endl;
	npcscore++;
}
 if(no1 == 1 && npc == 1) 
 {
 	cout << "draw" << endl;
 }
 
 
 if(no1 == 2 && npc == 2)
{
	cout << "draw" << endl;
}
if(no1 == 2 && npc == 3)
{
	cout << "player winss" << endl;
	playerscore++;
}
 if(no1 == 2 && npc == 1) 
 {
 	cout << "npc wins" << endl;
 	npcscore++;
 }
 
 
  
 if(no1 == 3 && npc == 2)
{
	cout << "npc wins" << endl;
	npcscore++;
}
if(no1 == 3 && npc == 3)
{
	cout << "draw" << endl;
}
 if(no1 == 3 && npc == 1) 
 {
 	cout << "player wins" << endl;
 	playerscore++;
 }
 Sleep(4000);
 

}

if (playerscore == 5)
{
	cout << " you did well " << name << " you won the game ";
	return 0;
}

else if (npcscore == 5)
{
	cout << "you did well but the npc won" << endl;
	return 0;
}
  return 0;
}
