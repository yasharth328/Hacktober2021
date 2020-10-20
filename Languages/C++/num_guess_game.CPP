/* This is a Number Guess Game in C++
   In which computer choose a random number and you have to guess it.
   RULES:-
   1.There are Limited guesses.
   2.If you ran out of guesses, you lose the game.
   3.If you guess that number within guesses you won.
    that's it. So play this game.
*/
//---------------------------------------------------------------------------

#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
 clrscr();
 char ch,name[30];
 cout<<"\n\t\t\tWelcome to the Number Guessing Game\n\n";
 for(int x=0;x<40;x++)
  cout<<"**";
  cout<<"\n\nHello! What's your name: ";
  cin>>name;
  cout<<"\n\tWell! "<<name<<", would you like to play number guess game ?(Y/N): ";
  cin>>ch;
  if (ch=='Y' || ch=='y')
   {
      do{ clrscr();
      int num=0,n=0,guess=10;
      randomize();
      num=random(51);
      cout<<"\n\tLet's play "<<name;
      cout<<"\nCan you guess a number in "<<guess<<" guesses";
      for (x=0;x<10;x++)
       {
	 cout<<"\n\n\nGuess a number between 0 to 50: ";
	 cin>>n;
	 guess-=1;
	 if (num == n)
	  { cout<<"Congratulations! "<<name;
	    cout<<"\nYou got correct number> "<<num<<" in "<<x+1<<" guesses.";
	    cout<<"\n\t You Won The Game!!!";
	    break;
	  }
	 else if (n>num)
	       { cout<<"You guessed higher number, decrease your number ";
		 cout<<"\nYou have "<<guess<<" guesses left";
	       }
	 else if (n<num)
	       { cout<<"You guessed lower number, increase your number ";
		 cout<<"\nYou have "<<guess<<" guesses left";
	       }
       }
       if(guess==0 || n!=num)
	{ cout<<"\n\nNope, "<<name<<" the number is "<<num;
	  cout<<"\nYou lose the game. \t Better Luck next time.";
	}
	  cout<<"\n\nWant to try again ?(Y/N): ";
	  cin>>ch;
      } while(ch=='Y'||ch=='y');
	 cout<<"\n\tThanks for playing the game. ";
   }
  else
    cout<<"\nOK Fine. We can play next time \n Good Bye see you later. ";


 getch();
}


