#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){
    string p;
    cout << "Input text: ";
    cin >> p;
    cout << "Reversed text: "<< func1(p)<<endl;
    string lower = func3(p);
    string relower = func1(lower);
       if(lower == relower){
     cout << "Palindrome: Yes"<<endl;
    }
        else
    {
    cout << "Palindrome: No"<<endl;
    }
    return 0;
}
