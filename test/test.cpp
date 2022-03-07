#include <iostream>
using namespace std;

//10-1//

void TestBrackets(char cArr[20])
{
    int iCounter1 = 0;
    
    do
    {
        if (cArr[iCounter1] != 0)
        {
            if (cArr[iCounter1] == ']' || cArr[iCounter1] == '}' || cArr[iCounter1] == ')')
            {
                cout << "Была введена неправильная скобочная последовательность" << endl;
                return;
            }
            else if (cArr[iCounter1] == '[' || cArr[iCounter1] == '{' || cArr[iCounter1] == '(')
            {
                break;
            }
        }

        iCounter1++;

    } while (iCounter1 < 20);

    iCounter1 = 0;
    int iArrForCounter[3]{};
    
    do
    {
        if (cArr[iCounter1] == ']' || cArr[iCounter1] == '[')
        {
            iArrForCounter[0] += 1;
        }
        else if (cArr[iCounter1] == '{' || cArr[iCounter1] == '}')
        {
            iArrForCounter[1] += 1;
        }
        else if (cArr[iCounter1] == '(' || cArr[iCounter1] == ')')
        {
            iArrForCounter[2] += 1;
        }
        else if (cArr[iCounter1] == 0 && cArr[iCounter1 + 1] == 0)
        {
            break; 
        }
  
        iCounter1++;

    } while (iCounter1 < 20);
    
    iCounter1 = 0;

    // iArrForCounter[0] = [ либо ]
    // iArrForCounter[1] = { либо }
    // iArrForCounter[2] = ( либо )

    do
    {
        if (iArrForCounter[iCounter1] % 2 == 0)
        {
            iCounter1++;
        }
        else
        {
            cout << "Была введена неправильная скобочная последовательность" << endl;
            return;
        }

    } while (iCounter1 < 3);

    cout << "Была введена правильная скобочная последовательность" << endl;
    return;
}

//10-2//

struct Node {
    int val;
    Node* next;

    Node(int _val) : val(_val), next(nullptr) {}
};

int iCounter = 0;

struct list {

    Node* first1;
    Node* last1;

    list() : first1(nullptr), last1(nullptr){};

    bool is_empty() 
    {
        return first1 == nullptr;
    }

    void push_back(int _val)
    {

        Node* p = new Node(_val);

        if (is_empty()) 
        {
            first1 = p;

            last1 = p;

            return;
        }

        last1->next = p;

        last1 = p;
    }

    void print() 
    {
        if (is_empty()) return;

        Node* p = first1;

        while (p) 
        {
            iCounter++;

            cout << p->val << " ";

            p = p->next;
        }

        cout << endl;
    }

    int* iArr = new int[iCounter];

    void Coplist()
    {
        int i = 0;

        if (is_empty()) return;

        Node* p = first1;

        while (p)
        {
            //iArr[i++] = p->val;

            if (iArr[i] != p->val)
            {
                cout << "[" << (iArr[i] = p->val) << "]" << "\t";

                cout << iArr + i << endl;
            }
            
            i++;

            p = p->next;
        }
    }

    void TestSort()
    {
        int x = 0;

        if (is_empty()) return;

        Node* p = first1;

        while (p)
        {
            if (x > p->val)
            {
                cout << "Данный список не отсортирован" << endl;
                return;
            }

            x = p->val;

            p = p->next;
        }

    }
};

//10-3//

int main()
{
	setlocale(LC_ALL, "ru");
    //10-1//
    /*([])(), {}(), ([{}]),
    неправильных — )(, ())({ ), (, ]) }), ([(]) для скобок[, (, { .Например: (2 + (2 * 2))
    или[2 / {5 * (4 + 7)}]*/

    char cArr[20]{"{5 * (4 + 7)}]"};

    TestBrackets(cArr);

    cout << endl;
    //10-2//

    list l;

    l.push_back(3);
    l.push_back(123);
    l.push_back(8);

    l.print();

    l.Coplist();

    l.push_back(8); //test

    l.Coplist();

    //10-3//

    l.TestSort();

	return 0;
}
