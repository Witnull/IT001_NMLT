
#include <iostream>
using namespace std;
#define MAX 100

bool isBenford(int a[MAX], int n){
    int t1 = 3;
    int t4 = 1;
     for(int i = 0; i < n; i++){
        string s = to_string(a[i]);
        if(s[0] == '1') t1--;
        if(s[0] == '4') t4--;
      //  cout << s <<' '<< t1<<' ' << t4<< endl;
    }
    return(t1 == 0 && t4 == 0)?true:false;
}

void Nhapmang(int (&a)[MAX],int n){
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        a[i] = x;
    }
}
int main()
{
	int a[MAX], n = 10;
	Nhapmang(a, n);
	if (isBenford(a, n) == true)
		cout << "TRUE" << endl;
	else
		cout << "FALSE" << endl;
	return 0;
}
