#include <iostream>
#include <thread>

using namespace std;

void function1(){

	cout << "Hola que taaaaaaaaaal!!!!" << endl;

}

int main(){

	thread t1(function1);        // t1 tarts running
	t1.join();	           // main thread waits for t1 to finish

	return 0;

}
