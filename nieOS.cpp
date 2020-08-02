// nieOS.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <limits>
#include <stdio.h>

void logon()
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
    std::cout << "nieOS Build 6";
    sleep(2000);
    std::cout << "\n\n";
    logon();
    sleep(2000);
    system("CLS");
    std::cout << "Welcome to nieOS"; // logon phase ended


    std::string command;
    while (true) {
        std::cout << "\nN:/";
        std::cin >> command;
        if (command == "help")
        {
            std::cout << "Available commands:\n help\n";
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
