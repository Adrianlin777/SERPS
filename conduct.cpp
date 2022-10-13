#include<bits/stdc++.h>
using namespace std;

int main(){
    //生成班级名单
	system("listing.exe > listing.txt");
    //生成抽点名单并计算E
	system("algorithm.exe < listing.txt > algorithm.txt");
	return 0;
}
