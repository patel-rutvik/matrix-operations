// driver program for matrix calculator

#include "multiply.cpp"
//#include "multiply.cpp"
//#include "transpose.cpp"
using namespace std;

//string mode;
int main()
{   
    mode = "none";
    getMode();
    while (mode != "T" and mode != "t" and mode != "M" and mode != "m")
    {   
        cout << endl << "Invalid character entered, please enter a valid option." << endl;
        getMode();
    }

    if (mode == "T" or mode == "t")
    {
            mode = "Transpose";
            transpose();
        }
        else if (mode == "M" or mode == "m")
        {
            mode = "Multiply";
            multiply();
    }

    return 0;
}