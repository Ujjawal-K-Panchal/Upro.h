#include <Upro.h>


using namespace std;


class manage
{

public :

    void menu_display()
    {
            Upro_Menu_Display();
    }
    void menu_operation()
    {
        Upro_Menu_Operation();
    }

};

int main()
{
        sound('c' , 1.5);
        welcome_anime();
        sound('c' , 0.5);
        delay(0.4);system("cls");
        sound('c' , 0.3);
        sound('D' , 0.05);
        system("color 0B");
        manage manage;
        manage.menu_display();
        manage.menu_operation();
        getch();

        return 0;
}
