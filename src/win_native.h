#include "main.h"
#include <windows.h>
#include <winuser.h>
#include <psapi.h>

void start_listening();
void CALLBACK event_handler(HWINEVENTHOOK hook, DWORD event, HWND hwnd, LONG idObject, LONG idChild, 
                                DWORD dwEventThread, DWORD dwmsEventTime);
char* last_occurence(char* str, char chr);