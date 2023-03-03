#include <bits/stdc++.h>
using namespace std;

void add()
{
    string id;
    cout << "ENTER ID OF THE EMPLOYEE: ";
    cin >> id;

    string name;
    cout << "ENTER NAME OF THE EMPLOYEE: ";
    cin >> name;

    string age;
    cout << "ENTER AGE OF THE EMPLOYEE: ";
    cin >> age;

    fstream op;
    op.open("file.txt", ios::app);

    string ans = id + " " + name + " " + age + "\n";
    op << ans;
}

void del()
{
    int n;
    cout << "ENTER THE ROW NUMBER: ";
    cin >> n;

    ifstream is("file.txt");
    ofstream ofs;

    ofs.open("temp.txt", ofstream::out);
    char c;

    int cnt = 1;

    while (is.get(c))
    {
        if (c == '\n')
        {
            cnt++;
        }
        if (cnt != n+1)
        {
            ofs << c;
        }
    }
    ofs.close();
    is.close();
    remove("file.txt");
    rename("temp.txt", "file.txt");
}

void display()
{
    fstream op;
    op.open("file.txt");
    string ans;

    while (!op.eof())
    {
        getline(op, ans);
        cout << ans << "\n";
    }
}

int main()
{
    bool flag = true;
    while (flag)
    {
        cout << "1. ADD IN THE RECORD\n";
        cout << "2. DELETE A REACORD\n";
        cout << "3. DISPLAY THE RECORD\n";
        cout << "4. TERMINATE\n";

        int n;
        cout << "ENTER CHOICE: ";
        cin >> n;
        switch (n)
        {
        case 1:
            add();
            break;
        case 2:
            del();
            break;
        case 3:
            display();
            break;
        case 4:
            flag = false;
            break;
        }
    }

    return 0;
}