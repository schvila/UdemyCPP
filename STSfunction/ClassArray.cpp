#include <iostream>
#include <string>

template<int N>
class Array
{
	int size{ N };
	int values[N];
	friend std::ostream& operator<<(std::ostream &os, const Array<N>& arr)
	{
		os << "[ ";
		for(const auto&val:arr.values)
		{
			os << val << " ";
		}
		os << "]" << std::endl;
		return os;
	}
public:
	Array() = default;
	Array(int init_val)
	{
		for (auto& val : values)
		{
			val = init_val;
		}
	}
	void fill(int val)
	{
		for (auto& item : values)
		{
			item = val;
		}
	}
	int get_size() const { return size; }

	//overloaded subscript operator for easy use
	int& operator[](int index)
	{
		return values[index];
	}

	
	
};
int main3()
{
	Array<5> nums;
	std::cout << "the size of nums is: " << nums.get_size() << std::endl;
	std::cout << nums << std::endl;
	nums.fill(0);
	std::cout << nums << std::endl;

	nums.fill(10);
	std::cout << nums << std::endl;
	nums[0] = 1000;
	nums[3] = 3000;
	std::cout << nums << std::endl;

	Array<100> nums2{ 1 };
	std::cout << "the size of nums2 is: " << nums2.get_size() << std::endl;
	std::cout << nums2 << std::endl;
	return 0;


}