#include <iostream>
#include "Vehicles.h"
#include "AirVehicles.h"
#include "GroundVehicles.h"
#include "Camel.h"
#include "SpeedCamel.h"
#include "Centaur.h"
#include "AllTerrainBoots.h"
#include "MagicCarpet.h"
#include "Eagle.h"
#include "Broom.h"
#include "TypeRace.h"
#include "GroundRace.h"
#include "AirRace.h"
#include "MixedRace.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    
    int Typerace = 0;
    int lenght_distance = 0;
    int one=1;
    int CHoiceOfTransport = 0;
    
    cout << "Добро пожаловать в гоночный симулятор!" << endl;
    cout << "1. Гонка для наземного транспорта" << endl;
    cout << "2. Гонка для воздушного транспорта" << endl;
    cout << "3. Гонка для наземного и воздушного транспорта" << endl;
    cout << "Виберите тип гонки: ";
    cin >> Typerace;
    TypeRace type(Typerace);
    cout << "Укажите длину дистанции (должна быть положительна): ";
    cin >> lenght_distance;
    cout << "Должно быть зарегистирировано хотя бы 2 ТС\n1. Зарегистирировать транспотр\nВыберите действие:";
    cin >> one;
    do {
        if (Typerace == 1) { cout << "Гонка для наземного транспорта. Расстояние: " << lenght_distance << endl; }
        else if (Typerace == 2) { cout << "Гонка для воздушного транспорта. Расстояние: " << lenght_distance << endl; }
        else if (Typerace == 3) { cout << "Гонка для наземного и воздушного транспорта. Расстояние: " << lenght_distance << endl; }
        cout << "1. Ботинки-вездеходы\n";
        cout << "2. Метла\n";
        cout << "3. Верблюд \n";
        cout << "4. Кентавр \n";
        cout << "5. Орёл\n";
        cout << "6. Верблюд-быстроход\n";
        cout << "7. Ковер-самолет\n";
        cout << "0. Закончить регистрацию\nВыберите транспорт или 0 для окончания процесса регистрации:";
        cin >> CHoiceOfTransport;
        if(type.Transfarmation(CHoiceOfTransport)==0){
            cout << "Попытка зарегистирировать неправильный тип ТС!\n";
        }
        
    } while (CHoiceOfTransport != 0);
        Vehicles velik;
        GroundVehicles gelik(10, 30, 5, 8, 8);
        Camel camel(1, 2, 3, 4, 5);
        SpeedCamel S_c(1, 2, 3, 4, 5);
        Centaur centaur(1, 2, 3, 4, 5);
        AllTerrainBoots AT_b(1, 2, 3, 4, 5);

        AirVehicles A_v(lenght_distance, 10, 3);
        MagicCarpet M_c(lenght_distance, 10, 10);
        Eagle eagle(lenght_distance, 8, 6);
        Broom broom(lenght_distance, 20, 4);
        //cout << gelik.ResultRace(masofa) << endl;
        cout << camel.ResultRace(lenght_distance) << endl;
        cout << S_c.ResultRace(lenght_distance) << endl;
        cout << centaur.ResultRace(lenght_distance) << endl;
        cout << AT_b.ResultRace(lenght_distance) << endl;
        //cout << A_v.ResultRace(masofa) << endl;
        cout << M_c.ResultRace(lenght_distance) << endl;
        cout << eagle.ResultRace(lenght_distance) << endl;
        cout << broom.ResultRace(lenght_distance) << endl;
    return 0;

}