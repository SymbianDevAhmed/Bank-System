#include "Admin.h"
#include "Client.h"

int main() {
    Admin adm1(1, "Ahmed", "Ah1234Ah", 5000);
    Admin adm2(2, "Mahmoud", "Moh123Moh", 6000);
    Admin adm3(3, "JuBa", "Ju1234", 4000);

    Employee emp1(1, "Ahmed", "Ah1234Ah", 10000);
    Employee emp2(2, "Mahmoud", "Moh123Moh", 20000);
    Employee emp3(3, "JuBa", "Ju1234", 4000);

    Client cln1(1, "Ahmed", "Ah1234Ah", 100000);
    Client cln2(2, "Mahmoud", "Moh123Moh", 200000);
    Client cln3(3, "JuBa", "Ju1234", 500);

    cout << endl << "**********|ADMIN|**********" << endl;

    //Admin 1
    cout << endl << "#Before" << endl;
    adm1.displayInfo();
    adm1.setSalary(5500);
    cout << endl << "#After" << endl;
    adm1.displayInfo();

    //Admin 2
    cout << endl << "#Before" << endl;
    adm2.displayInfo();
    adm2.setSalary(6500);
    cout << endl << "#After" << endl;
    adm2.displayInfo();

    //Admin 3
    cout << endl << "#Before" << endl;
    adm3.displayInfo();
    adm3.setSalary(5000);
    cout << endl << "#After" << endl;
    adm3.displayInfo();

    cout << endl << "**********|EMPLOYEE|**********" << endl;

    //Employee 1
    cout << endl << "#Before" << endl;
    emp1.displayInfo();
    emp1.setSalary(11000);
    cout << endl << "#After" << endl;
    emp1.displayInfo();

    //Employee 2
    cout << endl << "#Before" << endl;
    emp2.displayInfo();
    emp2.setSalary(21000);
    cout << endl << "#After" << endl;
    emp2.displayInfo();

    //Employee 3
    cout << endl << "#Before" << endl;
    emp3.displayInfo();
    emp3.setSalary(5000);
    cout << endl << "#After" << endl;
    emp3.displayInfo();

    cout << endl << "**********|CLIENT|**********" << endl;

    //Client 1
    cout << endl << "#Before" << endl;
    cln1.displayInfo();
    cln1.setBalance(110000);
    cout << endl << "#After" << endl;
    cln1.displayInfo();

    //Client 2
    cout << endl << "#Before" << endl;
    cln2.displayInfo();
    cln2.setBalance(210000);
    cout << endl << "#After" << endl;
    cln2.displayInfo();

    //Client 3
    cout << endl << "#Before" << endl;
    cln3.displayInfo();
    cln3.setBalance(5000);
    cout << endl << "#After" << endl;
    cln3.displayInfo();

    return 0;
}