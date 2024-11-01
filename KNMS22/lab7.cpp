#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
#include "json.hpp"

using json = nlohmann::json;
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

json worker_to_json(worker w) {
    return json{
        {"first_name", w.first_name},
        {"last_name", w.last_name},
        {"fathers_name", w.fathers_name},
        {"room_code", w.room_code},
        {"planed_production", w.planed_production},
        {"actual_production", w.actual_production}
    };
}

void export_data(vector<worker> arr) {
    json json_array = json::array();
    for (int i = 0; i < arr.size(); i++){
        json_array.push_back(worker_to_json(arr[i]));
    }
    ofstream outfile;
    outfile.open("workers.json");
    outfile << json_array.dump(4);
    cout << "Дані експортовано в workers.json\n";
}

worker worker_from_json(const json& j) {
    return worker(
        j.at("first_name").get<string>(),
        j.at("last_name").get<string>(),
        j.at("fathers_name").get<string>(),
        j.at("room_code").get<int>(),
        j.at("planed_production").get<int>(),
        j.at("actual_production").get<int>()
    );
}

void import_data(vector<worker> &arr) {
    string file_path = "workers.json";
    ifstream file(file_path);
    json json_data;
    file >> json_data;
    
    for (const auto& j : json_data) {
        arr.push_back(worker_from_json(j));
    }
    cout << "Імпортовано успішно!\n";
}

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
        cout << "Натисніть 0 щоб вийти, 1 щоб додати робітника, 2 щоб продивитись робітників, 3 щоб експортувати дані або 4 - щоб імпортувати: ";
        cin >> choise;
        switch (choise) {
        case 0:
            return 0;
        case 1:
            create_new_worker(main_array);
            break;
        case 2:
            view_workers(main_array);
            break;
        case 3:
            export_data(main_array);
            break;
        case 4:
            import_data(main_array);
            break;
        }
    };
}