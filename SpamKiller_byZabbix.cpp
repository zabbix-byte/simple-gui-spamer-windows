#include <iostream>
#include <windows.h>
#include <conio.h>

void writeTextUI(char[]);

int main(){
    char key[1], text_to_spam[25];
    int time_sleep;

    system("Color 0A");

    
	std::cout << "                    _                                                  "<< std::endl;  
	std::cout << "                  -=\\`\\                                              "<< std::endl;  
	std::cout << "              |\\ ____\\_\\__                                          "<< std::endl;  
	std::cout << "            -=\\c`      _____ `)            Z A B B I X    KILLER         "<< std::endl;  
	std::cout << "                 -==/ /                                               "<< std::endl;  
	std::cout << "                   '-'                                                 "<< std::endl;  
	std::cout << "                  _  _                                                 "<< std::endl;  
	std::cout << "                 ( `   )_                                              "<< std::endl;  
	std::cout << "                (    )    `)                                           "<< std::endl;  
	std::cout << "              (_   (_ .  _) _)                                         "<< std::endl;  
	std::cout << "                                             _                         "<< std::endl;  
	std::cout << "                                            (  )                       "<< std::endl;  
	std::cout << "             _ .                         ( `  ) . )                    "<< std::endl;  
	std::cout << "           (  _ )_                      (_, _(  ,_)_)                  "<< std::endl;  
	std::cout << "         (_  _(_ ,)                                                    "<< std::endl;  




                

    while (1){
        if (strcmp(key, "s") != 0) {
            std::cout << "\nText: "; 
            gets(text_to_spam);
            std::cout << "Spam pause: "; std::cin >> time_sleep;
            std::cout << "To exit press ESC \nType s to start the program: ";
            std::cin >> key;

            if (strcmp(key, "s") != 0){break;}
            Sleep(100);
            }

        if (strcmp(key, "s") == 0) {
            if(GetAsyncKeyState(0x1B)) { //ESC KEY
                std::cout << "\nthe program is stopping..\n";
                break;
            }
            Sleep(time_sleep);
            writeTextUI(text_to_spam);
            keybd_event(0x0D, 0, KEYEVENTF_EXTENDEDKEY, 0);	//ENTER	
        }
        
        
	}

    system("pause");
    return 0;
}

void writeTextUI(char text[])
{
    char valor;
    int contador = 0;
    
    while (true)
    {
        valor = toupper(text[contador]);
        contador += 1;
        if (valor == 0){break;}

        switch (valor)
        {
        case '0':
            keybd_event(0x30, 0, KEYEVENTF_EXTENDEDKEY, 0);
            break;
        case '1':
            keybd_event(0x31, 0, KEYEVENTF_EXTENDEDKEY, 0);
            break;
        case '2':
            keybd_event(0x32, 0, KEYEVENTF_EXTENDEDKEY, 0);
            break;
        case '3':
            keybd_event(0x33, 0, KEYEVENTF_EXTENDEDKEY, 0);
            break;
        case '4':
            keybd_event(0x34, 0, KEYEVENTF_EXTENDEDKEY, 0);
            break;
        case '5':
            keybd_event(0x35, 0, KEYEVENTF_EXTENDEDKEY, 0);
            break;
        case '6':
            keybd_event(0x36, 0, KEYEVENTF_EXTENDEDKEY, 0);
            break;
        case '7':
            keybd_event(0x37, 0, KEYEVENTF_EXTENDEDKEY, 0);
            break;
        case '8':
            keybd_event(0x38, 0, KEYEVENTF_EXTENDEDKEY, 0);
            break;
        case '9':
            keybd_event(0x39, 0, KEYEVENTF_EXTENDEDKEY, 0);
            break;
        case 'A':
            keybd_event(0x41, 0, KEYEVENTF_EXTENDEDKEY, 0);
            break;
        case 'B':
            keybd_event(0x42, 0, KEYEVENTF_EXTENDEDKEY, 0);
            break;
        case 'C':
            keybd_event(0x43, 0, KEYEVENTF_EXTENDEDKEY, 0);
            break;
        case 'D':
            keybd_event(0x44, 0, KEYEVENTF_EXTENDEDKEY, 0);
            break;
        case 'E':
            keybd_event(0x45, 0, KEYEVENTF_EXTENDEDKEY, 0);
            break;
        case 'F':
            keybd_event(0x46, 0, KEYEVENTF_EXTENDEDKEY, 0);
            break;
        case 'G':
            keybd_event(0x47, 0, KEYEVENTF_EXTENDEDKEY, 0);
            break;
        case 'H':
            keybd_event(0x48, 0, KEYEVENTF_EXTENDEDKEY, 0);
            break;
        case 'I':
            keybd_event(0x49, 0, KEYEVENTF_EXTENDEDKEY, 0);
            break;
        case 'J':
            keybd_event(0x4A, 0, KEYEVENTF_EXTENDEDKEY, 0);
            break;
        case 'K':
            keybd_event(0x4B, 0, KEYEVENTF_EXTENDEDKEY, 0);
            break;
        case 'L':
            keybd_event(0x4C, 0, KEYEVENTF_EXTENDEDKEY, 0);
            break;
        case 'M':
            keybd_event(0x4D, 0, KEYEVENTF_EXTENDEDKEY, 0);
            break;
        case 'N':
            keybd_event(0x4E, 0, KEYEVENTF_EXTENDEDKEY, 0);
            break;
        case 'O':
            keybd_event(0x4F, 0, KEYEVENTF_EXTENDEDKEY, 0);
            break;
        case 'P':
            keybd_event(0x50, 0, KEYEVENTF_EXTENDEDKEY, 0);
            break;
        case 'Q':
            keybd_event(0x51, 0, KEYEVENTF_EXTENDEDKEY, 0);
            break;
        case 'R':
            keybd_event(0x52, 0, KEYEVENTF_EXTENDEDKEY, 0);
            break;
        case 'S':
            keybd_event(0x53, 0, KEYEVENTF_EXTENDEDKEY, 0);
            break;
        case 'T':
            keybd_event(0x54, 0, KEYEVENTF_EXTENDEDKEY, 0);
            break;
        case 'U':
            keybd_event(0x55, 0, KEYEVENTF_EXTENDEDKEY, 0);
            break;
        case 'V':
            keybd_event(0x56, 0, KEYEVENTF_EXTENDEDKEY, 0);
            break;
        case 'W':
            keybd_event(0x57, 0, KEYEVENTF_EXTENDEDKEY, 0);
            break;
        case 'X':
            keybd_event(0x58, 0, KEYEVENTF_EXTENDEDKEY, 0);
            break;
        case 'Y':
            keybd_event(0x59, 0, KEYEVENTF_EXTENDEDKEY, 0);
            break;
        case 'Z':
            keybd_event(0x5A, 0, KEYEVENTF_EXTENDEDKEY, 0);
            break;
        }
        
    }
}