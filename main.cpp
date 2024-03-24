#include <conio.h>
#include <iostream>
#include <windows.h>
#include "progressbar.hpp"

using namespace std;

int main() {

    ShellExecute(NULL, "open", "\"C:\\Program Files\\Jellyfin\\Server\\Jellyfin.Windows.Tray.exe\"", NULL, NULL, SW_SHOWDEFAULT);
    cout << "Opening Jellyfin Player\n";
    progressbar bar(100);
    bar.set_todo_char(" ");
    bar.set_done_char("=");
    bar.set_opening_bracket_char("[");
    bar.set_closing_bracket_char("]");
    for (int i = 0; i <= 100; ++i) {
        i == 80 ? Sleep(3000) : bar.update(); ;
    }
    system("cls");
    system("\"C:\\Program Files\\Jellyfin\\Jellyfin Media Player\\JellyfinMediaPlayer.exe\"");
    cout << "Closing the server...\n";
    system("taskkill /IM Jellyfin.Windows.Tray.exe /f");
    Sleep(1000);
    return 0;
}
