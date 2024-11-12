#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
    srand(time(NULL));

    int Hidden_Num = rand() % 20 + 1;
    int guess;
    int attempts = 0;
    
    cout << "---------------------------------- \n";
    cout << "Welcome to the Hidden World \n";
    cout << "---------------------------------- \n";

    do {
        cout << "Guess Your Favourite Number between 1 and 20 : ";
        cin >> guess;
        attempts++;

        if (guess < Hidden_Num) 
		{
			cout << "--------------------------------------------- \n";
            cout << "DONT LOSE HOPE YOU ARE CLOSER .... Try Again.\n";
        } else if (guess > Hidden_Num) {
        	cout << "--------------------------------------------- \n";
            cout << "LITTLE HIGHER!!! BUT DONT LOSE HOPE YOU CAN .... Try Again.\n";
        } else {
        	cout << "--------------------------------------------- \n";
            cout << "Mubarak HOO \n Congratulations! You guessed the number in " << attempts << " attempts.\n";
            cout << "--------------------------------------------- \n";
        }
    } while (guess != Hidden_Num);

    return 0;
}
