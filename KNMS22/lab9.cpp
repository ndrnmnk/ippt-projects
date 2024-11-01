#include <iostream>
#include <vector>

using namespace std;

class worker {
   public:

       friend ostream& operator<<(ostream& os, const worker& w) {
           os << "Ім'я: " << w.LastName << ", Посада: " << w.Job << ", Оклад: " << w.Salary;
           return os;
       }  // унарний, допомагає виводити дані

       worker& operator++() {
           Salary *= 1.15;
           return *this;
       }  // унарний, підвищує зарплату на 15%


       bool operator==(const worker& other) const {
           return (LastName == other.LastName) && (Job == other.Job) && (Salary == other.Salary);
       }  // бінарний, порівнює 2 робітників


       worker operator++(int) { // Постфіксний ++
           worker temp = *this;
           Salary *= 1.15;
           return temp;
       } // бінарний, підвищує зарплату на amount


       worker() {
           LastName = "Не вказано";
           Job = "Не вказано";
           Salary = 0;
       };

       worker(string last_name, string job, int salary) {
           LastName = last_name;
           Job = job;
           Salary = salary;
       };

       string get_last_name() {
           return LastName;
       };

       void set_job(string job) {
           Job = job;
       };

       void promote() {
           Salary *= 1.15;
       }

       ~worker() {
           cout << "worker " << LastName << " got fired\n";
       };

   private:
       string LastName;
       string Job;
       int Salary;
};

class factory {
   public:
       vector<worker> arr = {};

       void AddWorker() {
           arr.emplace_back(worker());
       };

       void AddWorker(string LastName, string Job, int Salary) {
           arr.emplace_back(worker(LastName, Job, Salary));
       };

       void PromoteAll() {
           for (int i = 0; i < arr.size(); i++) {
               arr[i]++;
           }
       };

       void Ivan() {
           for (int i = 0; i < arr.size(); i++) {
               if (arr[i].get_last_name().rfind("Іван", 0) == 0) {
                   arr[i].set_job("Інженер");
               }
           }
       };

       void PrintAllInfo() {
           for (int i = 0; i < arr.size(); i++) {
               cout << i << ". " << arr[i] << endl;
           }
       };

};

int main() {
   int choise, t3;
   string t1, t2;
   factory HTZ;
   while (1) {
       cout << "Натисніть 0 щоб вийти, 1 - додати робітника за змовчанням, 2 - додати робітника за даними,\n3 - підняти всім оклад на 15%, 4 - назначити всіх Іванів інженерами,\n5 - вивести інформацію\n";
       cin >> choise;
       switch (choise) {
           case 0:
               return 0;
           case 1:
               HTZ.AddWorker();
               break;
           case 2:
               cout << "\nІм'я робітника: ";
               cin >> t1;
               cout << "Посада робітника: ";
               cin >> t2;
               cout << "Зарплата робітника: ";
               cin >> t3;
               HTZ.AddWorker(t1, t2, t3);
               break;
           case 3:
               HTZ.PromoteAll();
               break;
           case 4:
               HTZ.Ivan();
               break;
           case 5:
               HTZ.PrintAllInfo();
               break;
       }
   };
}