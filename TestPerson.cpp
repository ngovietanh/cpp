#include "Date.h"
#include "Person.h"
#include <string>

using namespace std;

int main(){
	Date birthDaya(12,1,1984);
	string namea("Nguyen Van A");
	Person da(namea, birthDaya);
	da.print();

	Date birthDayb(12,1,1986);
	string nameb("Nguyen Van B");
	Person db(nameb, birthDayb);
	db.print();
	getchar();
    return 0;
}