#include <iostream>
#include <string>
using namespace std;

string charToMorse(char16_t letter)
{
    switch (letter)
    {
    case '0': 
        return "-----"; break;
    case '1': 
        return ".----"; break;
    case '2': 
        return "..---"; break;
    case '3': 
        return "...--"; break;
    case '4': 
        return "....-"; break;
    case '5': 
        return "....."; break;
    case '6': 
        return "-...."; break;
    case '7': 
        return "--..."; break;
    case '8': 
        return "---.."; break;
    case '9': 
        return "----."; break;
    default:
        return " "; break;
    }
}

int main()
{
    cout << "Szyfrowanie liczb kodem Morse'a" << endl;
    char key;
    bool loop = true;
    while (loop)
    {
        bool toMorse = true;
        string input;
        string output = "";
        int node = 0;
        string sub;
        cout << "Podaj liczbe do zakodowania: " << endl;
        getline(cin, input);
        
        if (toMorse)
        {
            for (int i = 0; i < input.length(); i++)
            {
                if (i != 0)
                {
                    output += " ";
                }
                output = output + charToMorse(input[i]);
            }
        }
        else {
            break;
        }
        cout << output << endl;
        cout << "Aby wyczyscic klawisz R, aby wyjsc dowolny inny klawisz" << endl;
        cin >> key;
        if (key != 'r')
        {
            loop = false;
        }
        cin.clear();
        cin.ignore();
        cout << endl << endl;
    }

}