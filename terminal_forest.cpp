//developing
#include <iostream>
#include <thread>
#include <chrono>
#include <random>
using namespace std;

class Than {
public:
    int food;
    int drink;
    int health;
    int stamina;
};
Than Ingam;

void Thanh1() {
    for (int i = true; i == true;) {
        std::this_thread::sleep_for(std::chrono::seconds(45));
        Ingam.food = Ingam.food - 1;
    }
}

void Thanh2() {
    for (int i = true; i == true;) {
        std::this_thread::sleep_for(std::chrono::seconds(46));
        Ingam.drink = Ingam.drink - 1;
    }
}

int main() {
    Ingam.food = 100;
    Ingam.drink = 50;
    thread t1(Thanh1);
    thread t2(Thanh2);
    t1.detach();
    t2.detach();

    cout << "\r loading." << flush;
    std::this_thread::sleep_for(std::chrono::milliseconds(2250));

    long long bauxite_inventor = 0, kno_inventor = 0, diamond_inventor = 0, copper_inventor = 0;
    long long graphite_inventor = 0, coal_inventor = 0, stone_inventor = 0, meat = 0, cm_inventor = 0, axe_dura = 0;
    long long iron_inventor = 0, go_inventor = 0, sword_dura = 0, gun_dura = 0, ammor_inventor = 0 , water_mc = 0 , band_inventor = 0;
    long long bandage_inventor = 0,  ling_inventor = 0, may_inventor = 0, mus_inventor = 0,   mul_inventor = 0, ras_inventor = 0;
    bool sword = false, gun = false, bandage = false, pickaxe = false, axe = false;
    int w_hit = 0, b_hit = 0;

    cout << "\r loading.." << flush;
    std::this_thread::sleep_for(std::chrono::milliseconds(2250));

    Ingam.health = 100;
    Ingam.stamina = 50;
    int choose = 0;
    random_device so;
    mt19937 quay(so());

    cout << "\r loading..." << flush;
    std::this_thread::sleep_for(std::chrono::milliseconds(2250));
    cout << "\r done!        " << flush;
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    cout << endl << endl << endl;

    cout << " TTTTTTTTTTTTT EEEEEEEEEE  RRRRRRR      MMMM          MMMM  IIIIII  NNNN   NN  AAA        LL " << endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    cout << "     TTTTT     EE          RR     RR    MM  MM       MM MM    II    NN NN  NN  AA AA      LL " << endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    cout << "     TTTTT     EEEEEEEEE   RR     RR    MM   MM    MM   MM    II    NN  NN NN  AA  AA     LL " << endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    cout << "     TTTTT     EE          RRRRRRRR     MM    MM  MM    MM    II    NN   NNNN  AAAAAAA    LL " << endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    cout << "     TTTTT     EE          RR   RRR     MM     MMMM     MM    II    NN    NNN  AA    AA   LL " << endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    cout << "     TTTTT     EEEEEEEEEE  RR     RRR   MM      MM      MM  IIIIII  NN     NN  AA     AA  LLLLLLLLLLL " << endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(100));

    cout << endl << endl;

    cout << " FFFFFFFFFFF      OOOOOOOOOO     RRRRRRR     EEEEEEEEE     sSSSSSSS    TTTTTTTTTTTTT     " << endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    cout << " FF             OO          OO   RR     RR   EE            SS              TTTT     " << endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    cout << " FFFFFFFFFFF   OO            OO  RR     RR   EEEEEEEEE     SS              TTTT" << endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    cout << " FF            OO            OO  RRRRRRR     EE            sSSSSSSSs       TTTT" << endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    cout << " FF             OO          OO   RR    RRR   EE                   SS       TTTT " << endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    cout << " FF               OOOOOOOOOO     RR     RRR  EEEEEEEEE     SSSSSSSSs       TTTT " << endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(100));

    cout << "there is terminal forset" << endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));
    cout << "you need survival at here not why" << endl;
    std::this_thread::sleep_for(std::chrono::seconds(4));
    cout << "FOOD" << flush;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    cout << " - " << flush;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    cout << "WATER" << flush;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    cout << " - " << flush;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    cout << "SUVIVAL" << endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));
    cout << "|___---___---___---___---___---___---___---___|" << endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));

    cout << "Hungry: " << Ingam.food << endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    cout << "Drink: " << Ingam.drink << endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    cout << "Health: " << Ingam.health << endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    cout << "Stamina: " << Ingam.stamina << endl << endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(300));

    std::this_thread::sleep_for(std::chrono::seconds(2));

    for (int i = true; i == true;) {
        cout << "What do you want to do?" << endl;
        cout << "  1.cut down a tree (-5 stamina) / 2.ore mining (-10 stamini) / 3.killing wild animals (battle) / 4.picking wild fruit (-1 stamina) / 5.eat (+ hungry)/ 6.drink (+drink)/ 7.view metrics / 8.view inventory / 9.build /  10.searching for water / 11. sleep / 12. plus" << endl << endl;
        cout << "(choose number) I want: ";
        cin >> choose;
        cout << endl << endl;

        if (choose > 12 || choose <= 0) {
            cout << "pleas choose again" << endl << endl;
        } else {
            switch (choose) {
                case 1: {
                    Ingam.stamina = Ingam.stamina - 5;
                    cout << "\rcutting." << flush;
                    std::this_thread::sleep_for(std::chrono::seconds(3));
                    cout << "\rcutting.." << flush;
                    std::this_thread::sleep_for(std::chrono::seconds(3));
                    cout << "\rcutting..." << flush << endl;
                    std::this_thread::sleep_for(std::chrono::seconds(4));

                    uniform_int_distribution<int> so_luong(5, 15);
                    int go = so_luong(quay);
                    cout << "you got: " << go << " wood" << endl << endl;
                    go_inventor += go;
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    break;
                }

                case 2: {
                    Ingam.stamina = Ingam.stamina - 10;
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    cout << "\rmining." << flush;
                    std::this_thread::sleep_for(std::chrono::seconds(5));
                    cout << "\rmining.." << flush;
                    std::this_thread::sleep_for(std::chrono::seconds(5));
                    cout << "\rmining..." << flush;
                    std::this_thread::sleep_for(std::chrono::seconds(5));
                    cout << "\rmining...." << flush << endl;
                    std::this_thread::sleep_for(std::chrono::seconds(5));

                    int so_quang;
                    if (pickaxe == true) {
                        uniform_int_distribution<int> so_dao(10, 25);
                        so_quang = so_dao(quay);
                    } else {
                        uniform_int_distribution<int> so_dao(3, 10);
                        so_quang = so_dao(quay);
                    }

                    uniform_int_distribution<int> may_man(1, 100);
                    int may = may_man(quay);

                    if (may >= 1 && may <= 2) {
                        cout << "you got " << so_quang << " diamond" << endl << endl;
                        diamond_inventor += so_quang;
                    } else if (may >= 3 && may <= 5) {
                        cout << "you got " << so_quang << " KNO3" << endl << endl;
                        kno_inventor += so_quang;
                    } else if (may >= 6 && may <= 10) {
                        cout << "you got " << so_quang << " bauxite" << endl << endl;
                        bauxite_inventor += so_quang;
                    } else if (may >= 11 && may <= 20) {
                        cout << "you got " << so_quang << " graphite" << endl << endl;
                        graphite_inventor += so_quang;
                    } else if (may >= 21 && may <= 35) {
                        cout << "you got " << so_quang << " coal" << endl << endl;
                        coal_inventor += so_quang;
                    } else if (may >= 36 && may <= 50) {
                        cout << "you got " << so_quang << " iron ore" << endl << endl;
                        iron_inventor += so_quang;
                    } else if (may >= 51 && may <= 70) {
                        cout << "you got " << so_quang << " stone" << endl << endl;
                        stone_inventor += so_quang;
                    } else if (may > 70 && may <= 100) {
                        cout << "you got " << so_quang << " copper" << endl << endl;
                        copper_inventor += so_quang;
                    }
                    break;
                }

                case 3: {
                    uniform_int_distribution<int> chon_quai(1, 3);
                    int battle = chon_quai(quay);
                    if (battle == 1) {
                        int bhea = 35;
                        cout << "you will fight with... " << flush;
                        std::this_thread::sleep_for(std::chrono::seconds(3));
                        cout << " A Bunny !" << endl;
                        std::this_thread::sleep_for(std::chrono::milliseconds(800));
                        cout << " damage : 0" << endl;
                        std::this_thread::sleep_for(std::chrono::milliseconds(800));
                        cout << "bunny health: " << bhea << endl;
                        std::this_thread::sleep_for(std::chrono::milliseconds(800));
                        cout << "your health: " << Ingam.health << endl;
std::this_thread::sleep_for(std::chrono::milliseconds(500));
cout << "your stamina: " << Ingam.stamina << endl;
std::this_thread::sleep_for(std::chrono::milliseconds(500));
for (bool x = false; x == false;) {
cout << "choose : 1. hit / 2. treatment / 3. !!Nigerundayo!!" << endl;
cout << "choose: ";
int choose_bt;
cin >> choose_bt;
cout << endl << endl;
if (choose_bt == 1) {
cout << "1. punch (damage 5 | -5 stamina) / 2. sword (damage 15 | -10 stamina) / 3. gun (damage 35 | -5 stamina | -2 ammor)" << endl;
int hit;
cout << "choose hit type : ";
cin >> hit;
cout << endl << endl;
if (hit == 1 && bhea >= 0) {
if (Ingam.stamina >= 5) {
bhea -= 5;
Ingam.stamina -= 5;
cout << " you hit the bunny 5 damage, your stamina: " << Ingam.stamina << " and the health of bunny: " << bhea << endl << endl;
} else {
cout << "your stamina not enough stamina please choose again" << endl << endl;
}
} else if (hit == 2 && bhea >= 0) {
if (sword == true && Ingam.stamina >= 10) {
bhea -= 15;
Ingam.stamina -= 10;
cout << " you hit the bunny 15 damage, your stamina: " << Ingam.stamina << " and the health of bunny: " << bhea << endl << endl;
} else {
cout << "your stamina not enough stamina / not have sword please choose again" << endl << endl;
}
} else if (hit == 3 && bhea >= 0) {
if (Ingam.stamina >= 5 && gun == true && ammor_inventor >= 2) {
bhea -= 35;
Ingam.stamina -= 5;
ammor_inventor -= 2;
cout << " you hit the bunny 35 damage, your stamina: " << Ingam.stamina << " and the health of bunny: " << bhea << endl << endl;
} else {
cout << "your stamina not enough stamina / ammor / not have gun please choose again" << endl << endl;
}
} else {
cout << "not found... choose again" << endl << endl;
}
} else if (choose_bt == 2 && bhea >= 0) {
if (bandage == true && Ingam.health + 15 > 100) {
cout << "\r recovering.  (" << flush;
std::this_thread::sleep_for(std::chrono::milliseconds(1500));
Ingam.health = 100;
std::this_thread::sleep_for(std::chrono::milliseconds(1500));
cout << "\r done!                                          " << endl << endl;
} else if (bandage == true) {
Ingam.health += 5;
cout << "\r recovering.  (" << Ingam.health << ")" << flush;
std::this_thread::sleep_for(std::chrono::milliseconds(1500));
Ingam.health += 5;
cout << "\r recovering.. (" << Ingam.health << ")" << flush;
std::this_thread::sleep_for(std::chrono::milliseconds(1500));
Ingam.health += 5;
cout << "\r recovering...(" << Ingam.health << ")" << flush;
std::this_thread::sleep_for(std::chrono::milliseconds(1500));
cout << "\r done!                                          " << endl << endl;
} else {
cout << "You don't have any bandages." << endl << endl;
}
} else if (choose_bt == 3 && bhea >= 0) {
cout << "NIGERUNDAYO!!!" << flush << endl;
std::this_thread::sleep_for(std::chrono::milliseconds(250));
cout << "your health: " << Ingam.health << endl << flush;
std::this_thread::sleep_for(std::chrono::milliseconds(250));
cout << "your stamina: " << Ingam.stamina << endl << flush;
std::this_thread::sleep_for(std::chrono::milliseconds(250));
x = true;
} else {
cout << "not found... choose again" << endl << endl;
}
if (bhea <= 0) {
cout << "congratulations!, the bunny is die! You have 5 meat!" << endl << endl;
meat += 5;
x = true;
break;
}
if ( Ingam.health <= 0) {
                        cout << "you die...";
                        i = false;
                     }
}
} else if (battle == 2) {
int whea = 50;
cout << "you will fight with... " << flush;
std::this_thread::sleep_for(std::chrono::seconds(3));
cout << " A Wolf !" << endl;
std::this_thread::sleep_for(std::chrono::milliseconds(800));
cout << " damage : 15" << endl;
std::this_thread::sleep_for(std::chrono::milliseconds(800));
cout << "wolf health: " << whea << endl;
std::this_thread::sleep_for(std::chrono::milliseconds(800));
cout << "your health: " << Ingam.health << endl;
std::this_thread::sleep_for(std::chrono::milliseconds(500));
cout << "your stamina: " << Ingam.stamina << endl;
std::this_thread::sleep_for(std::chrono::milliseconds(500));
for (bool x = false; x == false;) {
cout << "choose : 1. hit / 2. treatment / 3. !!Nigerundayo!!" << endl;
cout << "choose: ";
int choose_bt;
cin >> choose_bt;
cout << endl << endl;
if (choose_bt == 1) {
cout << "1. punch (damage 5 | -5 stamina) / 2. sword (damage 15 | -10 stamina) / 3. gun (damage 35 | -5 stamina | -2 ammor)" << endl;
int hit;
cout << "choose hit type : ";
cin >> hit;
cout << endl << endl;
if (hit == 1 && whea >= 0) {
if (Ingam.stamina >= 5) {
whea -= 5;
Ingam.stamina -= 5;
cout << " you hit the wolf 5 damage, your stamina: " << Ingam.stamina << " and the health of wolf: " << whea << endl << endl;
} else {
cout << "your stamina not enough stamina please choose again" << endl << endl;
}
} else if (hit == 2 && whea >= 0) {
if (sword == true && Ingam.stamina >= 10) {
whea -= 15;
Ingam.stamina -= 10;
cout << " you hit the wolf 15 damage, your stamina: " << Ingam.stamina << " and the health of wolf: " << whea << endl << endl;
} else {
cout << "your stamina not enough stamina / not have sword please choose again" << endl << endl;
}
} else if (hit == 3 && whea >= 0) {
if (Ingam.stamina >= 5 && gun == true && ammor_inventor >= 2) {
whea -= 35;
Ingam.stamina -= 5;
ammor_inventor -= 2;
cout << " you hit the wolf 35 damage, your stamina: " << Ingam.stamina << " and the health of wolf: " << whea << endl << endl;
} else {
cout << "your stamina not enough stamina / ammor / not have gun please choose again" << endl << endl;
}
} else {
cout << "not found... choose again" << endl << endl;
}
} else if (choose_bt == 2 && whea >= 0) {
if (bandage == true && Ingam.health + 15 > 100) {
cout << "\r recovering.  (" << flush;
std::this_thread::sleep_for(std::chrono::milliseconds(1500));
Ingam.health = 100;
std::this_thread::sleep_for(std::chrono::milliseconds(1500));
cout << "\r done!                                          " << endl << endl;
} else if (bandage == true) {
Ingam.health += 5;
cout << "\r recovering.  (" << Ingam.health << ")" << flush;
std::this_thread::sleep_for(std::chrono::milliseconds(1500));
Ingam.health += 5;
cout << "\r recovering.. (" << Ingam.health << ")" << flush;
std::this_thread::sleep_for(std::chrono::milliseconds(1500));
Ingam.health += 5;
cout << "\r recovering...(" << Ingam.health << ")" << flush;
std::this_thread::sleep_for(std::chrono::milliseconds(1500));
cout << "\r done!                                          " << endl << endl;
} else {
cout << "You don't have any bandages." << endl << endl;
}
} else if (choose_bt == 3 && whea >= 0) {
cout << "NIGERUNDAYO!!!" << flush << endl;
std::this_thread::sleep_for(std::chrono::milliseconds(250));
cout << "your health: " << Ingam.health << endl << flush;
std::this_thread::sleep_for(std::chrono::milliseconds(250));
cout << "your stamina: " << Ingam.stamina << endl << flush;
std::this_thread::sleep_for(std::chrono::milliseconds(250));
x = true;
} else {
cout << "not found... choose again" << endl << endl;
}
if (whea <= 0) {
cout << "congratulations!, the wolf is die! You have 15 meat!" << endl << endl;
meat += 15;
x = true;
break;
}
uniform_int_distribution<int> hitting (1, 5);
w_hit = hitting(quay);
if (w_hit >= 2) {
cout << "the wolf is hit you 15 damage" << endl;
Ingam.health -= 15;
cout << "your health: " << Ingam.health << endl << endl;
}
if ( Ingam.health <= 0) {
                        cout << "you die...";
                        i = false;
                     }
}
} else if (battle == 3) {
int behea = 140;
cout << "you will fight with... " << flush;
std::this_thread::sleep_for(std::chrono::seconds(3));
cout << " A Bear !" << endl;
std::this_thread::sleep_for(std::chrono::milliseconds(800));
cout << " damage : 30" << endl;
std::this_thread::sleep_for(std::chrono::milliseconds(800));
cout << "bear health: " << behea << endl;
std::this_thread::sleep_for(std::chrono::milliseconds(800));
cout << "your health: " << Ingam.health << endl;
std::this_thread::sleep_for(std::chrono::milliseconds(500));
cout << "your stamina: " << Ingam.stamina << endl;
std::this_thread::sleep_for(std::chrono::milliseconds(500));
for (bool x = false; x == false;) {
cout << "choose : 1. hit / 2. treatment / 3. !!Nigerundayo!!" << endl;
cout << "choose: ";
int choose_bt;
cin >> choose_bt;
cout << endl << endl;
if (choose_bt == 1) {
cout << "1. punch (damage 5 | -5 stamina) / 2. sword (damage 15 | -10 stamina) / 3. gun (damage 35 | -5 stamina | -2 ammor)" << endl;
int hit;
cout << "choose hit type : ";
cin >> hit;
cout << endl << endl;
if (hit == 1 && behea >= 0) {
if (Ingam.stamina >= 5) {
behea -= 5;
Ingam.stamina -= 5;
cout << " you hit the bear 5 damage, your stamina: " << Ingam.stamina << " and the health of bear: " << behea << endl << endl;
} else {
cout << "your stamina not enough stamina please choose again" << endl << endl;
}
} else if (hit == 2 && behea >= 0) {
if (sword == true && Ingam.stamina >= 10) {
behea -= 15;
Ingam.stamina -= 10;
cout << " you hit the bear 15 damage, your stamina: " << Ingam.stamina << " and the health of bear: " << behea << endl << endl;
} else {
cout << "your stamina not enough stamina / not have sword please choose again" << endl << endl;
}
} else if (hit == 3 && behea >= 0) {
if (Ingam.stamina >= 5 && gun == true && ammor_inventor >= 2) {
behea -= 35;
Ingam.stamina -= 5;
ammor_inventor -= 2;
cout << " you hit the bear 35 damage, your stamina: " << Ingam.stamina << " and the health of bear: " << behea << endl << endl;
} else {
cout << "your stamina not enough stamina / ammor / not have gun please choose again" << endl << endl;
}
} else {
cout << "not found... choose again" << endl << endl;
}
} else if (choose_bt == 2 && behea >= 0) {
if (bandage == true && Ingam.health + 15 > 100) {
cout << "\r recovering.  (" << flush;
std::this_thread::sleep_for(std::chrono::milliseconds(1500));
Ingam.health = 100;
std::this_thread::sleep_for(std::chrono::milliseconds(1500));
cout << "\r done!                                          " << endl << endl;
} else if (bandage == true) {
Ingam.health += 5;
cout << "\r recovering.  (" << Ingam.health << ")" << flush;
std::this_thread::sleep_for(std::chrono::milliseconds(1500));
Ingam.health += 5;
cout << "\r recovering.. (" << Ingam.health << ")" << flush;
std::this_thread::sleep_for(std::chrono::milliseconds(1500));
Ingam.health += 5;
cout << "\r recovering...(" << Ingam.health << ")" << flush;
std::this_thread::sleep_for(std::chrono::milliseconds(1500));
cout << "\r done!                                          " << endl << endl;
} else {
cout << "You don't have any bandages." << endl << endl;
}
} else if (choose_bt == 3 && behea >= 0) {
cout << "NIGERUNDAYO!!!" << flush << endl;
std::this_thread::sleep_for(std::chrono::milliseconds(250));
cout << "your health: " << Ingam.health << endl << flush;
std::this_thread::sleep_for(std::chrono::milliseconds(250));
 cout << "your stamina: " << Ingam.stamina << endl << flush;
std::this_thread::sleep_for(std::chrono::milliseconds(250));
x = true;
} else {
cout << "not found... choose again" << endl << endl;
}
if (behea <= 0) {
cout << "congratulations!, the bear is die! You have 35 meat!" << endl << endl;
meat += 35;
x = true;
break;
}
uniform_int_distribution<int> bear_hitting (1, 100);
b_hit = bear_hitting(quay);
if (b_hit <= 85) {
cout << "the bear is hit you 30 damage" << endl;
Ingam.health -= 30;
cout << "your health: " << Ingam.health << endl << endl;
    // được xắp xếp lại, hơi nhìn khó chịu.
                         }
                         if ( Ingam.health <= 0) {
                        cout << "you die...";
                        i = false;
                     }
                     }
                     }

                 } 
                 break;

            }
                 case 4: {

                    std::this_thread::sleep_for(std::chrono::milliseconds(2500));
                    cout << "\r find and collecting." << flush;
                    std::this_thread::sleep_for(std::chrono::milliseconds(2500));
                    cout << "\r find and collecting.." << flush;
                    std::this_thread::sleep_for(std::chrono::milliseconds(2500));
                    cout << "\r find and collecting..." << flush;
                    std::this_thread::sleep_for(std::chrono::milliseconds(2500));
                    cout << "\r finded !                   " << endl;
                     

                    uniform_int_distribution <int> loai_trai (1, 100);
                    int kieu_loai = loai_trai(quay);
                    uniform_int_distribution <int> sl (5, 25);
                    int so_trai = sl(quay);

                    if (kieu_loai  >= 1 && kieu_loai <= 50) {
                        cout << "you collect "<< so_trai << " Raspberries";
                        ras_inventor += so_trai;
                    } else if ( kieu_loai > 50 && kieu_loai <= 75) {
                        cout << "you collect "<<so_trai<<"  Mulberries";
                         mul_inventor += so_trai;
                    } else if (kieu_loai > 75 && kieu_loai <= 85) {
                        cout << "you collect " << so_trai << " Muscadine / Fox Grapes";
                         mus_inventor += so_trai;
                    } else if ( kieu_loai > 85 && kieu_loai < 95) {
                        cout << "you collect "<< so_trai << " Mayhaws"; // Táo gai /  táo dai ? :]]]
                         may_inventor += so_trai;
                    } else if (kieu_loai >= 95) {
                        cout << "you collect "<< so_trai << " Lingonberries / Mountain Cranberries";
                         ling_inventor += so_trai;
                    }

                    cout << endl << endl;
                    Ingam.stamina -= 1;
                    break;
             
                 }
                 case 5: {
                    cout << "you have some thing to eat :"<< endl << endl;
                    std::this_thread::sleep_for(std::chrono::milliseconds(900));
                    cout << "1.meat ( +15 hungry , -5 health) " << meat << endl << endl;
                    std::this_thread::sleep_for(std::chrono::milliseconds(900));
                    cout << "2.Lingonberries / Mountain Cranberries (+1 hungry) "<<ling_inventor << endl << endl;
                    std::this_thread::sleep_for(std::chrono::milliseconds(900));
                    cout <<"3.Mayhaws (+2 hungry)"<< may_inventor << endl;
                    std::this_thread::sleep_for(std::chrono::milliseconds(900));
                    cout << "4.Muscadine / Fox Grapes (+ 5 hungry) "<<mus_inventor << endl << endl;
                    std::this_thread::sleep_for(std::chrono::milliseconds(900));
                    cout << "5.Mulberries (+5 hungry, + 1 drink) "<<mul_inventor << endl << endl;
                    std::this_thread::sleep_for(std::chrono::milliseconds(900));
                    cout<<"6.Raspberries (+ 5 hungry + 5 stamina) "<<ras_inventor << endl << endl;
                    std::this_thread::sleep_for(std::chrono::milliseconds(900));
                    cout <<"7.Cooked meat (+ 20 hungry, +10 stamina, + 5 health )"<< cm_inventor << endl << endl;
                    std::this_thread::sleep_for(std::chrono::milliseconds(900));
                    cout <<"8. no " << endl << endl;
                    std::this_thread::sleep_for(std::chrono::milliseconds(900));
                    int choose_eat;
                    std::this_thread::sleep_for(std::chrono::milliseconds(900));
                    cout << "I want: " ;
                    cin >> choose_eat;
                    int tsm;
                    int cmw;
                    cout << endl;

                    switch (choose_eat) {
                        
                        case 1 :{
                            tsm = meat;
                            cout << "how many?: ";
                            cin >> cmw;
                            if (tsm <= 0 || tsm - cmw < 0 ) {
                                cout << " you not have enought it." << endl; 
                            } else if ( tsm > 0 ) {
                                cout << "you eat " << cmw << " meat";
                                meat -= cmw;
                                Ingam.food += 10 * cmw;
                                Ingam.health -= 5 * cmw;
                            }
                            break;
                        }
                        case 2 :{
                            tsm = ling_inventor;
                            cout << "how many?: ";
                            cin >> cmw;
                            if (tsm <= 0 || tsm - cmw < 0 ) {
                                cout << " you not have enought it." << endl; 
                            } else if ( tsm > 0 ) {
                                cout << "you eat " << cmw << " Lingonberries / Mountain Cranberries";
                                ling_inventor -= cmw;
                                Ingam.food += cmw;
                                
                            }
                            break;
                        }
                        case 3 :{
                            tsm = may_inventor;
                            cout << "how many?: ";
                            cin >> cmw;
                            if (tsm <= 0 || tsm - cmw < 0 ) {
                                cout << " you not have enought it." << endl; 
                            } else if ( tsm > 0 ) {
                                cout << "you eat " << cmw << " Mayhaws";
                                 may_inventor -= cmw;
                                 Ingam.food += 2 * cmw;
                                break;
                            }
                            break;
                        }
                        case 4 :{
                            tsm = mus_inventor;
                            cout << "how many?: ";
                            cin >> cmw;
                            if (tsm <= 0 || tsm - cmw < 0 ) {
                                cout << " you not have enought it." << endl; 
                            } else if ( tsm > 0 ) {
                                cout << "you eat " << cmw << " Muscadine / Fox Grapes";
                                mus_inventor -= cmw;
                                Ingam.food += 5 * cmw;
                            }
                            break;
                        }
                        case 5 :{
                            tsm = mul_inventor;
                            cout << "(not 0 or <) how many?: ";
                            cin >> cmw;
                            if (tsm <= 0 || tsm - cmw < 0 ) {
                                cout << " you not have enought it." << endl; 
                            } else if ( tsm > 0 ) {
                                cout << "you eat " << cmw << " Mulberries";
                                mul_inventor -= cmw;
                                Ingam.food += 5 * cmw;
                                Ingam.drink += cmw;
                            }
                            break;
                        }
                        case  6:{
                            tsm = ras_inventor;
                            cout << "how many?: ";
                            cin >> cmw;
                            if (tsm <= 0 || tsm - cmw < 0 ) {
                                cout << " you not have enought it." << endl; 
                            } else if ( tsm > 0 ) {
                                cout << "you eat " << cmw << " Raspberries";
                                ras_inventor -= cmw;
                                Ingam.food += 5 * cmw;
                                Ingam.stamina += 5 * cmw;
                            }
                            break;
                        }
                        case  7:{
                            tsm = cm_inventor;
                            cout << "how many?: ";
                            cin >> cmw;
                            if (tsm <= 0 || tsm - cmw < 0 ) {
                                cout << " you not have enought it." << endl; 
                            } else if ( tsm > 0 ) {
                                cout << "you eat " << cmw << " Cooked meat";
                                cm_inventor -= cmw;
                                Ingam.food += 20 * cmw;
                                Ingam.drink += 10 * cmw;
                                Ingam.health += 5  * cmw;
                            }
                            break;
                        } 
                        case 8 : {
                            cout << endl;
                            break;
                        }

                        cout << endl << "your hungry: "<< Ingam.food << endl << endl;
                        if ( Ingam.food > 100 ) {
                            Ingam.food = 100;
                        }
                        if ( Ingam.drink > 100 ) {
                            Ingam.drink = 100;
                        }
                        if ( Ingam.stamina > 100 ) {
                            Ingam.stamina = 100;
                        }
                        if ( Ingam.health > 100 ) {
                            Ingam.health = 100;
                        }


                        if ( Ingam.health <= 0) {
                        cout << "you die...";
                        i = false;
                     }
                         
                        break;
                    }
                 } // case eat;
                 case 6: {
                    for (bool r = true ; r == true;) {
                        int chs = 0;
                    cout << " You currently have the following water sources to explore: "<< endl << endl;
                    std::this_thread::sleep_for(std::chrono::microseconds(500));
                    cout << "1. a river (+35 drink, but can cause you to have a stomachache -5 health )" << endl << endl;
                    std::this_thread::sleep_for(std::chrono::microseconds(500));
                    cout << "2. Headwater stream on a rocky mountain ( +40 drink , - 15 stamina )" << endl << endl;
                    std::this_thread::sleep_for(std::chrono::microseconds(500));
                    cout << "3. dew collector ( + 5 / machine ), you have: " << water_mc << endl << endl;
                    std::this_thread::sleep_for(std::chrono::microseconds(1500));
                    cout << endl;

                    cout<<"I want: ";
                    cin >> chs;

                    switch (chs) {
                        case 1 : {
                            cout << "\r finding."<< flush;
                            std::this_thread::sleep_for(std::chrono::microseconds(1500));
                            cout << "\r finding.."<< flush;
                            std::this_thread::sleep_for(std::chrono::microseconds(1500));
                            cout << "\r finding..."<< flush;
                            std::this_thread::sleep_for(std::chrono::microseconds(1500));
                            cout << "\r finded!     "<< endl;
                            cout << "you drinked water of the river (water + 35, health - 5)"<< endl << endl;
                            Ingam.drink += 35;
                            Ingam.health -= 5;
                            
                            break;

                        }
                        case 2 : {
                            uniform_int_distribution<int> roll(1, 3);
                                int spin = roll(quay);
                            if ( Ingam.stamina >= 15) {
                                if ( spin == 1) {
                                    cout << "\r finding."<< flush;
                                    std::this_thread::sleep_for(std::chrono::microseconds(1500));
                            cout << "\r finding.."<< flush;
                            std::this_thread::sleep_for(std::chrono::microseconds(1500));
                            cout << "\r finding..."<< flush;
                            std::this_thread::sleep_for(std::chrono::microseconds(1500));
                            cout << "\r finded!     "<< endl;
                            std::this_thread::sleep_for(std::chrono::microseconds(1500));
                                    cout << "you drinked water of headwater stream on a rocky mountain (water + 40, stamina - 15), it cool!"<< endl << endl;
                                } else if (spin == 2) {
                                    cout <<  "you drinked water of headwater stream on a rocky mountain (water + 40, stamina - 15), very natural"<< endl << endl;
                                } else if (spin == 3) {
                                    cout <<  "you drinked water of headwater stream on a rocky mountain (water + 40, stamina - 15), truly well-deserved"<< endl << endl;
                                }

                                Ingam.drink +=  40;
                                Ingam .stamina -= 15;
                                r = false;

                            } else {
                                cout << "you not have enought stamina..." << endl << endl;
                                cout << endl << endl;
                                
                            }
                            break;
                        }
                        case 3 : {
                            if ( water_mc > 0 ) {
                                cout << "\r drinking."<< flush;
                                std::this_thread::sleep_for(std::chrono::microseconds(1500));
                            cout << "\r drinking.."<< flush;
                            std::this_thread::sleep_for(std::chrono::microseconds(1500));
                            cout << "\r drinking..."<< endl;
                            std::this_thread::sleep_for(std::chrono::microseconds(1500));
                                cout << "you drink "<< water_mc <<" dew collector ( "<< water_mc*5 << " water )" << endl << endl;
                                Ingam.drink += water_mc * 5;
                                r = false;
                            } else {
                                cout <<  " you not have any machine..."<< endl << endl;
                            }
                            
                            break;
                        }
                     }
                     if ( Ingam.health <= 0) {
                        cout << "you die...";
                        i = false;
                     }
                     
                    }
                    break;
                 } // case 6
                 case 7 : {
                    cout << "your metrics: "<< endl;
                    cout << "health: "<< Ingam.health << endl;
                    std::this_thread::sleep_for(std::chrono::microseconds(900));
                    cout << "food: "<< Ingam.food<< endl;
                    std::this_thread::sleep_for(std::chrono::microseconds(900));
                    cout << "drink: "<< Ingam.drink<< endl;
                    std::this_thread::sleep_for(std::chrono::microseconds(900));
                    cout << "stamina: "<< Ingam.stamina<< endl;
                    cout << endl;
                    break;
                 }
                 case 8: {
                    cout << "your inventory:";
                    cout << "fruit / food :"<<endl;
                    cout << "Lingonberries / Mountain Cranberries: "<< ling_inventor<< endl;
                    std::this_thread::sleep_for(std::chrono::microseconds(900));
                    cout << "Mayhaws: "<< may_inventor<< endl;
                    std::this_thread::sleep_for(std::chrono::microseconds(900));
                    cout << "Muscadine: "<< mus_inventor<< endl;
                    std::this_thread::sleep_for(std::chrono::microseconds(900));
                    cout << "Mulberries: "<< mul_inventor<< endl;
                    std::this_thread::sleep_for(std::chrono::microseconds(900));
                    cout << "Raspberries: "<< ras_inventor<< endl;
                    std::this_thread::sleep_for(std::chrono::microseconds(900));
                    cout << "Meat: "<< meat<< endl;
                    std::this_thread::sleep_for(std::chrono::microseconds(900));
                    cout << "Cooked meat: "<< cm_inventor<< endl;
                    std::this_thread::sleep_for(std::chrono::microseconds(900));

                    cout<< " ore / resources: "<< endl;
                    cout << "Stone: "<< stone_inventor << endl;
                    std::this_thread::sleep_for(std::chrono::microseconds(900));
                    cout << "Copper: "<< copper_inventor<< endl;
                    std::this_thread::sleep_for(std::chrono::microseconds(900));
                    cout << "Bauxite: "<< bauxite_inventor << endl;
                    std::this_thread::sleep_for(std::chrono::microseconds(900));
                    cout << "Coal: "<< coal_inventor<< endl;
                    std::this_thread::sleep_for(std::chrono::microseconds(900));
                    cout << "Iron: "<< iron_inventor << endl;
                    std::this_thread::sleep_for(std::chrono::microseconds(900));
                    cout << "Graphite: "<< graphite_inventor << endl;
                    std::this_thread::sleep_for(std::chrono::microseconds(900));
                    cout << "KNO3: "<< kno_inventor  << endl;
                    std::this_thread::sleep_for(std::chrono::microseconds(900));
                    cout << "Diamond "<< diamond_inventor << endl;   //crazy diamond!
                    std::this_thread::sleep_for(std::chrono::microseconds(900));
                    cout << "Wood: "<< go_inventor << endl;

                    cout << " durability / weapon / item:" << endl;
                    cout << boolalpha ;
                    cout << "sword "<< sword << endl;
                    std::this_thread::sleep_for(std::chrono::microseconds(900));
                    cout << "Gun "<< gun << endl;
                    std::this_thread::sleep_for(std::chrono::microseconds(900));
                    cout << "Pickaxe "<< pickaxe << endl;
                    std::this_thread::sleep_for(std::chrono::microseconds(900));
                    cout << "axe "<< axe << endl;
                    std::this_thread::sleep_for(std::chrono::microseconds(900));
                    cout << "bandage: "<< band_inventor << endl;
                    std::this_thread::sleep_for(std::chrono::microseconds(900));
                    cout << "Ammor "<< ammor_inventor << endl;
                    std::this_thread::sleep_for(std::chrono::microseconds(900));
                    cout << "sword durability: "<< sword_dura << endl;
                    std::this_thread::sleep_for(std::chrono::microseconds(900));
                    cout << "gun durability: "<< gun_dura << endl;
                    

                 }

             } // switch
         } // for loop
}
// long long ling_inventor  long long may_inventor  long long mus_inventor  long long mul_inventor  long long ras_inventor   meat  cm_inventor
// Ingam.health  Ingam.stamina  Ingam.food Ingam.drink 
// bauxite_inventor kno_inventor diamond_inventor graphite_inventor coal_inventor stone_inventor iron_inventor go_inventor copper_inventor 
// ammor_inventor  sword_dura gun_dura  sword  gun  bandage  pickaxe  axe  w_hit  b_hit choose so quay so_luong go so_quang so_dao may_man may chon_quai battle bhea whea behea x choose_bt hit hitting bear_hitting
// Text-based Adventure
// joke: my friend (Thang) love furry C:
return 0;
}
