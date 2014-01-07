#include <iostream>
#include <string>
#include "main.h"
#include <boost/lexical_cast.hpp>
#include <cstdlib>
#include <ctime>


//P
string person[] = {
    "Путин ", "Алла Пугачёва ", "Московский врач ",
    "Ксения Собчак ", "Кот-экстрасенс ", "Доярка из Иваново ",
    "Робот-гедонист ", "Волочкова ", "Тимати "};
//C
string condition[] = {
    "в ночном клубе ", "в состоянии алкогольного опьянения ", "на официальном заседании ",
    "во время праздников ", "в детстве ", "на показе мод ",
    "в книжном магазине ", "в комплексном пространстве ", "в тюрьме "};
//A (for male)
string action_male[] = {
    "убегал от алиментов ", "РЫДАЛ, как девчонка ",
    "накачал пресс за 2 недели ", "ШОКИРОВАЛ всех "};
//A (for female)
string action_female[] = {
    "родила ВОСЬМЕРЫХ ", "похудела ОТ ЧЕТЫРЁХ ПРОДУКТОВ ",
    "опозорилась НА ВСЮ СТРАНУ ", "избила ВОСЬМЕРЫХ человек "};
//C1
string add_con[] = {
    "РЖАКА ",
    "СМОТРЕТЬ ВСЕМ ", "ШОК ", "ЖЕСТЬ ",
    "НЕ ПРОПУСТИ! ", "МИЛЛИОНЫ ПРОСМОТРОВ НА YOUTUBE!!!!!! ", "КАК ТАКОЕ В ГОЛОВУ ПРИШЛО ",
    "БЕЗ СМС И РЕГИСТРАЦИИ!!! ", "ОБЯЗАТЕЛЬНО К ПРОЧТЕНИЮ!!! ", "ВСЕГО ОДНА СМС!!! "
};
//B
string bonus[] = {" фото ", " видео "};


void s_to_pacc1b()
{
    p_to_string_a();
    c_to_string();
    c1_to_string();
    b_to_string();
}

void p_to_string_a()
{
    int i = rand() % 9;
    cout << person[i];
    //    cout << "ok" << i << '\n';
    if (i % 2)
        af_to_string();
    else
        am_to_string();

}

void c_to_string()
{
    cout << condition[rand() % 9];
}

void af_to_string()
{
    cout << action_female[rand() % 4];
}

void am_to_string()
{
    cout << action_male[rand() % 4];
}

void c1_to_string()
{
    int r = rand();
//    cout << r << '\n';
    cout << add_con[rand() % 10];
    if (r % 2) c1_to_string();
    else return;
}

void b_to_string()
{
    cout << "( + " << boost::lexical_cast<string>(rand() % 255) + bonus[rand() % 2] << ")";
}

int main()
{
    srand(time(0));
    s_to_pacc1b();
    cout << '\n';
    return 0;
}

