#pragma once
#include "Hotel.h"
#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include<algorithm>
#include <numeric>

using namespace std;

int size1 = 0;
vector<Hotel>Hotel_vec;

void add_hotel();
void Add_Hotelss(string name[], string country[], string location[], bool gym, bool Pool, int no_of_stars[], string free_meals[], int rate[], int roomId[], bool tvroom, bool wifi, bool statsr, int day[], int month[]);
void Display_Hotels(const vector<Hotel>&);
void Update_Hotel();
void filter();
void search_Name();
void deleteHotel();
void search_time();
void search_rate();
void All_search();
void search_with_qury();
static int choice = 0;
static int back_option = 1;
bool Back_Option(int back_option);
void Feed_back();
int Login();
void user();
void Admin();

int main()
{
    
    int option;

    do {
        back_option = 1;     //To Enter the (Do --> While) LOOP

        cout << ("\n\t\t"
            "\t\t\t   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\t\t"
            "\t\t\t @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\t\t"
            "\t\t\t@@@@ -------> WELCOME TO : <------- @@@@\n\t\t"
            "\t\t\t@@@@@@@@@@@@-> TrivaGO <-@@@@@@@@@@@@@@\n\t\t"
            "\t\t\t @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\t\t"
            "\t\t\t   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n");
 
     cout << " \t \t if you are admin press 1 or client press 2 or 0 for exit" << endl;
        cin >> option;
        switch (option) {
        case 1:     
            system("cls");
           Admin(); 

            break;
           

        case 2:   
            system("cls");

            user();
            break;
            
        case 0:     //EXIT
            system("cls");
            cout << ("\t\t*-> Program  Ended <-*\n\n"
                "\t\t    -> Thanks<-\n\n\n\n\n\n\n\n\n");
            back_option = 0;
            //////////////////////////////////////////////////
        } 

    }while (back_option != 0);
    

}//////////////////////////////////////////////--> End >< Of >< Program <--//////////////////////////////////////////////

int Login() {
    int Id;
    string Password;

    {//Input Part
        cout << ("\t\t-> Please Login First <-\n\t\t***\n\n");

        cout << ("\n\n\tEnter User ID: ");
        cin >> Id;

        cout << ("\n\n\tEnter Password: ");
        cin >> Password;
    }

    {//Check Part
        if (Password == "Admin" || Password == "admin" && Id == 123) {   
 
            system("cls");
      
            return 1;
        }
        else if (Password == "User" || Password == "user" && Id == 123) { 
           
            system("cls");
            
            return 2;
        }
        else {
            //Invalid and try again
            system("cls");
            cout << ("\n\n\tInvalid Login\n\n");
        }
    }
    return 0;
}
bool Back_Option(int back_option) {
    cout << ("\n\n\n****\n"
        "\n\t° --> To Return Menu,, Enter [0] --> ");
    cin >> back_option;

    if (back_option == 0) {
        return true;     //Back Successed,, Returning to Menu
    }

    while (back_option != 0) { //Invalid input & Try again
        cout << ("\n\t\tInvalid "
            "\n\t° --> To Return Menu,, Enter [0] --> ");

        cin >> back_option;

        if (back_option == 0) {
            return true;
        }
    }
    system("cls");
    return false;
}
//void Add_Hotelss(string name[], string country[], string location[], bool gym, bool Pool, int no_of_stars[], string free_meals[], int rate[], int roomId[], bool tvroom, bool wifi, bool statsr, int day[], int month[]) {
//    Hotel h;
//    int num;
//    bool g, pol;
//    int str, rte;
//    //vector<Hotel> ::iterator it = Hotel_vec.begin();
//
//    cout << "Enter number of Hotels u want add : " << endl;
//    cin >> num;
//    for (int i = 0; i < num; i++) {
//
//        cout << "Enter Name of Hotel num of : " << (i + 1) << endl;
//        cin >> name[i];
//
//        h.name = name[i];
//        cout << "Enter Country of Hotel num of : " << (i + 1) << endl;
//        cin >> country[i];
//        h.country = country[i];
//        cout << "Enter Location of Hotel num of : " << (i + 1) << endl;
//        cin >> location[i];
//        h.location = location[i];
//        cout << "Enter 1 if you add gym or 0 if not : " << (i + 1) << endl;
//        cin >> g; h.setGym(g);
//
//        cout << "Enter 1 if you add Pool or 0 if not : " << (i + 1) << endl;
//        cin >> pol; h.setPool(pol);
//        cout << "Enter Number of Stars : " << (i + 1) << endl;
//        cin >> str; h.setNo_stars(str);
//        cout << "Enter Free Meals : " << (i + 1) << endl;
//        cin >> free_meals[i];
//        h.free_meals = free_meals[i];
//        cout << "Enter Rate of Hotel num of : " << (i + 1) << endl;
//        cin >> rte; h.setRate(rte);
//        cout << " what number of rooms in this hotel \n" << endl;
//        int number_ofRooms;
//        cin >> number_ofRooms;
//        for (int i = 0; i < number_ofRooms; i++) {
//            cout << "enter the id of the room number : " << " " << (i + 1) << endl;
//
//            cin >> roomId[i];
//            h.room.id = roomId[i];
//
//            cout << "enter 1 if u want this room singl or 0 for double : " << "  " << (i + 1) << endl;
//            cin >> statsr;
//            h.room.status = statsr;
//            cout << "enter 1 if u want tv in room or 0 if not : " << "  " << (i + 1) << endl;
//            cin >> tvroom;
//            h.room.tv = tvroom;
//            cout << "enter 1 if u want wifi in room or 0 if not : " << "  " << (i + 1) << endl;
//            cin >> wifi;
//            h.room.wifi = wifi;
//            cout << "enter day of room number : " << "  " << (i + 1) << endl;
//            cin >> day[i];
//            h.room.day = day[i];
//            cout << "enter month of room number : " << "  " << (i + 1) << endl;
//            cin >> month[i];
//            h.room.month = month[i];
//
//        }
//        h.no_of_rooms = number_ofRooms;
//        Hotel_vec.insert(Hotel_vec.begin() + i, h);
//        size1++;
//    }
//
//}
//////////////////////////////////////////////////////////////////////////////////
// *******************     **********************          * *********************
/////////////////////////////////////////////////////////////////////////////////
//

void Display_Hotels(const vector<Hotel>& v_hotel) {

    unsigned int size = v_hotel.size();

    for (unsigned int i = 0; i < size; i++) {
        cout << "name of hotel num :" << (i + 1) << " : " << v_hotel[i].name << endl;
        cout << "contry of hotel num :" << (i + 1) << " : " << v_hotel[i].country << endl;
        cout << "name of hotel num :" << (i + 1) << " : " << v_hotel[i].location << endl;
        cout << "name of hotel num :" << (i + 1) << " : " << v_hotel[i].Gym() << endl;
        cout << "name of hotel num :" << (i + 1) << " : " << v_hotel[i].Getpool() << endl;
        cout << "num of stars of hotel num :" << (i + 1) << " : " << v_hotel[i].no_Stars() << endl;
        cout << "free meals of hotel num :" << (i + 1) << " : " << v_hotel[i].free_meals << endl;
        cout << "rate of hotel num :" << (i + 1) << " : " << v_hotel[i].GetRate() << endl;
        cout << "number in room of hotel num :" << (i + 1) << " : " << v_hotel[i].no_of_rooms << endl;
        for (int j = 0; j < v_hotel[i].no_of_rooms; j++) {
            cout << "the room of num has :" << (j + 1) << " \n WIFI :  " << v_hotel[i].room.wifi << "\n T.V: " << v_hotel[i].room.tv << " \n  status 1 for single 0 for double : " << v_hotel[i].room.status << endl;
            cout << "the date of room num :" << (j + 1) << "  :  " << v_hotel[i].room.day << " / " << v_hotel[i].room.month << endl;
        }
       
        cout << "feed back of guests \n";
        cout << v_hotel[i].comments;
        cout << endl;
        cout << endl;

    }



}
/////////////////////////////////////////////*************************************************
//////////////////////////////////////////****************************************
void Update_Hotel() {
    cout << " Enter Hotel name u want to update " << endl;

    string hotel_name;
    bool gy, pol;
    int str;
    cin >> hotel_name;
    std::vector<Hotel>::iterator it;

    for (it = Hotel_vec.begin(); it != Hotel_vec.end(); ++it) {
        if (it->name == hotel_name) {
            cout << "the new Name of Hotel n : " << hotel_name << endl;
            cin >> it->name;
            cout << " Country of the Hotel num of : " << "  " << it->name << endl;
            cin >> it->country;
            cout << " Location of the Hotel : " << it->name << endl;
            cin >> it->location;
            cout << "Enter 1 if there Available GYM in the Hotel Enter 0 if not  : " << it->name << endl;
            cin >> gy; it->setGym(gy);
            cout << "Enter if there Available Pool in the Hotel :  " << it->name << endl;
            cin >> pol; it->setPool(pol);
            cout << "Enter Rate of the Hotel :  " << it->name << endl;
            cin >> str; it->setNo_stars(str);
            cout << "Enter free Meal/s of hotel n: " << it->name << endl;
            cin >> it->free_meals;
            for (unsigned int i = 0; i < it->no_of_rooms; i++) {
                cout << "enter the id of the room number : " << " " << (i + 1) << endl;

                cin >> it->room.id;
                cout << "enter 1 if u want this room singl or 0 for double : " << "  " << (i + 1) << endl;
                cin >>it->room.status;
               
                cout << "enter 1 if u want tv in room or 0 if not : " << "  " << (i + 1) << endl;
                cin >> it->room.tv;
              
                cout << "enter 1 if u want wifi in room or 0 if not : " << "  " << (i + 1) << endl;
                cin >> it->room.wifi;
               
                cout << "enter day of room number : " << "  " << (i + 1) << endl;
                cin >>it->room.day;
            
                cout << "enter month of room number : " << "  " << (i + 1) << endl;
                cin >> it->room.month;
            }
            cout << "Sucessfully " << endl;
        }


    }

}
//////////////////////////////////////////****************************///////////////////////////
//////////////////////////////////////////********************************///////////////////////////

void filter() {
    int choose, ch_rate, ch_stars;
    cout << "what do want to fiter with" <<
        endl << "enter 1 to filter with Rate or 2 to filter with no of stars" << endl;
    cin >> choose;
    std::vector<Hotel>::iterator it;
    switch (choose) {
    case 1:
        cout << "what rate do want" << endl;
        cin >> ch_rate;
        for (it = Hotel_vec.begin(); it != Hotel_vec.end(); ++it) {
            if (it->GetRate() >= ch_rate) {
                cout << "name of hotel : " << "  " << it->name << endl;
                cout << "the contry of this hotel in rate : " << "  " << it->country << endl;
                cout << "location of this hotel in rate: " << "  " << it->location << endl;
                cout << "gym in this hotel in rate : " << "  " << it->Gym() << endl;
                cout << "Pool in this hotel in rate : " << "  " << it->Getpool() << endl;
                cout << "number of stars of this hotel in rate: " << "  " << it->no_Stars() << endl;
                cout << "free meals of hotel in rate : " << "  " << it->free_meals << endl;
                cout << "the number of rooms in hotel  name: " << "  " << it->no_of_rooms << endl;
                for (int i = 0; i < it->no_of_rooms; i++) {
        cout << "the room of num has :" << (i + 1) << " \n WIFI :  " << it->room.wifi << "\n T.V: " <<it->room.tv << " \n  status 1 for single 0 for double : " << it->room.status << endl;
                    cout << "the date of room num :" << (i + 1) << "  :  " << it->room.day << " / " <<it->room.month << endl;

               }
                    
                
                cout << endl;
                cout << endl;
                break;
            }

        }
        break;

    case 2:
        cout << "what no of stars do want" << endl;
        cin >> ch_stars;

        for (it = Hotel_vec.begin(); it != Hotel_vec.end(); ++it) {
            if (it->no_Stars() == ch_stars) {
                cout << "name of hotel : " << "  " << it->name << endl;
                cout << "the contry of this hotel in rate : " << "  " << it->country << endl;
                cout << "location of this hotel in rate: " << "  " << it->location << endl;
                cout << "gym in this hotel in rate : " << "  " << it->Gym() << endl;
                cout << "Pool in this hotel in rate : " << "  " << it->Getpool() << endl;
                cout << "number of stars of this hotel in rate: " << "  " << it->no_Stars() << endl;
                cout << "free meals of hotel in rate : " << "  " << it->free_meals << endl;
                cout << "the number of rooms in hotel  name: " << "  " << it->no_of_rooms << endl;
                for (int i = 0; i < it->no_of_rooms; i++) {
                    cout << "the room of num has :" << (i + 1) << " \n WIFI :  " << it->room.wifi << "\n T.V: " << it->room.tv << " \n  status 1 for single 0 for double : " << it->room.status << endl;
                    cout << "the date of room num :" << (i + 1) << "  :  " << it->room.day << " / " << it->room.month << endl;

                }

                cout << endl;
                cout << endl;
                break;
            }
        }

        break;
    default:
        cout << "wrong answer" << endl;
        break;
    }



}
///////////////////////////////////////////
void search_Name() {
    string choice;
    cout << "search for hotel what you want " << endl;
    cin >> choice;
    unsigned int size = Hotel_vec.size();
    std::vector<Hotel>::iterator it;


    for (it = Hotel_vec.begin(); it != Hotel_vec.end(); ++it) {

        if (it->name == choice) {

            cout << "contry of hotel  : " << "  " << choice << "  " << it->country << endl;
            cout << "location of hotel  : " << "  " << choice << "  " << it->location << endl;
            cout << "gym of hotel  : " << "  " << choice << "  " << it->Gym() << endl;
            cout << "Pool of hotel  : " << "  " << choice << "  " << it->Getpool() << endl;
            cout << "Number of stars of hotel name : " << "  " << choice << "  " << it->no_Stars() << endl;
            cout << "free meals of hotel name : " << "  " << choice << "  " << it->free_meals << endl;
            cout << "rate of hotel  name: " << "  " << choice << "  " << it->GetRate() << endl;
            cout << "the number of rooms in hotel  name: " << "  " << choice << "  " << it->no_of_rooms << endl;
            for (int i = 0; i < it->no_of_rooms; i++) {
                cout << "the room of num has :" << (i + 1) << " \n WIFI :  " << it->room.wifi << "\n T.V: " << it->room.tv << " \n  status 1 for single 0 for double : " << it->room.status << endl;
                cout << "the date of room num :" << (i + 1) << "  :  " << it->room.day << " / " << it->room.month << endl;

            }

            cout << endl;
            cout << endl;
            break;

        }
        else {
            cout << "not found" << endl;
            break;
        }

    }
}
///////////////////////////////////////////////////////////////////
void search_time() {
    string choice;
    cout << "search for the name you want " << endl;
    cin >> choice;
    int day, month, * sub, f;

    //unsigned int size = v_hotel.size();
    std::vector<Hotel>::iterator it;


    for (it = Hotel_vec.begin(); it != Hotel_vec.end(); ++it) {


        if (it->name == choice) {
            for (unsigned int i = 0; i < it->no_of_rooms; i++) {
                cout << "search for the day you want " << endl;
                cin >> day;
                cout << "search for the month you want " << endl;
                cin >> month;

                if (it->room.month > month) {
                    cout << "room is not avaliable" << endl;

                }
                else if (it->room.month < month) {

                    cout << "romm with this date is avaliable" << it->room.month << "/" << it->room.day << endl;

                }
                else
                {
                    if (it->room.day > day) {
                        cout << "room is not avaliable" << endl;

                    }
                    else {
                        cout << "room with this date is avaliable" << it->room.month << "/" << it->room.day << endl;

                    }
                    break;
                }




            }
        }
        else {
            cout << "not found" << endl;
            break;
        }

    }
}
//////////////////////////////////////////////////////////////////////////
void search_rate() {
    int choice;
    cout << "search for rate what you want " << endl;
    cin >> choice;
    //unsigned int size = Hotel_vec.size();
    std::vector<Hotel>::iterator it;


    for (it = Hotel_vec.begin(); it != Hotel_vec.end(); ++it) {

        if (it->GetRate() == choice) {
            cout << "the name of hotel in rate : " << "  " << choice << it->name << endl;
            cout << "contry of hotel  : " << "  " << choice << it->country << endl;
            cout << "location of hotel  : " << "  " << choice << it->location << endl;
            cout << "gym of hotel  : " << "  " << choice << it->Gym() << endl;
            cout << "Pool of hotel  : " << "  " << choice << it->Getpool() << endl;
            cout << "Number of stars of hotel name : " << "  " << choice << it->no_Stars() << endl;
            cout << "free meals of hotel name : " << "  " << choice << it->free_meals << endl;
            cout << "the number of rooms in hotel  name: " << "  " << choice << it->no_of_rooms << endl;
            for (int i = 0; i < it->no_of_rooms; i++) {
                cout << "the room of num has :" << (i + 1) << " \n WIFI :  " << it->room.wifi << "\n T.V: " << it->room.tv << " \n  status 1 for single 0 for double : " << it->room.status << endl;
                cout << "the date of room num :" << (i + 1) << "  :  " << it->room.day << " / " << it->room.month << endl;

            }

            cout << endl;
            cout << endl;
            break;

        }
        else {
            cout << "not found" << endl;
            break;
        }

    }
}
/////////////////////////////////////////////////////////////////////////////
void search_with_qury() {
    bool gym, pool, wifi;
    std::vector<Hotel>::iterator it;
    cout << " if you want gym press 1 or 0 for not  " << endl;
    cin >> gym;
    if (gym > 1 || gym < 0) {
        cout << "please enter avalid number";

    }

    cout << "if you want pool press 1 or 0 for not" << endl;
    cin >> pool;
    if (pool > 1 || pool < 0) {
        cout << "please enter avalid number";

    }
    cout << "if you want wifi press 1 or 0 for not" << endl;
    cin >> wifi;
    if (wifi > 1 || wifi < 0) {
        cout << "please enter avalid number";


    }
    for (it = Hotel_vec.begin(); it != Hotel_vec.end(); ++it) {

        if (it->Gym() == gym && it->Getpool() == pool && it->room.wifi == wifi) {
            cout << "the name of hotel  : " << "  " << it->name << endl;
            cout << "contry of hotel  : " << "  " << it->country << endl;
            cout << "location of hotel  : " << "  " << it->location << endl;
            cout << "gym of hotel  : " << "  " << it->Gym() << endl;
            cout << "Pool of hotel  : " << "  " << it->Getpool() << endl;
            cout << "Number of stars of hotel  " << "  " << it->no_Stars() << endl;
            cout << "free meals of hotel  " << "  " << it->free_meals << endl;
            cout << "the number of rooms in hotel  " << "  " << it->no_of_rooms << endl;
            for (int i = 0; i < it->no_of_rooms; i++) {
                cout << "the room of num has :" << (i + 1) << " \n WIFI :  " << it->room.wifi << "\n T.V: " << it->room.tv << " \n  status 1 for single 0 for double : " << it->room.status << endl;
                cout << "the date of room num :" << (i + 1) << "  :  " << it->room.day << " / " << it->room.month << endl;

            }

            cout << endl;
            cout << endl;
        }
        else if (it->Gym() == gym || it->Getpool() == pool || it->room.wifi == wifi) {
            cout << "the name of hotel  : " << "  " << it->name << endl;
            cout << "contry of hotel  : " << "  " << it->country << endl;
            cout << "location of hotel  : " << "  " << it->location << endl;
            cout << "gym of hotel  : " << "  " << it->Gym() << endl;
            cout << "Pool of hotel  : " << "  " << it->Getpool() << endl;
            cout << "Number of stars of hotel name : " << "  " << it->no_Stars() << endl;
            cout << "free meals of hotel name : " << "  " << it->free_meals << endl;
            cout << "the number of rooms in hotel  name: " << "  " << it->no_of_rooms << endl;
            for (int i = 0; i < it->no_of_rooms; i++) {
                cout << "the room of num has :" << (i + 1) << " \n WIFI :  " << it->room.wifi << "\n T.V: " << it->room.tv << " \n  status 1 for single 0 for double : " << it->room.status << endl;
                cout << "the date of room num :" << (i + 1) << "  :  " << it->room.day << " / " << it->room.month << endl;

            }


            cout << endl;
            cout << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }
}
/////////////////////////////////////////////
void deleteHotel() {
    string getname;
    cout << " Enter Hotel name u want to delete " << endl;
    cin >> getname;
    //std::vector<Hotel>::iterator HotelIT;

    for (unsigned int i = 0; i < Hotel_vec.size(); i++) {
        if (Hotel_vec[i].name == getname) {
            Hotel_vec.erase(Hotel_vec.begin() + i);
            cout << "successfully deleted" << endl;
            break;

        }


    }


}
///////////////////////////////////////////////////////////////////////////////////////////////////
void All_search() {
    cout << "\t welcome in trivago\t" << endl;
    cout << "\t what do want to search for \t" << endl;
    cout << "\t if you want to search with name of specific hotel press 1 \t \n, or time press 2 \t \n, or rate press 3 \t \n,or specific qury press 4 \t \n" << endl;
    int search;
    cin >> search;

    switch (search) {
    case 1: {
        search_Name();
        break;
    }

    case 2: {
        search_time();
        break;
    }

    case 3: {
        search_rate();
        break;
    }
    case 4: {
        search_with_qury();
        break;
    }
    default:
        cout << "wrong answer" << endl;
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////////
void Feed_back() {
	cout << "if want to make a comment \n";
    std::vector<Hotel>::iterator it;
	string choose;
    cout << " for any hotel do want to give your feed back \n";
    cin >> choose;
    for (it = Hotel_vec.begin(); it != Hotel_vec.end(); ++it) {
if (it->name == choose) {

		cout << "enter your comment \n";
        cin >> it->comments;
        
	
    }
   

    }


}

////////////////////////////////////////////////////////////////////////////////////////////////////

void Admin() {
    string name_h[20];
    string country_h[20];
    string location_h[20];
    bool gym_h = 0;
    bool Pool_h = 0;
    int no_of_stars_h[20];
    string free_meals_h[20];
    int rate_h[20];
    int u = 0;
    int roomid[20];
    bool wifi_r = 0;
    bool tv_r = 0;
    bool status_r = 0;
    int day[20], moth[20];
    int choice;
    if (Login() == 1) {
     //////////////////////////////////////////////////--> Main >< Menu <--//////////////////////////////////////////////////
    do {
        back_option = 1;     //To Enter the (Do --> While) LOOP

        cout << ("\n\t\t"
            "\t\t\t   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\t\t"
            "\t\t\t @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\t\t"
            "\t\t\t@@@@ -------> WELCOME TO : <------- @@@@\n\t\t"
            "\t\t\t@@@@@@@@@@@@-> TrivaGO <-@@@@@@@@@@@@@@\n\t\t"
            "\t\t\t @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\t\t"
            "\t\t\t   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n");

        ////////////////////--> Options <--////////////////////
        cout << "\n"
            "\t° Enter >-[1]-> to:-> Add Hotels\t\t\t"
            "\t° Enter >-[2]-> to:-> Update Hotel/s Info.\n\n"
            "\t° Enter >-[3]-> to:-> Filter Hotels With Rate Or NO. of Stars\t"
            "° Enter >-[4]-> to:-> Delete Hotel/s\n\n"
            "\t° Enter >-[5]-> to:->Search For What you want/\t"
            "\t° Enter >-[6]-> to:-> Display Hotels \n\n"
            "\t° Enter >-[0]-> to:-> logout \n"
            "\n\n\t\t\t\t\t****\n\n"
            "\t° -> Your Choice is:-> ";
        cin >> choice;
    
          
            switch (choice) {
            case 1:     //Add Hotels
                system("cls");

               /* Add_Hotelss(name_h, country_h, location_h, gym_h, Pool_h, no_of_stars_h, free_meals_h, rate_h, roomid, tv_r, wifi_r, status_r, day, moth);*/
                add_hotel();

                Back_Option(back_option);     //Returns to Menu
                continue;
                //////////////////////////////////////////////////

            case 2:     //Update Hotel/s Info.
                system("cls");


                Update_Hotel();


                Back_Option(back_option);
                continue;
                //////////////////////////////////////////////////

            case 3:     //Filter Hotels With Rate Or NO. of Stars
                system("cls");

                filter();



                Back_Option(back_option);
                continue;
                //////////////////////////////////////////////////

            case 4:     //Delete Hotel/s
                system("cls");


                deleteHotel();



                Back_Option(back_option);
                continue;
                //////////////////////////////////////////////////

            case 5:     //Search For Hotels In Specific Time
                system("cls");

                All_search();



                Back_Option(back_option);
                continue;
                //////////////////////////////////////////////////

            case 6:     //Display Hotels
                system("cls");

                cout << ("\n\t-> Hotels will be Printed Now : ") << endl;
                Display_Hotels(Hotel_vec);



                Back_Option(back_option);
                continue;
                //////////////////////////////////////////////////

           

            case 0:     //EXIT
                system("cls");
                cout << ("\t\t*-> Program  Ended <-*\n\n"
                    "\t\t    -> Thanks<-\n\n\n\n\n\n\n\n\n");
                user();
                back_option = 0;
                //////////////////////////////////////////////////
            }
        

    } while (back_option != 0);     //LOOPs --> During Back_fn is true
}

}
void user() {
  
    int choice;
    if (Login() == 2) {
        //////////////////////////////////////////////////--> Main >< Menu <--//////////////////////////////////////////////////
        do {
            back_option = 1;     //To Enter the (Do --> While) LOOP

            cout << ("\n\t\t"
                "\t\t\t   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\t\t"
                "\t\t\t @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\t\t"
                "\t\t\t@@@@ -------> WELCOME TO : <------- @@@@\n\t\t"
                "\t\t\t@@@@@@@@@@@@-> TrivaGO <-@@@@@@@@@@@@@@\n\t\t"
                "\t\t\t @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\t\t"
                "\t\t\t   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n");

            ////////////////////--> Options <--////////////////////
            cout << "\n"
                "\t° Enter >-[1]-> to:-> Filter Hotels With Rate Or NO. of Stars\t \n \n"
                "\t° Enter >-[2]-> to:->Search For What you want/\t"
                "\t° Enter >-[3]-> to:-> Feedback\t"
                "\t° Enter >-[0]-> to:-> EXIT\n"
                "\n\n\t\t\t\t\t****\n\n"
                "\t° -> Your Choice is:-> ";
            cin >> choice;


            switch (choice) {
            case 1:     
                system("cls");
                filter();
                Back_Option(back_option);     //Returns to Menu
                continue;
                //////////////////////////////////////////////////

            case 2:    
                system("cls");
                All_search();
                Back_Option(back_option);
                continue;
                //////////////////////////////////////////////////

            case 3:     //Filter Hotels With Rate Or NO. of Stars
                system("cls");
                Feed_back();
                Back_Option(back_option);
                continue;
                //////////////////////////////////////////////////

            case 0:     //EXIT
                system("cls");
                cout << ("\t\t*-> Program  Ended <-*\n\n"
                    "\t\t    -> Thanks<-\n\n\n\n\n\n\n\n\n");
                Admin();
                back_option = 0;
                //////////////////////////////////////////////////
            }


        } while (back_option != 0);     //LOOPs --> During Back_fn is true
    }
}
void add_hotel() {

    Hotel h;
    int num;
    bool gym, pol;
    int str, rte;
    //vector<Hotel> ::iterator it = Hotel_vec.begin();

    cout << "Enter number of Hotels u want add : " << endl;
    cin >> num;
    for (int i = 0; i < num; i++) {

        cout << "Enter Name of Hotel num of : " << (i + 1) << endl;
        cin >> h.name;
        
        cout << "Enter Country of Hotel num of : " << (i + 1) << endl;
        cin >> h.country;
        cout << "Enter Location of Hotel num of : " << (i + 1) << endl;
        cin >>h.location;
        cout << "Enter 1 if you add gym or 0 if not : " << (i + 1) << endl;
        cin >> gym; h.setGym(gym);

        cout << "Enter 1 if you add Pool or 0 if not : " << (i + 1) << endl;
        cin >> pol; h.setPool(pol);
        cout << "Enter Number of Stars : " << (i + 1) << endl;
        cin >> str; h.setNo_stars(str);
        cout << "Enter Free Meals : " << (i + 1) << endl;
        cin >> h.free_meals;
       
        cout << "Enter Rate of Hotel num of : " << (i + 1) << endl;
        cin >> rte; h.setRate(rte);
        cout << " what number of rooms in this hotel \n" << endl;
        int number_ofRooms;
        cin >> number_ofRooms;
        h.no_of_rooms = number_ofRooms;
        for (int j = 0; j < number_ofRooms; j++) {
            cout << "enter the id of the room number : " << " " << (j + 1) << endl;

            cin >> h.room.id;
            
            cout << "enter 1 if u want this room singl or 0 for double : " << "  " << (j + 1) << endl;
            cin >> h.room.status;
        
            cout << "enter 1 if u want tv in room or 0 if not : " << "  " << (j + 1) << endl;
            cin >> h.room.tv;
            
            cout << "enter 1 if u want wifi in room or 0 if not : " << "  " << (j + 1) << endl;
            cin >> h.room.wifi;
        
            cout << "enter day of room number : " << "  " << (j + 1) << endl;
            cin >> h.room.day;
          
            cout << "enter month of room number : " << "  " << (j + 1) << endl;
            cin >> h.room.month;
          
        }
    
        Hotel_vec.insert(Hotel_vec.begin() + i, h);
        size1++;
    }

}

