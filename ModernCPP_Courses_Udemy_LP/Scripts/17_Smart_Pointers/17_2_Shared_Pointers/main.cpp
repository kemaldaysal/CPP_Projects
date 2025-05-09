// Section 17
// Shared Pointers
#include <iostream>
#include <memory> // for smart pointers
#include <vector>

#include "Test_Class.h"
#include "Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Savings_Account.h"

using namespace std;

int main()
{
    // use_count - the number of shared_ptr objects managing the heap object

    std::shared_ptr<int> p1{new int{100}};
    std::cout << "Use count: " << p1.use_count() << std::endl; // 1 (only p1 is pointing to that shared integer)

    std::shared_ptr<int> p2 {p1};
    std::shared_ptr<int> p3 {p1};
    std::cout << "Use count p1: " << p1.use_count() << std::endl; // 3 
    std::cout << "Use count p2: " << p2.use_count() << std::endl; // 3
    std::cout << "Use count p3: " << p3.use_count() << std::endl; // 3

    p1.reset();
    std::cout << "--p1 reseted--" << std::endl;
    std::cout << "Use count p1: " << p1.use_count() << std::endl; // 0 since p1.reset() made p1 nullptr, it doesn't point to shared heap area now
    std::cout << "Use count p2: " << p2.use_count() << std::endl; // 2 since p2 and p3 (2) now point to same integer on heap
    std::cout << "Use count p3: " << p3.use_count() << std::endl; // 2 since p2 and p3 (2) now point to same integer on heap 

    p2.reset();
    std::cout << "--p2 reseted--" << std::endl;
    std::cout << "Use count p1: " << p1.use_count() << std::endl; // 0 
    std::cout << "Use count p2: " << p2.use_count() << std::endl; // 0 since p2.reset() made p2 nullptr, it doesn't point to shared heap area now
    std::cout << "Use count p3: " << p3.use_count() << std::endl; // 1 since only p3 (1) now points to same integer on heap 

    p2.reset();
    std::cout << "--p2 reseted again--" << std::endl;
    std::cout << "Use count p1: " << p1.use_count() << std::endl; // 0 no change
    std::cout << "Use count p2: " << p2.use_count() << std::endl; // 0 no change
    std::cout << "Use count p3: " << p3.use_count() << std::endl; // 1 no change

    std::shared_ptr<int> p4 {p3};
    std::cout << "Use count p1: " << p1.use_count() << std::endl; // 0
    std::cout << "Use count p2: " << p2.use_count() << std::endl; // 0 
    std::cout << "Use count p3: " << p3.use_count() << std::endl; // 2 since p3 and p4 (2) now point to same integer on heap
    std::cout << "Use count p4: " << p4.use_count() << std::endl; // 2 since p3 and p4 (2) now point to same integer on heap

    std::cout << "----- 2nd section starts here -----" << std::endl;

    std::shared_ptr<Test_Class>ptr {std::make_shared<Test_Class> (100)};
    func(ptr); // use count 2 (ptr, ptr inside func) // we're making a copy of the shared pointer object
    std::cout << "Use count: " << ptr.use_count() << std::endl; // 1 (ptr) since func is done, ptr inside func is doesn't get used anymore

    { // a new scope
        std::shared_ptr<Test_Class> ptr1 {ptr};
        std::cout << "Use count: " << ptr.use_count() << std::endl; // 2 (ptr, ptr1)
        {   // another new scope
            std::shared_ptr <Test_Class> ptr2 {ptr};
            std::cout << "Use count: " << ptr.use_count() << std::endl; // 3 (ptr, ptr1, ptr2)
            ptr.reset(); 
            std::cout << "Use count: " << ptr1.use_count() << std::endl; // 2 (ptr1, ptr2)    
        }
        std::cout << "Use count: " << ptr.use_count() << std::endl; // 0 since ptr is nullptr now
        std::cout << "Use count: " << ptr1.use_count() << std::endl; // 1 (ptr1), ptr2 is out of scope, destroyed (?) and nulled out automatically !!    
    }

    std::cout << "----- 3rd section starts here -----" << std::endl;
    
    std::shared_ptr<Account> acc1 {std::make_shared<Savings_Account> ("Larry", 2000, 10)}; // acc1 use_count 1
    std::shared_ptr<Account> acc2 {std::make_shared<Checking_Account> ("Jack", 1000)}; // acc2 use_count 1
    std::shared_ptr<Account> acc3 {std::make_shared<Trust_Account> ("Curly", 6000, 3)}; // acc3 use_count 1

    std::vector<shared_ptr<Account>> accounts;
    accounts.push_back(acc1); // acc1 is copied, acc1.use_count +1 -> 2
    accounts.push_back(acc2); // acc2 is copied, acc2.use_count +1 -> 2
    accounts.push_back(acc3); // acc3 is copied, acc3.use_count +1 -> 2

    for (const auto &account: accounts)
    {
        std::cout << *account << std::endl;
        std::cout << "Use count: " << account.use_count() << std::endl;
    } 

    // (??) Use counts didn't change inside the functions since we used the references, we didn't copy them.

    std::cout << "Use count of acc1: " << acc1.use_count() << std::endl; // 2
    std::cout << "Use count of acc2: " << acc2.use_count() << std::endl; // 2
    std::cout << "Use count of acc3: " << acc3.use_count() << std::endl; // 2


    std::cout << "----- main function ends here -----" << std::endl;

    return 0;
}
