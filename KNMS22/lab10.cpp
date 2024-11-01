#include <iostream>
#include <vector>
using namespace std;

class worker {
public:
    friend ostream& operator<<(ostream& os, const worker& w) {
        os << "Ім'я: " << w.LastName << ", Посада: " << w.Job << ", Оклад: " << w.Salary;
        return os;
    }  

    worker& operator++() {
        Salary *= 1.15;
        return *this;
    }  

    bool operator==(const worker& other) const {
        return (LastName == other.LastName) && (Job == other.Job) && (Salary == other.Salary);
    }  

    worker operator++(int) { 
        worker temp = *this;
        Salary *= 1.15;
        return temp;
    }

    worker() : LastName("Не вказано"), Job("Не вказано"), Salary(0) {}

    worker(string last_name, string job, int salary) : LastName(last_name), Job(job), Salary(salary) {}

    string get_last_name() const {
        return LastName;
    }

    void set_job(string job) {
        Job = job;
    }

    void promote(double x) {
        Salary *= x;
    }

    virtual ~worker() {
        cout << "worker " << LastName << " got fired\n";
    }

private:
    string LastName;
    string Job;
    int Salary;
};

class ranked_worker : public worker {
public:
    int rank = 0;

    ranked_worker() : worker() {}

    ranked_worker(string last_name, string job, int salary, int rank)
        : worker(last_name, job, salary), rank(rank) {}

    void ranked_promote() {
        if (rank > 90) promote(1.6);
        else if (rank > 75) promote(1.4);
        else if (rank > 60) promote(1.2);
    }
};

class factory {
public:
    vector<ranked_worker> arr;

    void AddWorker() {
        arr.emplace_back(ranked_worker());
        arr.back().rank = 0;
    }

    void AddWorker(string LastName, string Job, int Salary, int Rank) {
        arr.emplace_back(ranked_worker(LastName, Job, Salary, Rank));
    }

    void PromoteAll() {
        for (auto& worker : arr) {  
            worker.ranked_promote();
        }
    }

    void Ivan() {
        for (auto& worker : arr) {
            if (worker.get_last_name().rfind("Іван", 0) == 0) {
                worker.set_job("Інженер");
            }
        }
    }

    void PrintAllInfo() const {
        for (int i = 0; i < arr.size(); ++i) {
            cout << i << ". " << arr[i] << ", Рейтинг: " << arr[i].rank << endl;
        }
    }
};

int main() {
    int choise, t3, t4;
    string t1, t2;
    factory HTZ;
    while (true) {
        cout << "Натисніть 0 щоб вийти, 1 - додати робітника за змовчанням, 2 - додати робітника за даними,\n"
                "3 - підняти всім оклад на основі рейтингу, 4 - назначити всіх Іванів інженерами,\n5 - вивести інформацію\n";
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
                cout << "Рейтинг робітника: ";
                cin >> t4;
                HTZ.AddWorker(t1, t2, t3, t4);
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
    }
}
