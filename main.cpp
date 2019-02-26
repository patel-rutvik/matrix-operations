/*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
Created by: Rutvik Patel
E-mail: rutvik@ualberta.ca
Personal Site: https://patel-rutvik.github.io

This program demonstrates the implementation of a basic matrix transpose and
multiplier program.
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
*/
#include "multiply.cpp"


int main()
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
This is the main function of this program. It does not take in any parameters,
and returns an int 0. It is responsible for calling the other functions
implemented in the other files.
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
{
    mode = "none";  // initializing the mode to "none"
    getMode();  // getting the mode from user

    /* Check to see if a valid mode was entered. If the entry was invalid,
    prompt the user to try again */
    while (mode != "T" && mode != "t" && mode != "M" && mode != "m")
    {   
        cout << endl << "Invalid character entered, please enter a valid" <<
                        "option." << endl;
        getMode();
    }

    if (mode == "T" || mode == "t")
    {
        // run transpose program
            mode = "Transpose";
            transpose();
        }
        else if (mode == "M" || mode == "m")
        {
            // run multiplication program
            mode = "Multiply";
            multiply();
    }

    return 0;
}
