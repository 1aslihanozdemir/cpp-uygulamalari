#include <iostream>
using namespace std;

int main(){
	string sys_username="admin";
	string sys_password="passwd1";
	string username,password;
	cout << "username: " << endl;
	cin >> username;
	cout << "password: " << endl;
	cin >> password;
	while(sys_username!=username || sys_password!=password){
		cout << "Parola veya kullanici adi yanlis" << endl;
		cout << "username: " << endl;
		cin >> username;
		cout << "password: " << endl;
		cin >> password;

	}
	cout << "Parola ve kullanici adi dogru!!";
	
	return 0;
}