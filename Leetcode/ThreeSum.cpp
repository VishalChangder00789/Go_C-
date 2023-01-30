#include <iostream>
#include <set>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;
void print_vector(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
        std::cout << '\t' << v[i];
    std::cout << "\n";
}
void ThreeSum_Brute(vector<int> &nums)
{

    // create a set
    set<vector<int>> s;

    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; i < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (nums[i] + nums[j] + nums[k] == 0)
                {
                    vector<int> v;
                    v.push_back(nums[i]);
                    v.push_back(nums[j]);
                    v.push_back(nums[k]);
                    s.insert(v);
                }
            }
        }
    }

    for (auto i = s.begin(); i != s.end(); i++)
    {
        cout << (int)&i << endl;
        print_vector(*i);
    }
}

void printMap(unordered_map<int, int> &m)
{
    for (auto i = m.begin(); i != m.end(); i++)
    {
        cout << i->first << " -> " << i->second << endl;
    }
}

//////////////////////////////////////////////////////
void ThreeSum_Better(vector<int> &nums)
{
    unordered_map<int, int> m;
    set<vector<int>> s;
    // Adding frequency to the map
    for (int i = 0; i < nums.size(); i++)
    {
        // To the given element frequency will increase
        m[nums[i]]++;
    }

    for (int i = 0; i < nums.size(); i++)
    {
        m[nums[i]]--;
        for (int j = i + 1; j < nums.size(); j++)
        {
            m[nums[j]]--;
            int sum = -(nums[i] + nums[j]);
            if (m.find(sum) != m.end())
            {
                // element is present
                // put into set using a vector in a sorted order
                vector<int> v;
                v.push_back(nums[i]);
                v.push_back(nums[j]);
                v.push_back(sum);

                // sort before putting into set
                sort(v.begin(), v.end());

                s.insert(v);

                print_vector(v);
            }
            m[nums[j]]++;
        }

        m[nums[i]]++;
    }
}

//////////////////////////////////////////////////////
void print_Vector_2(vector<vector<int>> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}
vector<vector<int>> ThreeSum_Optimized(vector<int> &nums)
{

    // Not working for some reason to be with held for later.

    sort(nums.begin(), nums.end());
    vector<vector<int>> v_s;

    for (int i = 0; i < nums.size(); i++)
    {
        if (i == 0 || (i > 0 && nums[i] != nums[i + 1]))
        {
            int h = i + 1;
            int l = nums.size() - 1;
            int target = 0 - nums[i];
            cout << target << endl;
            while (l < h)
            {
                if (nums[l] + nums[h] == target)
                {
                    cout << "Enter" << endl;
                    vector<int> v;
                    v.push_back(nums[i]);
                    v.push_back(nums[l]);
                    v.push_back(nums[h]);
                    print_vector(v);
                    v_s.push_back(v);

                    while (l < h && nums[l] == nums[l + 1])
                        l++;

                    while (l < h && nums[h] == nums[h - 1])
                        h--;

                    l++;
                    h--;
                }
                else if (nums[l] + nums[h] < target)
                {
                    l++;
                }
                else
                {
                    h--;
                }
            }
        }
    }

    print_Vector_2(v_s);

    return v_s;
}

int main()
{
    // vector<int> v{-1, 0, 1, 2, -1, -4};
    vector<int> v{-1, -2, -2, -1, -1, 2, 0, 2, 0, 0, 2};
    // ThreeSum_Brute(-v);
    // ThreeSum_Better(v);
    ThreeSum_Optimized(v);
}