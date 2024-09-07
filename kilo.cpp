#include <windows.h>
#include <iostream>

void enableRawMode()
{
    HANDLE hStdin = GetStdHandle(STD_INPUT_HANDLE);
    DWORD raw{};

    GetConsoleMode(hStdin, &raw);       // Get curremt console mode
    SetConsoleMode(hStdin, raw & ~ENABLE_ECHO_INPUT);   //Disable echo
}

int main(int argc, char const *argv[])
{
    enableRawMode();
    char c{};
    while (std::cin.get(c) && c != 'q')
    {
        /* Keep looping until 'q' is pressed */
    }
    return 0;
}
