#include "generator.h"

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


string s_to_pacc1b()
{
    string s = "<a href=\"http://github.com/reverendhomer/\">";
    s += p_to_string_a();
    s += c_to_string();
    s += c1_to_string();
    s += b_to_string();
    s += "</a>";
    return s;
}

string p_to_string_a()
{
    int i = rand() % 9;
    string s = person[i];
    if (i % 2)
        s += af_to_string();
    else
        s += am_to_string();
    return s;
}

string c_to_string()
{
    return condition[rand() % 9];
}

string af_to_string()
{
    return action_female[rand() % 4];
}

string am_to_string()
{
    return action_male[rand() % 4];
}

string c1_to_string()
{\
    int r = rand();
    string s =  add_con[rand() % 10];
    while (r % 2)
    {
        s += add_con[rand() % 10];
        r = rand();
    }
    return s;
}

string b_to_string()
{
    stringstream ss;
    int r = rand() % 255;
    ss << r;
    string s = ss.str();
    return "( + " + s + bonus[rand() % 2] + ")";
}
