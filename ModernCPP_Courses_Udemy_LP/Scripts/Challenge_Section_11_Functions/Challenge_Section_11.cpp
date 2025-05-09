/*

    To Do:
    # Check if a specific item is on the list

    Known Bugs:
    # Fix invalid input algoritmh, it enters a forever loop if user adds a non-integer value.
    # Fix user can add floats with ','s.

*/

#include <iostream>
#include <vector>

using namespace std;

// Function prototypes - start

char MF_Display_Menu_And_Take_Selection(void);
void MF_Print_List(const vector<int> &vector_int_list);
void MF_Add_Int_To_List(vector<int> &vector_int_list);
void MF_Calculate_Average(const vector<int> &vector_int_list);
void MF_Find_Smallest(const vector<int> &vector_int_list);
void MF_Find_Largest(const vector<int> &vector_int_list);
void MF_Find_Count_of_a_Number(const vector<int> &vector_int_list);
void MF_Clear_List(vector<int> &vector_int_list);
void MF_Remove_Specific_Element_from_List(vector<int> &vector_int_list);
void MF_Find_Item(const vector<int> &vector_int_list);
void MF_Handle_Quit(void);
void MF_Handle_Unknown_Input(void);

void CF_Display_List(const vector<int> &vector_int_list);
double CF_Calculate_Average(const vector<int> &vector_int_list);
int CF_Find_Smallest(const vector<int> &vector_int_list);
int CF_Find_Largest(const vector<int> &vector_int_list);
size_t CF_Find_Count_of_a_Number(const vector<int> &vector_int_list, int target_number);
bool CF_Find_Item(const vector<int> &vector_int_list, int target);

// Function prototypes - end

int main(void)
{

    vector<int> list_int{};
    char selection{};

    cout << "------Welcome-----" << endl;

    do
    {
        selection = MF_Display_Menu_And_Take_Selection();

        switch (selection)
        {
        case 'P':
        {
            MF_Print_List(list_int);
            break;
        }

        case 'A':
        {
            MF_Add_Int_To_List(list_int);
            break;
        }

        case 'M':
        {
            MF_Calculate_Average(list_int);
            break;
        }

        case 'S':
        {
            MF_Find_Smallest(list_int);
            break;
        }

        case 'L':
        {
            MF_Find_Largest(list_int);
            break;
        }

        case 'R':
        {
            MF_Find_Count_of_a_Number(list_int);
            break;
        }

        case 'C':
        {
            MF_Clear_List(list_int);
            break;
        }

        case 'H':
        {
            MF_Find_Item(list_int);
            break;
        }
        case 'N':
        {
            MF_Remove_Specific_Element_from_List(list_int);
            break;
        }

        case 'Q':
        {
            MF_Handle_Quit();
            break;
        }

        default:
        {
            MF_Handle_Unknown_Input();
            break;
        }
        }

        cout << "=========================================\n"
             << endl;

    } while (selection != 'Q');

    return 0;
}

char MF_Display_Menu_And_Take_Selection(void)
{
    char selection{};

    cout << "Make a selection of choices below with their letters" << endl;
    cout << "P - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "R - Find a number's count in the list" << endl;
    cout << "C - Clear all the elements in the list" << endl;
    cout << "N - Remove selected element from the list" << endl;
    cout << "H - Find an item in the list" << endl;
    cout << "Q - Quit" << endl;

    cout << "----------------" << endl;
    cout << "Selection: ";
    cin >> selection;

    cout << endl;

    return toupper(selection);
}

void MF_Print_List(const vector<int> &vector_int_list)
{
    if (vector_int_list.size() == 0)
    {
        cout << "[] - the list_int is empty." << endl;
    }
    else
    {
        CF_Display_List(vector_int_list);
    }
}

void MF_Add_Int_To_List(vector<int> &vector_int_list)
{
    long long int new_element{};
    bool isDuplicate{false};
    bool isInvalid{false};

    do
    {
        isDuplicate = 0;
        isInvalid = 0;

        do
        {
            cout << "Enter the integer you want to add to the list_int: ";
            cin >> new_element;

            if (cin.fail())
            {
                cout << "Invalid input, try to enter an integer." << endl;
                isInvalid = 1;
            }
            else
            {
                isInvalid = 0;
            }
        } while (isInvalid);

        // if (cin.fail()) // input validation in case of inputs other than integers
        // {
        //     isInvalid = true;
        //     cout << "Invalid input, try to enter an integer." << endl;
        //     continue;
        // }
        // else
        // {
        //     isInvalid = false;
        // }

        for (int element : vector_int_list)
        {
            if (element == new_element)
            {
                isDuplicate = true;
                cout << "Duplicate input, you've already entered this, try a different input." << endl;
            }
            else
            {
                isDuplicate = false;
            }
        }

    } while (isDuplicate == true || isInvalid == true);

    vector_int_list.push_back(new_element);
    cout << new_element << " is added to the list_int.\nPress 'P' on the menu to display list_int elements." << endl;
}

void MF_Calculate_Average(const vector<int> &vector_int_list)
{
    if (vector_int_list.size() == 0)
    {
        cout << "Unable to calculate the mean - no data" << endl;
    }
    else
    {
        cout << "Average of the elements in the list_int is: " << CF_Calculate_Average(vector_int_list) << endl;
    }
}

void MF_Find_Smallest(const vector<int> &vector_int_list)
{
    if (vector_int_list.size() == 0)
    {
        cout << "Unable to determine the smallest number - list_int is empty." << endl;
    }
    else
    {
        cout << "The smallest number is " << CF_Find_Smallest(vector_int_list) << endl;
    }
}

void MF_Find_Largest(const vector<int> &vector_int_list)
{
    if (vector_int_list.size() == 0)
    {
        cout << "Unable to determine the largest number - list_int is empty." << endl;
    }
    else
    {
        cout << "The largest number is " << CF_Find_Largest(vector_int_list) << endl;
    }
}

void MF_Find_Count_of_a_Number(const vector<int> &vector_int_list)
{
    if (vector_int_list.size() == 0)
    {
        cout << "Can't do it because the list_int is empty.\nFirst, you need to fill the list_int." << endl;
    }
    else
    {
        int target_number{};
        cout << "Enter the number you want to find it's count: ";
        cin >> target_number;

        cout << target_number << " occurs " << CF_Find_Count_of_a_Number(vector_int_list, target_number) << " times in the list_int." << endl;
    }
}

void MF_Clear_List(vector<int> &vector_int_list)
{
    if (vector_int_list.size() == 0)
    {
        cout << "The list_int is already clear, fill it first." << endl;
    }
    else
    {
        vector_int_list.clear();
        cout << "The list_int is now cleared." << endl;
    }
}

void MF_Remove_Specific_Element_from_List(vector<int> &vector_int_list)
{
    if (vector_int_list.size() == 0)
    {
        cout << "The list_int is already clear, fill it first." << endl;
    }
    else
    {
        int element_to_be_removed{};
        int valid_input{};

        cout << "[ ";
        for (int item : vector_int_list)
        {
            cout << item << " ";
        }
        cout << "]" << endl;

        while (valid_input == 0)
        {
            cout << "Which element you want to remove from above?: ";
            cin >> element_to_be_removed;

            for (size_t i{}; i < vector_int_list.size(); i++)
            {
                if (element_to_be_removed == vector_int_list.at(i))
                {
                    valid_input = 1;
                }
            }

            if (valid_input == 0)
            {
                cout << "Invalid input, please enter again: " << endl;
            }
        }

        auto rem_index = find(vector_int_list.begin(), vector_int_list.end(), element_to_be_removed);
        vector_int_list.erase(rem_index);
    }
}

void MF_Find_Item(const vector<int> &vector_int_list)
{
    if (vector_int_list.size() == 0)
    {
        cout << "The list is empty, fill it first, then search." << endl;
    }
    else
    {
        int target{};
        cout << "Enter the integer you'd want to find: ";
        cin >> target;

        if (CF_Find_Item(vector_int_list, target) == 1)
        {
            cout << target << " is present in the list." << endl;
        }
        else
        {
            cout << "Couldn't find " << target << " in the list." << endl;
        }
    }
}

void MF_Handle_Quit(void)
{
    cout << "Quitting, goodbye..." << endl;
}

void MF_Handle_Unknown_Input(void)
{
    cout << "Unknown selection, please try again." << endl;
}

void CF_Display_List(const vector<int> &vector_int_list)
{
    cout << "[ ";
    for (int item : vector_int_list)
    {
        cout << item << " ";
    }
    cout << "]" << endl;
}

double CF_Calculate_Average(const vector<int> &vector_int_list)
{
    int sum{};

    for (int item : vector_int_list)
    {
        sum += item;
    }

    return (static_cast<double>(sum) / vector_int_list.size());
}

int CF_Find_Smallest(const vector<int> &vector_int_list)
{
    int smallest_item{vector_int_list.at(0)};

    for (long long unsigned int i{}; i < vector_int_list.size(); i++)
    {
        if (vector_int_list.at(i) < smallest_item)
        {
            smallest_item = vector_int_list.at(i);
        }
    }

    return smallest_item;
}

int CF_Find_Largest(const vector<int> &vector_int_list)
{
    int largest_item{vector_int_list.at(0)};

    for (long long unsigned int i{}; i < vector_int_list.size(); i++)
    {
        if (vector_int_list.at(i) > largest_item)
        {
            largest_item = vector_int_list.at(i);
        }
    }

    return largest_item;
}

size_t CF_Find_Count_of_a_Number(const vector<int> &vector_int_list, int target_number)
{

    size_t count{};

    for (int item : vector_int_list)
    {
        if (item == target_number)
        {
            count++;
        }
    }

    return count;
}

bool CF_Find_Item(const vector<int> &vector_int_list, int target)
{
    for (size_t i{}; i < vector_int_list.size(); i++)
    {
        if (target == vector_int_list.at(i))
        {
            return 1;
        }
    }

    return 0;
}