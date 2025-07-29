#include <iostream>
using namespace std;
#include <vector>
#include <list>
#include <stack>

void pairs()
{
    pair<int, int> p = {1, 2};

    cout << "First - " << p.first << ", Second - " << p.second << endl;

    pair<int, pair<int, int>> p2 = {1, {3, 4}};
    cout << p2.second.second << endl;

    pair<int, int> arr[] = {{1, 2},
                            {3, 4},
                            {5, 6}};

    cout << arr[2].second << endl;
}

void vectors()
{
    vector<int> v;

    v.push_back(2);

    cout << v[0] << endl;

    v.emplace_back(9);
    cout << v[1] << endl;
}

void lists()
{
    list<int> ls;
    ls.push_back(34);
    ls.emplace_back(23);

    ls.push_front(90);
    ls.emplace_front(78);
}

void stacks()
{
    stack<int> st;
    st.push(5);
    st.push(5);
    st.push(5);
    st.push(5);
    st.push(5);
    st.emplace(10);

    cout << st.top();
    st.pop();

    cout << st.top();

    cout << st.empty();

    stack<int> st1, st2;
    st1.swap(st2);
}

int main()
{
    // pairs();
    // vectors();
    // lists();
    stacks();

    return 0;
}