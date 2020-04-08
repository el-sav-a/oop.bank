#include <iostream>
#include "Account.h"
#include "client.h"
#include "Bank.h"

using namespace std;

int main()
{
    Bank* bank = new Bank(15, 15);
    bank->create_client(1, "Aneta");
    Client* client = bank->get_client(1);
    bank->create_account(1, client);
    Account* ac = bank->get_account(1);


    cout << "Jmeno: " << client->get_name() << endl;
    cout << "Zustatek na ucte : " << ac->get_bal() << endl;
    cout << "Vklad : 150" << endl;
    ac->deposit(150.00);
    cout << "Zustatek na ucte : " << ac->get_bal() << endl;
    cout << "Vyber z uctu : 55.50" << endl;
    ac->with_draw(55.50);
    cout << "Zustatek na ucte : " << ac->get_bal() << endl;
    cout << "\n" << endl;

    bank->create_client(100, "Michal");
    Client* michal = bank->get_client(100);

    bank->create_client(122, "Adela");
    Client* adela = bank->get_client(122);
    bank->create_account(11, michal, adela);
    Account* ucet = bank->get_account(11);

    cout << "Vlastnik uctu: " << ucet->get_owner()->get_name() << endl;
    cout << "Partner uctu: " << ucet->get_partner()->get_name() << endl;
    cout << "Zustatek na ucte : " << ucet->get_bal() << endl;
    cout << "Urokova sazba: " << ucet->get_irate() << "%" << endl;
    cout << "Vklad : 2500" << endl;
    ucet->deposit(2500.00);

    cout << "Zustatok na ucte: " << ucet->get_bal() << endl;
    cout << "Vyber z uctu : 500" << endl;
    ucet->with_draw(500.00);
    cout << "Zustatek na ucte: " << ucet->get_bal() << endl;

    bank->add_interest();
    cout << "Zustatek na ucte po vyplaceni urokove sazby : " << ucet->get_bal() << endl;
    cout << "\n" << endl;

    cout << "Pocet klientu : " << client->get_objects_count() << endl;
    cout << "Pocet uctu : " << ac->get_objects_acc_count() << endl;
    
    cout << "\n" << endl;

}