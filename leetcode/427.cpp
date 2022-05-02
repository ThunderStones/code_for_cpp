#include <vector>

using namespace std;
class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;
    
    Node() {
        val = false;
        isLeaf = false;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
};

class Solution {
public:
    Node* construct(vector<vector<int>>& grid) {
        return create(0,0,grid[0].size(),grid.size(),grid);
    }

    Node* create(int x1, int x2, int y1, int y2, vector<vector<int>>& grid) {
        for (int i = x1; i < x2; i++) {
            for(int j = y1; j < y2;j++) {
                if (grid[i][j] != grid[x1][x2]) {
                    return new Node(
                        true,
                        false,
                        create(x1,(x2+x1) / 2, y1,(y2+y1)/2,grid),
                        create((x2+x1) / 2, x2, y1,(y2+y1)/2,grid),
                        create(x1,(x2+x1) / 2,(y2+y1)/2,y2,grid),
                        create((x2+x1) / 2,x2, y1,(y2+y1)/2,grid)
                    );
                }
            }
        }
        //leaf
        return new Node(grid[x1][x2], true);
    }
};

int main(int argc, char const *argv[])
{
    new Solution();
    return 0;
}
