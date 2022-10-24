// CSIS123_Final.cpp

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main()
{
    bool isRunning = true;
    string userInput = "\0";
    int numOne = 0;
    int numTwo = 0;
    srand(time(0));

    cout << "This program generates a math problem for you to solve." << endl;
    cout << "Type \"quit\" to exit.\n" << endl;

    while (isRunning)
    {
        if (userInput == "quit" || userInput == "QUIT")
            isRunning = false;
        else
        {
            //srand(time(0));
            numOne = rand() % 999;
            //srand(time(0) + 1);
            numTwo = rand() % 999;
            int answer = numOne + numTwo;

            cout << "\n  " << numOne << " + " << numTwo << "= ?" << endl;
            cout << "Your answer: ";
            cin >> userInput;
            if (userInput == "quit" || userInput == "QUIT")
                isRunning = false;
            else if (stoi(userInput) == answer)
            {
                cout << "Your answer is correct! Good job!" << endl;
            }
            else
            {
                cout << "Sorry, your answer is incorrect. The correct answer is: " << answer << "." << endl;
            }



        }
    }

    system("pause");
    return 0;
}