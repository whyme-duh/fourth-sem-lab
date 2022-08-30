// Hill Climbing Search
#include <iostream>

using namespace std;

int main()
{
    int vertices;
    // Vertices
    cout << "Enter the number of vertices: ";
    cin >> vertices;

    // Start Node
    int startNode;
    cout << "Enter start node: ";
    cin >> startNode;

    // Goal Node
    int goalNode;
    cout << "Enter goal node: ";
    cin >> goalNode;

    // Adjacency Matrix
    int adjMat[vertices][vertices];
    cout << "Enter adjacency matrix (one row at a time): " << endl;
    for (int i = 0; i < vertices; i++)
        for (int j = 0; j < vertices; j++)
            cin >> adjMat[i][j];

    // Straight Line Distance
    int sld[vertices];
    cout << "Enter straight line distance: " << endl;
    for (int i = 0; i < vertices; i++)
    {
        cout << "Between " << i << " and " << goalNode << ": ";
        cin >> sld[i];
    }

    int currentNode = startNode;
    int flag = 0;
    string path = "";
    while (!flag)
    {
        path = path + to_string(currentNode);
        if (currentNode == goalNode)
        {
            cout << endl
                 << "Path is: ";
            cout << path;
            break;
        }

        path = path + " -> ";

        int minNode = currentNode;
        flag = 1;
        for (int i = 0; i < vertices; i++)
        {
            if (adjMat[currentNode][i])
            {
                if (sld[i] < sld[minNode])
                {
                    flag = 0;
                    minNode = i;
                }
            }
        }
        if (flag)
        {
            cout << "Local Maxima";
        }

        currentNode = minNode;
    }

    return 0;
}