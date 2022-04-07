#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Node
{
    public: 
    char name;
    char parent;
    vector <Node*> child_nodes {};
    int depth;
    
    Node(char given_name, char given_parent = 0, int given_depth = 0)
    {
        name = given_name;
        parent = given_parent;
        depth = given_depth;
    }
    ~Node(){}
    
    int get_depth()
    {
        return depth;
    }
    
    char get_name()
    {
        return name;
    }
    
    char get_parent()
    {
    	return parent;
	}
	
	void add_child(Node* child)
	{
		child_nodes.push_back(child);
	}
};

void plot_graph(vector <Node*> &main_storage, int &max_depth)
{
	char node_name, node_parent;
    unsigned short depth = 1;
    
    cout << "Enter the root node name: ";
    cin >> node_name;
    Node* new_node = new Node(node_name, node_parent, depth);
    main_storage.push_back(new_node);
    
    while(1)
    {
    	char choice, to_compare;
    	int current_depth;
    	vector<Node*>::iterator itr;
    	Node *pointer = NULL;
    	
    	cout << endl << "Do you want to continue making the graph (Y/N): ";
    	cin >> choice;
    	
    	if (choice == 'N' ||  choice == 'n')
    	{
    		break;
		}
		else if(choice == 'Y' || choice =='y')
		{
			cout << "Enter the name of the new node: ";
			cin >> node_name;
			cout << "Enter the parent node name: ";
    		cin >> node_parent;
    	
    		for(itr = main_storage.begin(); itr != main_storage.end(); ++itr)
    		{
    			to_compare = (*itr)->get_name();
    			current_depth = (*itr)->get_depth();
    			
    			if(to_compare != node_parent)
    			{
    				continue;
				}
				else if(to_compare == node_parent)
    			{
    				current_depth++;
    				max_depth = current_depth;
    				Node* new_node = new Node(node_name, node_parent, current_depth);
    				main_storage.push_back(new_node);
    				cout << "Added node." << endl;
    				itr -> add_child -> new_node;
    				break;
				}
			}
		}	
	}
}


void search(vector<Node*> vect) 
{
  vector<Node*>::iterator itr;

  for(itr = vect.begin(); itr != vect.end(); ++itr)
	cout << (*itr)->get_name() << " " << (*itr)->get_parent() << " " << (*itr)->get_depth() << endl;
}


void BFS(vector <Node*> main_storage, int max_depth)
{
	char root_node, goal_node;
	vector<Node*>::iterator itr;
	unsigned short final_depth;
	vector <Node> visited_nodes;
	
	cout << "What is the root node? : ";
	cin >> root_node;
	cout << "What is the goal node? :";
	cin >> goal_node;
	
	vector <Node*> breadth_vector;
	
	for(itr = main_storage.begin(); itr != main_storage.end(); ++ itr)
	{
		for(int i = 1; i < max_depth; i++)
		{
			int 
		}
		
	}
	

}

int main()
{
    vector <Node*> main_storage;
    int max_depth {0};
    cout << "Welcome to DFS and BFS. First we will make a graph." << endl;
    plot_graph(main_storage, max_depth);
    search(main_storage);
    cout << max_depth;
    
    
    return 0;
}


