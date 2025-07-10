#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
    int total_marks;
};

int main()
{
    int n;
    cin >> n;
    Student arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].nm >> arr[i].cls >> arr[i].s >> arr[i].id >> arr[i].math_marks >> arr[i].eng_marks;

        int totalMark = arr[i].math_marks + arr[i].eng_marks;

        arr[i].total_marks = totalMark;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i].total_marks <= arr[j].total_marks)
            {
                if (arr[i].total_marks == arr[j].total_marks)
                {
                    if (arr[i].id > arr[j].id)
                    {
                        swap(arr[i], arr[j]);
                    }
                }
                else
                {

                    swap(arr[i], arr[j]);
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i].nm << " " << arr[i].cls << " " << arr[i].s << " " << arr[i].id << " " << arr[i].math_marks << " " << arr[i].eng_marks << endl;
    }

    return 0;
}
