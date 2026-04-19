#include <iostream>
#include <vector>
#include<random>




using namespace std;


int main()
{

	random_device rd;
	mt19937 gen(rd());
	uniform_real_distribution<float> rnd(0.0f, 1.0f);
	
	vector<float> input, weight;
	for (int i = 0; i < 7; i++)
	{
		input.push_back(rnd(gen));
		weight.push_back(rnd(gen));
	}
	float bias = rnd(gen);

	float sum = bias;


	for (size_t i = 0;i< input.size(); i++)
	{
		float mult = input[i] * weight[i];


		 sum = sum + mult;
	}

	cout << "Net value:" << sum;



	return 0;
}