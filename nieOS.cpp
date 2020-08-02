// nieOS.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>
#include <thread>
#include <chrono>

void logon() // logon script
{
    std::string user;
    std::string pass;
    std::cout << "nieOS logon:\n";
    std::cout << "User:";
    std::cin >> user;
    if (user == "nie")
    {
        std::cout << "Password:";
        std::cin >> pass;
    }
    else {
        std::exit; // hopefully ends the program
    }
    if (pass == "nie")
    {
        std::cout << "Login successful";
    }
    else {
        std::cout << "Wrong username/password";
        throw std::exception(); // makes sure that the program was ended
    }
}

void sleep(int time) // Definicja łatwiejszej metody sleep()
{
    std::this_thread::sleep_for(std::chrono::milliseconds(time));
}


int main()
{
    std::cout << "nieOS Build 21";
    sleep(2300);
    std::cout << "\nLoading logon window...";
    sleep(100);
    std::cout << "\nLoading command interpreter...";
    sleep(500);
    std::cout << "\nLoading debugger...";
    sleep(1700);
    std::cout << "\n\n";
    logon();
    sleep(2000);
    system("CLS");
    sleep(1500);
    std::cout << "Welcome to nieOS\n"; // logon phase ended

    std::string command;
    while (true) {
        std::cout << "\nN:/";
        std::cin >> command;
        if (command == "help")
        {
            std::cout << "Available commands:\n help    exit    nie     calc    dir     cd    cls\n";
        }
        else if (command == "exit") { // exits the program
            throw std::exception();
        }
        else if (command == "nie") {
            std::cout << R"(
           /$$          
          |__/          
 /$$$$$$$  /$$  /$$$$$$ 
| $$__  $$| $$ /$$__  $$
| $$  \ $$| $$| $$$$$$$$
| $$  | $$| $$| $$_____/
| $$  | $$| $$|  $$$$$$$
|__/  |__/|__/ \_______/
)" << '\n';
        }
        else if (command == "calc") {
            int num1; // defining number variables
            int num2;
            std::string operation;
            std::cout << "Enter integer 1: ";
            std::cin >> num1;
            std::cout << "Enter integer 2: ";
            std::cin >> num2;
            std::cout << "What operation would you like to perform (symbols only)? ";
            std::cin >> operation;
            if (operation == "+") {
                std::cout << "The result is " << num1 + num2;
            }
            else if (operation == "-") {
                std::cout << "The result is " << num1 - num2;
            }
            else if (operation == "*") {
                std::cout << "The result is " << num1 * num2;
            }
            else if (operation == "/")
                std::cout << "The result is " << num1 / num2;
            else if (operation == ":") // adds support for second way of writing division
                std::cout << "The result is " << num1 / num2;
            else {
                std::cout << "Invalid input or operation not implemented yet.";
            }
        }
        else if (command == "dir") {
            std::cout << "Listing directory of N:/\n";
            sleep(200);
            std::cout << "15:55  05.08.2020    <FOLDER>    OS\n";
            sleep(200);
            std::cout << "14:45  05.08.2020    <FOLDER>    DOCUMENTS\n";
            sleep(300);
            std::cout << "17:00  05.08.2020        700K    superhack.prg\n";
            sleep(100);
            std::cout << "15:59  05.08.2020         10M    nieOS.cpp\n";
            sleep(400);
            std::cout << "17:24  05.08.2020          7K    about.txt\n";
            sleep(500);
            std::cout << "              3 FILES\n              2 FOLDERS\n";
        }
        else if (command == "cd/OS") {
            std::cout << "Access denied.";
        }
        else if (command == "cd/DOCUMENTS") {
            std::cout << "ERROR: Could not locate folder. Perhaps it no longer exists?";
        }
        else if (command == "cd") {
            std::cout << "SYNTAX: cd/(folder name)";
        }
        else if (command == "nieOS.cpp") {
            std::cout << "This program cannot be run under nieOS.";
        }
        else if (command == "superhack.prg") {
            std::string discard; //this variable will be discarded
            system("CLS");
            std::cout << "5up3r h4ck3r pr06r4m 1n171473d\n\nWh47 d0 y0u w4n7 70 h4xx";
            std::cin >> discard;
            std::cout << "h4xx1n6 1n pr06r355";
            sleep(10000);
            std::cout << "\n5y573m 15 n0w h4xx0r3d";
        }
        else if (command == "about.txt") {
            std::cout << R"(
-------------nieOS EDITOR - about.txt (read only)--------------------
| Hello, I made this program a day after learning C++, for fun.     |
| I hope you enjoy it!                                              |
|                                                                   |
|___________________________________________________________________|
)";
        }
        else if (command == "cls") {
            system("CLS");
        }
        else {
            std::cout << "Unknown command. Type help for a list of commands\n";
        }
    }
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
