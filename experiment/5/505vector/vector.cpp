#include <vector>
using namespace std;
template<typename T>
vector<T> intersection(const vector<T>& v1, const vector<T>& v2)
{
    int len1 = v1.size(), len2 = v2.size();
    vector<T> v;
    for (int i = 0; i < len1; i++)
    {
        for (int j = 0; j < len2; j++)
        {
            if (v1[i] ==v2[j])
            {
                v.push_back(v1[i]);
                break;
            }
            
        }
        
    }
    return v;
}
