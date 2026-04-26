#include <iostream>
#include <eigen3/Eigen/Dense>
#include<random>

using namespace std;




// Net value calculation

int main()
{
	mt19937 gen(random_device{}());
	uniform_real_distribution<double> rnd(0.0, 1.0);




	constexpr int N = 7; // Number of inputs and weights



	Eigen::VectorXd input = Eigen::VectorXd::NullaryExpr(N, [&]() { return rnd(gen); });
	Eigen::VectorXd weight = Eigen::VectorXd::NullaryExpr(N, [&]() { return rnd(gen); });

	double bias = rnd(gen);
	double netValue = bias + input.dot(weight);
	cout << "Net value: " << netValue << endl;
	return 0;
}