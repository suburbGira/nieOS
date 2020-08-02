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
        exit;
    }
    if (pass == "nie")
    {
        std::cout << "Login successful";
    }
    else {
        std::cout << "Wrong username/password";
        std::cin.clear(); // reset any error flags
        std::cin.get(); // get one more char from the user
        exit;
    }
}

void sleep(int time) // Definicja łatwiejszej metody sleep()
{
    std::this_thread::sleep_for(std::chrono::milliseconds(time));
}

void desktop()
{
    std::cout << "Available applications: \n";
    std::cout << "None!";
    std::cout << "\nThe system will now exit.";
}

int main()
{
    std::cout << "nieOS Build 2";
    sleep(2000);
    std::cout << "\n\n";
    logon();
    sleep(2000);
    system("CLS");
    std::cout << "Welcome to nieOS";
    desktop();
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
