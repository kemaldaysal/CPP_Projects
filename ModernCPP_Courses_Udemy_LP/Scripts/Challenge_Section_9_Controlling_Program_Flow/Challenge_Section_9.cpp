/*

    To Do:
*/

#include <iostream>
#include <vector>

using namespace std;
vector<int> list_int{};

int main(void)
{

    char selection{};

    cout << "------Welcome-----" << endl;

    do
    {
        cout << "Make a selection of choices below with their letters" << endl;
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "R - Find a number's count in the list_int" << endl;
        cout << "C - Clear all the elements in the list_int" << endl;
        cout << "N - Remove selected element from the list_int" << endl;
        cout << "Q - Quit" << endl;

        cout << "----------------" << endl;
        cout << "Selection: ";
        cin >> selection;
        cout << endl;

        switch (selection)
        {
        case 'P':
        case 'p':
        {
            if (list_int.size() == 0)
            {
                cout << "[] - the list_int is empty." << endl;
            }
            else
            {
                cout << "[ ";
                for (int item : list_int)
                {
                    cout << item << " ";
                }
                cout << "]" << endl;
            }
            break;
        }

        case 'A':
        case 'a':
        {
            int new_element{};
            bool isDuplicate{false};

            do
            {
                cout << "Enter the integer you want to add to the list_int: ";
                cin >> new_element;

                for (int element : list_int)
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

            } while (isDuplicate == true);

            list_int.push_back(new_element);
            cout << new_element << " is added to the list_int.\nPress 'P' on the menu to display list_int elements." << endl;
            break;
        }

        case 'M':
        case 'm':
        {
            if (list_int.size() == 0)
            {
                cout << "Unable to calculate the mean - no data" << endl;
            }
            else
            {
                int sum{};
                double average{};

                for (int item : list_int)
                {
                    sum += item;
                }

                average = static_cast<double>(sum) / list_int.size();

                cout << "Average of the elements in the list_int is: " << average << endl;
            }
            break;
        }

        case 'S':
        case 's':
        {
            if (list_int.size() == 0)
            {
                cout << "Unable to determine the smallest number - list_int is empty." << endl;
            }
            else
            {

                int smallest_item = list_int.at(0);

                for (int i{}; i < list_int.size(); i++)
                {
                    if (list_int.at(i) < smallest_item)
                    {
                        smallest_item = list_int.at(i);
                    }
                }

                cout << "The smallest number is " << smallest_item << endl;
            }

            break;
        }

        case 'L':
        case 'l':
        {
            if (list_int.size() == 0)
            {
                cout << "Unable to determine the largest number - list_int is empty." << endl;
            }
            else
            {

                int largest_item = list_int.at(0);

                for (int i{}; i < list_int.size(); i++)
                {
                    if (list_int.at(i) > largest_item)
                    {
                        largest_item = list_int.at(i);
                    }
                }

                cout << "The smallest number is " << largest_item << endl;
            }

            break;
        }

        case 'R':
        case 'r':
        {
            if (list_int.size() == 0)
            {
                cout << "Can't do it because the list_int is empty.\nFirst, you need to fill the list_int." << endl;
            }
            else
            {
                int target_number{};
                int count{};
                cout << "Enter the number you want to find it's count: ";
                cin >> target_number;

                for (int item : list_int)
                {
                    if (item == target_number)
                    {
                        count++;
                    }
                }

                cout << target_number << " occurs " << count << " times in the list_int." << endl;
            }
            break;
        }

        case 'C':
        case 'c':
        {
            if (list_int.size() == 0)
            {
                cout << "The list_int is already clear, fill it first." << endl;
            }
            else
            {

                list_int.clear();
                cout << "The list_int is now cleared." << endl;
            }

            break;
        }

        case 'N':
        case 'n':
        {
            if (list_int.size() == 0)
            {
                cout << "The list_int is already clear, fill it first." << endl;
            }
            else
            {
                int element_to_be_removed{};
                int valid_input{};

                cout << "[ ";
                for (int item : list_int)
                {
                    cout << item << " ";
                }
                cout << "]" << endl;

                while (valid_input == 0)
                {
                    cout << "Which element you want to remove from above?: ";
                    cin >> element_to_be_removed;

                    for (size_t i{}; i < list_int.size(); i++)
                    {
                        if (element_to_be_removed == list_int.at(i))
                        {
                            valid_input = 1;
                        }
                    }

                    if (valid_input == 0)
                    {
                        cout << "Invalid input, please enter again: " << endl;
                    }
                }

                auto rem_index = std::find(list_int.begin(), list_int.end(), element_to_be_removed);
                list_int.erase(rem_index);
            }

            break;
        }

        case 'Q':
        case 'q':
        {
            cout << "Quitting, goodbye..." << endl;
            break;
        }

        default:
        {
            cout << "Unknown selection, please try again." << endl;
            break;
        }
        }

        cout << "=========================================\n"
             << endl;

    } while (selection != 'Q' && selection != 'q');

    return 0;
}