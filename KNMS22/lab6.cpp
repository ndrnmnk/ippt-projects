#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class worker {
    public:
        string first_name;
        string last_name;
        string fathers_name;
        int room_code;
        int planed_production;
        int actual_production;

        worker(string fn, string ln, string father, int room, int planned, int actual)
            : first_name(fn), last_name(ln), fathers_name(father), room_code(room),
            planed_production(planned), actual_production(actual) {}
};

void view_workers(vector<worker> arr) {
    bool sorting_method, filter;
    cout << "Введіть 0 щоб сортувати за алфавітом, 1 - за випуском: ";
    cin >> sorting_method;
    cout << "Введіть 0 щоб показати всіх робітників, 1 - лише з перевиконаним планом: ";
    cin >> filter;
    if (sorting_method == 0) {
        sort(arr.begin(), arr.end(), [](const worker& a, const worker& b) {
        return a.last_name < b.last_name;
    });} else {
        sort(arr.begin(), arr.end(), [](const worker& a, const worker& b) {
        return a.actual_production > b.actual_production;
    });
    };
    for (int i = 0; i < arr.size(); i++) {
        if ((filter == 0) || (arr[i].actual_production >= arr[i].planed_production)) {
            cout << arr[i].last_name << ' ' << arr[i].first_name << ' ' << arr[i].fathers_name << " (" << arr[1].room_code << " цех), випуск " << arr[i].actual_production << '/' << arr[i].planed_production << endl;
        }
    }
}

void create_new_worker(vector<worker> &arr) {
    worker temp = {"1", "1", "1", 1, 1, 1};
    cout << "Ім'я робітника: ";
    cin >> temp.first_name;
    cout << "Прізвище робітника: ";
    cin >> temp.last_name;
    cout << "По-батькові робітника: ";
    cin >> temp.fathers_name;
    cout << "Цех: ";
    cin >> temp.room_code;
    cout << "Норма випуску: ";
    cin >> temp.planed_production;
    cout << "Фактичний випуск: ";
    cin >> temp.actual_production;
    arr.push_back(temp);
}

int main() {
    vector<worker> main_array;
   
    bool stop = 0;
    int choise;
    while (1){
        cout << "Натисніть 0 щоб вийти, 1 щоб додати робітника, 2 щоб продивитись робітників: ";
        cin >> choise;
        if (choise == 0) return 0;
        if (choise == 1) create_new_worker(main_array);
        if (choise == 2) view_workers(main_array);
    };
}