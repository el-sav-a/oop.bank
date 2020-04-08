#include <iostream>
#include "Bank.h"
#include "Account.h"
#include "Client.h"



using namespace std;

int main()
{
    Bank* bank = new Bank(15, 15);
    bank->create_client(1, "Aneta");
    Client* client = bank->get_client(1);
    bank->create_account(1, client);
    Account* ac = bank->get_account(1);


    cout << "Jmeno: " << client->get_name() << endl;
    cout << "Zustatek na ucte : " << ac->get_balance() << endl;
    cout << "Vklad : 150" << endl;
    ac->deposit(150.00);
    cout << "Zustatek na ucte : " << ac->get_balance() << endl;
    cout << "Vyber z uctu : 55.50" << endl;
    ac->with_draw(55.50);
    cout << "Zustatek na ucte : " << ac->get_balance() << endl;
    cout << "\n" << endl;

    bank->create_client(100, "Michal");
    Client* michal = bank->get_client(100);

    bank->create_client(122, "Adela");
    Client* adela = bank->get_client(122);
    bank->create_account(11, michal, adela, 1.8);
    Account* ucet = bank->get_account(11);

    cout << "Vlastnik uctu: " << ucet->get_owner()->get_name() << endl;
    cout << "Partner uctu: " << ucet->get_partner()->get_name() << endl;
    cout << "Zustatek na ucte : " << ucet->get_balance() << endl;
    cout << "Urokova sazba: " << ucet->get_interest_rate() << "%" << endl;
    cout << "Vklad : 2500" << endl;
    ucet->deposit(2500.00);

    cout << "Zustatok na ucte: " << ucet->get_balance() << endl;
    cout << "Vyber z uctu : 500" << endl;
    ucet->with_draw(500.00);
    cout << "Zustatek na ucte: " << ucet->get_balance() << endl;
  
    bank->add_interest();
    cout << "Zustatek na ucte po vyplaceni urokove sazby : " << ucet->get_balance() << endl;
    cout << "\n" << endl;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu


