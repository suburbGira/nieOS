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
    std::cout << "nieOS Build 10";
    sleep(2000);
    std::cout << "\n\n";
    logon();
    sleep(2000);
    system("CLS");
    std::cout << "Welcome to nieOS\n"; // logon phase ended

    std::string command;
    while (true) {
        std::cout << "\nN:/";
        std::cin >> command;
        if (command == "help")
        {
            std::cout << "Available commands:\n help    exit    nie     calc\n";
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
            else {
                std::cout << "Invalid input or operation not implemented yet.";
            }
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
