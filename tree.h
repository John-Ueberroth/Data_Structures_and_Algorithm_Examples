//Tree class
class Tree
{
private:
	static int objectCount;    //static member variable 
public:
	//constructor 
	Tree()
	{
		objectCount++;

	}
	//accessor function for object count 
	int getObjectCount() const
	{
		return objectCount;
	}
};

//definition of the static member variable, written 
//outside teh class
int Tree::objectCount = 0;
