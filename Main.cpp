// for testing input module
#include <iostream>
#include <string>
#include <vector>
#include "Control_Module_Main/Action_Process.h"
Action_Processor R_Main;

#include "Control_Module_Main/Data_Storage.h"
Data_Storage D_Main;

#include "Control_Module_Main/Input.h"
Input I_Main;

using namespace std;

int main() {
    // Set console code page to 65001 so program can use Unicode characters
    system("chcp 65001");
    srand(0);
    I_Main.Initialize();
    //D_Main.Test_Specific_Card(12);
    for (int ff = 0;; ff++)
    {
        I_Main.Read_input();
        I_Main.Execute_Command();
    }
}